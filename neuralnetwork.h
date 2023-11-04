#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H

#include <QDateTime>
#include <QTimer>
#include <QTime>
#include <QElapsedTimer>
#include <QThread>
#include <QObject>
#include <QRandomGenerator>
#include <QDebug>
#include <QtMath>
#include <QElapsedTimer>
#include <QDateTime>
#include <QTimer>
#include <QTime>
#include <QElapsedTimer>
#include <QImage>
#include <QLabel>
#include <QMainWindow>

#include <misc.h>

// За основу кода был взят код с канала "Программный кот", видео "Нейросеть в Qt"
// Видео не закончено и реализована только функция прямого распространения, поэтому *мем с Таносом* Я СДЕЛАЮ ЭТО САМ

// В программе будет 28 * 28 = 784 входных нейронов
// Задаваемое число скрытых нейронов ОДНОГО скрытого слоя
// 10 выходных нейронов, по каждому на каждую цифру (см. лекции по классификации)

class NeuralNetwork : public QObject
{
  Q_OBJECT
public:
  NeuralNetwork(int numInput, int numHidden, int numOutput);

  bool running;

private:
  int countInput;  // Количество входных нейронов
  int countHidden; // Количество скрытых нейронов
  int countOutput; // Количество выходных нейронов

  QVector<double> neuronsInput;  // Скрытые нейроны
  QVector<double> neuronsHidden; // Скрытые нейроны
  QVector<double> neuronsOutput; // Выходные нейроны

  QVector<QVector<double>> weightInputHidden;  // Веса между входным и скрытым слоями
  QVector<QVector<double>> weightHiddenOutput; // Веса между скрытым и выходным слоями

  QVector<double> biasHidden; // Смещения скрытых нейронов
  QVector<double> biasOutput; // Смещения выходных нейронов

  QVector<double> errorsHidden; // Ошибки скрытых нейронов
  QVector<double> errorsOutput; // Ошибки выходных нейронов

  QVector<double> sumWeightedHidden; // Взвешенная сумма нейронов скрытого слоя
  QVector<double> sumWeightedOutput; // Взвешенная сумма нейронов выходного слоя

  QVector<double> propabilityOutput; // Вектор вероятностей принадлежности к цифре

  int lastTargetValue;  // Целевое значение

  activationFunction hiddenActivationFunction;
  activationFunction outputActivationFunction;

  double activate(const double& value, activationFunction activationType = sigmoid);           // Функция активации
  double activateDerivative(const double& value, activationFunction activationType = sigmoid); // Производная функции активации
  double randomizer(int randomType = 0);

  QRandomGenerator randomGenerator; // Рандомайзер для первоначальной инициализации весов

public slots:
  void feedForward(const QVector<double>& inputData, bool needRecognizeDrawnDigit = false); // Функция прямого распространения
  void train(const trainSettings& ts);
  void validate(const QVector<QVector<double>>& testData);
signals:
  void signalDrawOutput(const QVector<double>& output, int target = -1, const QVector<double>& targetData = QVector<double>());
  void signalConsoleLog(const QString& text);

public:

};

#endif // NEURALNETWORK_H
