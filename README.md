# MNIST-QT-Perceptron

# RUS:
Этот репозиторий содержит прототип кода для С++ Qt 5.14.2, который реализует перцептрон с одним скрытым слоем и служит для распознавания цифр при помощи набора данных MNIST. 
С помощью UI можно менять скорость обучения, количество эпох для обучения, количество входных, скрытых, выходных нейронов, а так же функции активации скрытого и выходного слоев. 

Так же вы можете рисовать цифру в окне для проверки работоспособности нейросети. 

Это первая реализация перцептрона мной, поэтому возможно ошибки: как логические, так и чисто программные.

Перед началом работы нужно распаковать архив "MNIST_csv.zip" в папке release. В будущем может быть сделаю удобнее.

# ENG:
This repository contains prototype code for C++ Qt 5.14.2 that implements a single hidden layer perceptron for digit recognition using the MNIST dataset.
Using the UI, you can change the learning rate, the number of epochs for training, the number of input, hidden, and output neurons, as well as the activation functions of the hidden and output layers.

You can also draw a number in the window to check the functionality of the neural network.

This is my first implementation of a perceptron, so errors are possible: both logical and purely software.

Before you start, you need to unpack the "MNIST_csv.zip" archive in the release folder. In the future, maybe I will make it more convenient.

# UI:
![UI-screenshot](https://github.com/SeegmaEpsilon/MNIST-QT-Perceptron/blob/master/UI_screenshot.png)