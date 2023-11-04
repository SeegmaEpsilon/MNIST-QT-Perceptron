#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
#include <QFile>
#include <QDataStream>

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <QVector>

#include <neuralnetwork.h>
#include <qwidgetpaint.h>
#include <misc.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
  Ui::MainWindow *ui;

public slots:
  void initializeNeuralNetwork();

  void outputToProgressBars(const QVector<double>& output, int target = -1, const QVector<double>& targetData = QVector<double>());

  void slotConsoleLog(const QString& text);
  QString getCurrentTime();
  void trackingConsoleCursor();

  void slotRecognizeDigit(const QVector<double>& drawnData);

private slots:

  void on_pushButton_learn_clicked();

  void on_pushButton_clear_clicked();

  void on_pushButton_validate_clicked();

  void visualizeData(const QVector<double>& data);

  void on_pushButton_reset_clicked();

private:

  DrawingWidget *paintWidget;

  QVector<QVector<double>> trainData;
  QVector<QVector<double>> testData;

  QThread* neuralThread;
  NeuralNetwork* neuralNetwork;
  trainSettings ts;

  bool runningLearning;

signals:
  void signalConsoleLog(const QString& text);

  void signalStartTrain(const trainSettings& ts);

  void signalStartValidate(const QVector<QVector<double>> testData);

};
#endif // MAINWINDOW_H
