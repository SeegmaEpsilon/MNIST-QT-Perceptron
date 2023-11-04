#include "neuralnetwork.h"

NeuralNetwork::NeuralNetwork(int numInput, int numHidden, int numOutput)
{
  countInput = numInput;
  countHidden = numHidden;
  countOutput = numOutput;

  // Инициализация векторов нейронов
  neuronsHidden.resize(countInput);
  neuronsHidden.resize(countHidden);
  neuronsOutput.resize(countOutput);

  errorsOutput.resize(countOutput);
  errorsHidden.resize(countHidden);

  propabilityOutput.resize(countOutput);

  sumWeightedHidden.resize(countHidden);
  sumWeightedOutput.resize(countOutput);

  biasHidden.resize(countHidden);
  biasOutput.resize(countOutput);

  int RandomType = custom;

  // Заполнение весов между входным и скрытым слоем
  weightInputHidden.resize(countInput);
  for(int i = 0; i < countInput; ++i)
  {
    weightInputHidden[i].resize(countHidden);
    for(int j = 0; j < countHidden; ++j)
    {
      weightInputHidden[i][j] = randomizer(RandomType);
    }
  }

  // Заполнение весов между скрытым и выходным слоем
  weightHiddenOutput.resize(countHidden);
  for(int i = 0; i < countHidden; ++i)
  {
    weightHiddenOutput[i].resize(countOutput);
    for(int j = 0; j < countOutput; ++j)
    {
      weightHiddenOutput[i][j] = randomizer(RandomType);
    }
  }

  for(int i = 0; i < countHidden; ++i)
  {
    biasHidden[i] = randomizer(RandomType);
  }

  for(int i = 0; i < countOutput; ++i)
  {
    biasOutput[i] = randomizer(RandomType);
  }

}

// Реализация Функции активации
double NeuralNetwork::activate(const double& value, activationFunction activationType)
{
  switch(activationType)
  {
    case sigmoid: return 1 / ( 1 + exp(-value));
    case relu:    return value > 0 ? value : 0;
    case lrelu:   return value > 0 ? value : 0.01*value;
    case tanhyber:    return qTan(value);
  }
}

// Производная производной функции активации
double NeuralNetwork::activateDerivative(const double& value, activationFunction activationType)
{
  switch(activationType)
  {
    case sigmoid:     return pow(activate(value, sigmoid), 2);
    case relu:        return value > 0 ? 1 : 0;
    case lrelu:       return value > 0 ? 1 : 0.01;
    case tanhyber:    return 1 - activate(value, tanhyber) * activate(value, tanhyber);
  }
}

double NeuralNetwork::randomizer(int randomType)
{
  const double MAGIC_VALUE = 0.005;
  switch (randomType)
  {
    case custom:
      return MAGIC_VALUE * (randomGenerator.generateDouble() * 2 - 1);
    case sqrtCount:
      return randomGenerator.generateDouble() * sqrt(2.0 / (countInput + countOutput));
    case typical:
      return 0.0;
    case nullValues:
      return randomGenerator.generateDouble() - 0.5;
  }
}

void NeuralNetwork::feedForward(const QVector<double>& inputData, bool needRecognizeDrawnDigit)
{
  // Расчет значений скрытых нейронов
  // Цикл для прохода по скрытому слою

  for(int i = 0; i < countHidden; ++i)
  {
    sumWeightedHidden[i] = biasHidden[i];
    // Цикл для прохода по входному слою
    for(int j = 0; j < countInput; ++j)
    {
      sumWeightedHidden[i] += inputData[j] * weightInputHidden[j][i];
    }
    neuronsHidden[i] = activate(sumWeightedHidden[i], hiddenActivationFunction);
  }

  // Расчет значений выходных нейронов
  // Цикл для прохода по выходному слою
  for(int i = 0; i < countOutput; ++i)
  {
    sumWeightedOutput[i] = biasOutput[i];
    // Цикл для прохода по скрытому слою
    for(int j = 0; j < countHidden; ++j)
    {
      sumWeightedOutput[i] += neuronsHidden[j] * weightHiddenOutput[j][i];
    }
    neuronsOutput[i] = activate(sumWeightedOutput[i], outputActivationFunction);
  }

  if(needRecognizeDrawnDigit)
  {
    signalDrawOutput(neuronsOutput, lastTargetValue, neuronsInput);
  }
}

void NeuralNetwork::train(const trainSettings& ts)
{
  running = true;
  emit signalConsoleLog("Тренировка нейронной сети начата...");

  double learningRate = ts.learningRate;
  int epochs = ts.epochs;
  hiddenActivationFunction = ts.hiddenLayerActivation;
  outputActivationFunction = ts.outputLayerActivation;

  for (int epoch = 0; epoch < epochs; ++epoch)
  {
    int success = 0;
    int fail = 0;
    double accuracy = 0.0;

    QVector<QVector<double>> shuffledData = ts.trainData;
    std::random_shuffle(shuffledData.begin(), shuffledData.end());

    for(int example = 0; example < shuffledData.size(); ++example)
    {
      lastTargetValue = shuffledData[example][0];
      neuronsInput = shuffledData[example].mid(1);

      propabilityOutput.fill(0.01);
      propabilityOutput[lastTargetValue] = 1.0;

      feedForward(neuronsInput);

      // Вычисление ошибки на выходном слое
      for (int i = 0; i < countOutput; ++i)
      {
        errorsOutput[i] = (propabilityOutput[i] - neuronsOutput[i]);
      }

      // Вычисление ошибки на скрытом слое
      for (int i = 0; i < countHidden; ++i)
      {
        for(int j = 0; j < countOutput; ++j)
        {
          errorsHidden[i] += errorsOutput[j] * weightHiddenOutput[i][j];
        }
      }

      for(int i = 0; i < countOutput; ++i)
      {
        for(int j = 0; j < countHidden; ++j)
        {
          weightHiddenOutput[j][i] += errorsOutput[i] * activateDerivative(neuronsOutput[i], outputActivationFunction) * neuronsHidden[j];
        }
        // Обновление смещения на выходном слое
        biasOutput[i] += errorsOutput[i] * activateDerivative(neuronsOutput[i], outputActivationFunction) * learningRate;
      }

      // Обновление весов между входным и скрытым слоем
      for(int i = 0; i < countHidden; ++i)
      {
        // Цикл для прохода по входному слою
        for(int j = 0; j < countInput; ++j)
        {
          weightInputHidden[j][i] += errorsHidden[i] * activateDerivative(neuronsHidden[i], hiddenActivationFunction) * neuronsInput[j];
        }
        // Обновление смещения на скрытом слое
        biasHidden[i] += errorsHidden[i] * activateDerivative(neuronsHidden[i], hiddenActivationFunction) * learningRate;
      }

      int indexOutputMaxElement = std::distance(neuronsOutput.begin(),std::max_element(neuronsOutput.begin(), neuronsOutput.end()));
      if(indexOutputMaxElement == lastTargetValue) success++;
      else fail++;

      if(!(example % 999)) emit signalDrawOutput(neuronsOutput, lastTargetValue, neuronsInput);

      if(!running) break;
    }
    accuracy = (double)success / ((double)success + (double)fail) * 100.0;

    QString logProcessing = tr("Эпоха %1, точность: %2%").arg(epoch + 1).arg(accuracy);

    emit signalConsoleLog(logProcessing);

    if(!running) break;
  }

  running = false;
  emit signalConsoleLog("Обучение остановлено");
}


void NeuralNetwork::validate(const QVector<QVector<double>>& trainingData)
{
  int success = 0;
  int fail = 0;
  double accuracy = 0.0;

  QVector<QVector<double>> shuffledData = trainingData;
  for(int example = 0; example < shuffledData.size(); ++example)
  {
    neuronsInput = shuffledData[example].mid(1);
    int target = shuffledData[example][0];

    feedForward(neuronsInput);

    int indexOutputMaxElement = std::distance(neuronsOutput.begin(),std::max_element(neuronsOutput.begin(), neuronsOutput.end()));

    if(indexOutputMaxElement == target) success++;
    else fail++;
  }
  accuracy = (double)success / ((double)success + (double)fail) * 100.0;

  QString logProcessing = tr("Распознано успешно: %1, неправильно: %2, точность: %3%").arg(success).arg(fail).arg(accuracy);
  emit signalConsoleLog(logProcessing);
}

