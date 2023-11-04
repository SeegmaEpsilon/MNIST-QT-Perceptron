#ifndef MISC_H
#define MISC_H

#include <QObject>
#include <QCoreApplication>

enum activationFunction
{
  sigmoid,
  relu,
  lrelu,
  tanhyber,
  softmax,
};

enum randomType
{
  custom,
  sqrtCount,
  typical,
  nullValues,
};

struct trainSettings
{
  QVector<QVector<double>> trainData;
  int epochs;
  double learningRate;
  int batchSize;
  activationFunction hiddenLayerActivation;
  activationFunction outputLayerActivation;
};

#endif // MISC_H
