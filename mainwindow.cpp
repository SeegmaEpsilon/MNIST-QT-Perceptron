#include "mainwindow.h"
#include "ui_mainwindow.h"

QVector<QVector<double>> loadMNISTFromCSV(const QString &filePath) {
  QVector<QVector<double>> mnistData;

  std::ifstream file(filePath.toStdString());
  if (!file.is_open())
  {
    std::cerr << "Failed to open CSV file." << std::endl;
    return QVector<QVector<double>>();
  }

  std::string line;
  bool firstLine = true; // Флаг для пропуска первой строки с заголовками

  while (std::getline(file, line))
  {
    if (firstLine)
    {
      firstLine = false; // Пропустить первую строку
      continue;
    }

    std::istringstream ss(line);
    std::string token;
    QVector<double> row;

    while (std::getline(ss, token, ','))
    {
      try
      {
        double value = std::stod(token);
        row.push_back(value);
      }
      catch (const std::invalid_argument &e)
      {
        std::cerr << "Error while parsing CSV file: " << e.what() << std::endl;
        return QVector<QVector<double>>();
      }
    }

    mnistData.push_back(row);
  }

  return mnistData;
}

void normalizeData(QVector<QVector<double>>& trainData)
{
  for (QVector<double>& dataRow : trainData)
  {
    for (int i = 1; i < dataRow.size(); ++i)  // Начните с индекса 1, чтобы избежать масштабирования метки
    {
      dataRow[i] = dataRow[i] / 255.0 * 0.99 + 0.01;
    }
  }
}

void MainWindow::initializeNeuralNetwork()
{
  int numInput = ui->lineEdit_countInput->text().toInt();  // Количество входных нейронов соответствует размеру изображения
  int numHidden = ui->lineEdit_countHidden->text().toInt();     // Количество скрытых нейронов задается пользователем
  int numOutput = ui->lineEdit_countOutput->text().toInt();      // Количество выходных нейронов для цифр от 0 до 9

  neuralThread = new QThread(this);
  neuralNetwork = new NeuralNetwork(numInput, numHidden, numOutput);

  neuralNetwork->moveToThread(neuralThread);
  neuralThread->start();

  connect(this, SIGNAL(signalStartTrain(const trainSettings&)),
          neuralNetwork, SLOT(train(const trainSettings&)));

  connect(this, SIGNAL(signalStartValidate(const QVector<QVector<double>>)),
          neuralNetwork, SLOT(validate(const QVector<QVector<double>>)));

  connect(neuralNetwork, SIGNAL(signalDrawOutput(const QVector<double>&, int, const QVector<double>&)),
          this, SLOT(outputToProgressBars(const QVector<double>&, int, const QVector<double>&)));

  connect(neuralNetwork, SIGNAL(signalConsoleLog(const QString&)),
          this, SLOT(slotConsoleLog(const QString&)));

  emit signalConsoleLog("Нейронная сеть инициализирована");
}


MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  this->setWindowTitle("Анализатор перцептрона с одним скрытым слоем");

  /* обязательно зарегать эти типы данных, без них потоки не поймут че им посылается */
  qRegisterMetaType<QVector<QVector<double>>>("QVector<QVector<double>>");
  qRegisterMetaType<trainSettings>("trainSettings");

  runningLearning = false;
  paintWidget = new DrawingWidget();
  ui->gridLayout_2->addWidget(paintWidget, 1, 0); // Добавляем виджет в верхний левый угол GridLayout


  connect(this, SIGNAL(signalConsoleLog(const QString&)), this, SLOT(slotConsoleLog(const QString&)));
  connect(paintWidget, SIGNAL(signalDigitDraws(const QVector<double>&)), this, SLOT(slotRecognizeDigit(const QVector<double>&)));
  connect(paintWidget, SIGNAL(signalDrawDigit(const QVector<double>&)), this, SLOT(visualizeData(const QVector<double>&)));

  initializeNeuralNetwork();
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_pushButton_learn_clicked()
{
  static bool once = false;

  runningLearning = runningLearning ? false : true;

  if(!once)
  {
    once = true;

    QString pathToTrainData = QCoreApplication::applicationDirPath() + "/MNIST_csv/mnist_train.csv";

    emit signalConsoleLog("Чтение тренировочных данных из .csv...");
    trainData = loadMNISTFromCSV(pathToTrainData);
    emit signalConsoleLog("Чтение тренировочных данных из .csv завершено успешно");



    // Масштабирование только входных данных в диапазон от 0 до 1
    normalizeData(trainData);
  }

  if(runningLearning)
  {
    ui->pushButton_learn->setText("Остановить обучение");
    // Тренировка нейронной сети с использованием загруженных данных

    ts.trainData = this->trainData;
    ts.epochs = ui->lineEdit_epochs->text().toInt(); // Количество эпох обучения
    ts.learningRate = ui->lineEdit_learningRate->text().toDouble(); // Скорость обучения
    ts.hiddenLayerActivation = (activationFunction)ui->comboBox_hiddenActivationFunction->currentIndex();
    ts.outputLayerActivation = (activationFunction)ui->comboBox_outputActivationFunction->currentIndex();
    emit signalStartTrain(ts);
  }
  else
  {
    ui->pushButton_learn->setText("Обучить");
    neuralNetwork->running = false;
  }
}

void MainWindow::on_pushButton_clear_clicked()
{
  paintWidget->clearDrawing(); // Очищаем виджет
}

void MainWindow::on_pushButton_validate_clicked()
{
  static bool once = false;

  if(!once)
  {
    once = true;

    QString pathToTestData = QCoreApplication::applicationDirPath() + "/MNIST_csv/mnist_test.csv";

    emit signalConsoleLog("Чтение валидационных данных из .csv...");
    testData = loadMNISTFromCSV(pathToTestData);
    emit signalConsoleLog("Чтение валидационных данных из .csv завершено успешно");

    normalizeData(testData);
  }

  emit signalStartValidate(testData);
}

void MainWindow::visualizeData(const QVector<double>& data)
{
  // Определите желаемый размер изображения
  int desiredWidth = ui->label_image->width(); // Ширина
  int desiredHeight = ui->label_image->height(); // Высота

  QImage image(desiredWidth, desiredHeight, QImage::Format_Grayscale8);
  int pixelValueIndex = 0; // Начнем с индекса 1, чтобы пропустить первое значение (метку)
  for (int i = 0; i < desiredHeight; ++i)
  {
      for (int j = 0; j < desiredWidth; ++j)
      {
          // Рассчитайте координаты на исходном изображении на основе размера
          int sourceX = (j * 28) / desiredWidth;
          int sourceY = (i * 28) / desiredHeight;

          // Получите значение пикселя из исходного изображения
          int pixelValue = static_cast<int>(data[pixelValueIndex + sourceY * 28 + sourceX] * 255.0);

          // Инвертируйте цвет (чтобы черный стал черным, а белый стал белым)
          pixelValue = 255 - pixelValue;

          QRgb grayValue = qRgb(pixelValue, pixelValue, pixelValue);
          image.setPixel(j, i, grayValue);
      }
  }

  ui->label_image->setPixmap(QPixmap::fromImage(image));
  ui->label_image->show();
}

void MainWindow::on_pushButton_reset_clicked()
{
  // Сначала останавливаем neuralThread
  neuralThread->quit(); // Завершить поток
  neuralThread->wait(); // Дождаться завершения потока

  // Затем удаляем neuralNetwork
  delete neuralNetwork;

  // Затем удаляем neuralThread
  neuralThread->deleteLater();

  initializeNeuralNetwork();
}


void MainWindow::outputToProgressBars(const QVector<double>& output, int target, const QVector<double>& targetData)
{
  if(!targetData.isEmpty() && runningLearning) visualizeData(targetData);

  int maxElement = std::distance(output.begin(),std::max_element(output.begin(), output.end()));
  ui->label_target->setText(QString::number(target));
  ui->label_mainDigit->setText(QString::number(maxElement));
    for (int digit = 0; digit < output.size(); ++digit)
    {
        QProgressBar* progressBar = findChild<QProgressBar*>(QString("progressBar_digit_%1").arg(digit));
        if (progressBar)
        {
            progressBar->setValue(output[digit] * 100);
        }
    }
}

/* выводим текстовую строку указанного цвета в основную консоль */
void MainWindow::slotConsoleLog(const QString& text)
{
  QTextCharFormat format;
  QString textToConsole;

  format.setForeground(Qt::black);

  textToConsole = tr("> %1 ").arg(getCurrentTime()) + text;
  // Добавляем строку в текстовое поле с установленным цветом
  ui->console->setCurrentCharFormat(format);
  ui->console->append(textToConsole);

  trackingConsoleCursor();
}

/* слежение за последней строкой в консоли (невероятный костыль) */
void MainWindow::trackingConsoleCursor()
{
  QTextCursor cursor = ui->console->textCursor();
  cursor.movePosition(QTextCursor::End);
  ui->console->setTextCursor(cursor);
}

void MainWindow::slotRecognizeDigit(const QVector<double>& drawnData)
{
  // Вызывайте функцию прямого распространения нейронной сети
  neuralNetwork->feedForward(drawnData, true);
}

QString MainWindow::getCurrentTime()
{
  QString time = QTime::currentTime().toString("HH:mm:ss    |    ");
  QString date = QDateTime::currentDateTime().toString("dd.MM.yyyy — ");
  return date + time;
}
