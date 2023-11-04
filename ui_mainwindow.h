/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_4;
    QProgressBar *progressBar_digit_6;
    QProgressBar *progressBar_digit_0;
    QProgressBar *progressBar_digit_7;
    QProgressBar *progressBar_digit_8;
    QProgressBar *progressBar_digit_4;
    QProgressBar *progressBar_digit_1;
    QProgressBar *progressBar_digit_9;
    QProgressBar *progressBar_digit_5;
    QProgressBar *progressBar_digit_2;
    QProgressBar *progressBar_digit_3;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_clear;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_mainDigit;
    QGridLayout *gridLayout_3;
    QComboBox *comboBox_hiddenActivationFunction;
    QLabel *label_target;
    QLabel *label_5;
    QComboBox *comboBox_outputActivationFunction;
    QPushButton *pushButton_validate;
    QLabel *label_15;
    QPushButton *pushButton_learn;
    QLineEdit *lineEdit_learningRate;
    QLabel *label_4;
    QLabel *label_image;
    QPushButton *pushButton_reset;
    QLineEdit *lineEdit_countHidden;
    QLabel *label_2;
    QLineEdit *lineEdit_countOutput;
    QLabel *label_16;
    QLabel *label_leaningRate;
    QLineEdit *lineEdit_epochs;
    QLineEdit *lineEdit_countInput;
    QLabel *label_3;
    QTextEdit *console;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(919, 589);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        progressBar_digit_6 = new QProgressBar(centralwidget);
        progressBar_digit_6->setObjectName(QString::fromUtf8("progressBar_digit_6"));
        progressBar_digit_6->setValue(0);
        progressBar_digit_6->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(progressBar_digit_6, 0, 6, 1, 1);

        progressBar_digit_0 = new QProgressBar(centralwidget);
        progressBar_digit_0->setObjectName(QString::fromUtf8("progressBar_digit_0"));
        progressBar_digit_0->setLayoutDirection(Qt::LeftToRight);
        progressBar_digit_0->setValue(0);
        progressBar_digit_0->setAlignment(Qt::AlignCenter);
        progressBar_digit_0->setOrientation(Qt::Vertical);
        progressBar_digit_0->setInvertedAppearance(false);
        progressBar_digit_0->setTextDirection(QProgressBar::BottomToTop);

        gridLayout_4->addWidget(progressBar_digit_0, 0, 0, 1, 1);

        progressBar_digit_7 = new QProgressBar(centralwidget);
        progressBar_digit_7->setObjectName(QString::fromUtf8("progressBar_digit_7"));
        progressBar_digit_7->setValue(0);
        progressBar_digit_7->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(progressBar_digit_7, 0, 7, 1, 1);

        progressBar_digit_8 = new QProgressBar(centralwidget);
        progressBar_digit_8->setObjectName(QString::fromUtf8("progressBar_digit_8"));
        progressBar_digit_8->setValue(0);
        progressBar_digit_8->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(progressBar_digit_8, 0, 8, 1, 1);

        progressBar_digit_4 = new QProgressBar(centralwidget);
        progressBar_digit_4->setObjectName(QString::fromUtf8("progressBar_digit_4"));
        progressBar_digit_4->setValue(0);
        progressBar_digit_4->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(progressBar_digit_4, 0, 4, 1, 1);

        progressBar_digit_1 = new QProgressBar(centralwidget);
        progressBar_digit_1->setObjectName(QString::fromUtf8("progressBar_digit_1"));
        progressBar_digit_1->setValue(0);
        progressBar_digit_1->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(progressBar_digit_1, 0, 1, 1, 1);

        progressBar_digit_9 = new QProgressBar(centralwidget);
        progressBar_digit_9->setObjectName(QString::fromUtf8("progressBar_digit_9"));
        progressBar_digit_9->setValue(0);
        progressBar_digit_9->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(progressBar_digit_9, 0, 9, 1, 1);

        progressBar_digit_5 = new QProgressBar(centralwidget);
        progressBar_digit_5->setObjectName(QString::fromUtf8("progressBar_digit_5"));
        progressBar_digit_5->setValue(0);
        progressBar_digit_5->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(progressBar_digit_5, 0, 5, 1, 1);

        progressBar_digit_2 = new QProgressBar(centralwidget);
        progressBar_digit_2->setObjectName(QString::fromUtf8("progressBar_digit_2"));
        progressBar_digit_2->setValue(0);
        progressBar_digit_2->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(progressBar_digit_2, 0, 2, 1, 1);

        progressBar_digit_3 = new QProgressBar(centralwidget);
        progressBar_digit_3->setObjectName(QString::fromUtf8("progressBar_digit_3"));
        progressBar_digit_3->setValue(0);
        progressBar_digit_3->setOrientation(Qt::Vertical);

        gridLayout_4->addWidget(progressBar_digit_3, 0, 3, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 1, 0, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_6, 1, 1, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_7, 1, 2, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_8, 1, 3, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_9, 1, 4, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_10, 1, 5, 1, 1);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_11, 1, 6, 1, 1);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_12, 1, 7, 1, 1);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_13, 1, 8, 1, 1);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_14, 1, 9, 1, 1);


        gridLayout->addLayout(gridLayout_4, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));

        gridLayout_5->addWidget(pushButton_clear, 0, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout_5, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_mainDigit = new QLabel(centralwidget);
        label_mainDigit->setObjectName(QString::fromUtf8("label_mainDigit"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        label_mainDigit->setFont(font1);
        label_mainDigit->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_mainDigit);


        gridLayout->addLayout(verticalLayout_6, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        comboBox_hiddenActivationFunction = new QComboBox(centralwidget);
        comboBox_hiddenActivationFunction->addItem(QString());
        comboBox_hiddenActivationFunction->addItem(QString());
        comboBox_hiddenActivationFunction->addItem(QString());
        comboBox_hiddenActivationFunction->addItem(QString());
        comboBox_hiddenActivationFunction->setObjectName(QString::fromUtf8("comboBox_hiddenActivationFunction"));

        gridLayout_3->addWidget(comboBox_hiddenActivationFunction, 5, 2, 1, 1);

        label_target = new QLabel(centralwidget);
        label_target->setObjectName(QString::fromUtf8("label_target"));
        label_target->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_target, 6, 3, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 4, 0, 1, 1);

        comboBox_outputActivationFunction = new QComboBox(centralwidget);
        comboBox_outputActivationFunction->addItem(QString());
        comboBox_outputActivationFunction->addItem(QString());
        comboBox_outputActivationFunction->addItem(QString());
        comboBox_outputActivationFunction->addItem(QString());
        comboBox_outputActivationFunction->setObjectName(QString::fromUtf8("comboBox_outputActivationFunction"));

        gridLayout_3->addWidget(comboBox_outputActivationFunction, 6, 2, 1, 1);

        pushButton_validate = new QPushButton(centralwidget);
        pushButton_validate->setObjectName(QString::fromUtf8("pushButton_validate"));

        gridLayout_3->addWidget(pushButton_validate, 7, 3, 1, 1);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 5, 0, 1, 1);

        pushButton_learn = new QPushButton(centralwidget);
        pushButton_learn->setObjectName(QString::fromUtf8("pushButton_learn"));

        gridLayout_3->addWidget(pushButton_learn, 7, 0, 1, 1);

        lineEdit_learningRate = new QLineEdit(centralwidget);
        lineEdit_learningRate->setObjectName(QString::fromUtf8("lineEdit_learningRate"));

        gridLayout_3->addWidget(lineEdit_learningRate, 0, 2, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        label_image = new QLabel(centralwidget);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_image, 0, 3, 6, 1);

        pushButton_reset = new QPushButton(centralwidget);
        pushButton_reset->setObjectName(QString::fromUtf8("pushButton_reset"));

        gridLayout_3->addWidget(pushButton_reset, 7, 2, 1, 1);

        lineEdit_countHidden = new QLineEdit(centralwidget);
        lineEdit_countHidden->setObjectName(QString::fromUtf8("lineEdit_countHidden"));

        gridLayout_3->addWidget(lineEdit_countHidden, 3, 2, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_countOutput = new QLineEdit(centralwidget);
        lineEdit_countOutput->setObjectName(QString::fromUtf8("lineEdit_countOutput"));

        gridLayout_3->addWidget(lineEdit_countOutput, 4, 2, 1, 1);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 6, 0, 1, 1);

        label_leaningRate = new QLabel(centralwidget);
        label_leaningRate->setObjectName(QString::fromUtf8("label_leaningRate"));

        gridLayout_3->addWidget(label_leaningRate, 0, 0, 1, 1);

        lineEdit_epochs = new QLineEdit(centralwidget);
        lineEdit_epochs->setObjectName(QString::fromUtf8("lineEdit_epochs"));

        gridLayout_3->addWidget(lineEdit_epochs, 1, 2, 1, 1);

        lineEdit_countInput = new QLineEdit(centralwidget);
        lineEdit_countInput->setObjectName(QString::fromUtf8("lineEdit_countInput"));

        gridLayout_3->addWidget(lineEdit_countInput, 2, 2, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 1, 1, 1, 1);

        console = new QTextEdit(centralwidget);
        console->setObjectName(QString::fromUtf8("console"));

        gridLayout->addWidget(console, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 919, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        label_mainDigit->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        comboBox_hiddenActivationFunction->setItemText(0, QCoreApplication::translate("MainWindow", "sigmoid", nullptr));
        comboBox_hiddenActivationFunction->setItemText(1, QCoreApplication::translate("MainWindow", "ReLU", nullptr));
        comboBox_hiddenActivationFunction->setItemText(2, QCoreApplication::translate("MainWindow", "LReLU", nullptr));
        comboBox_hiddenActivationFunction->setItemText(3, QCoreApplication::translate("MainWindow", "tanh", nullptr));

        label_target->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\320\272\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\321\213\321\205\320\276\320\264\320\275\321\213\321\205 \320\275\320\265\320\271\321\200\320\276\320\275\320\276\320\262", nullptr));
        comboBox_outputActivationFunction->setItemText(0, QCoreApplication::translate("MainWindow", "sigmoid", nullptr));
        comboBox_outputActivationFunction->setItemText(1, QCoreApplication::translate("MainWindow", "ReLU", nullptr));
        comboBox_outputActivationFunction->setItemText(2, QCoreApplication::translate("MainWindow", "LReLU", nullptr));
        comboBox_outputActivationFunction->setItemText(3, QCoreApplication::translate("MainWindow", "tanh", nullptr));

        pushButton_validate->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \320\275\320\260 \321\202\320\265\321\201\321\202\320\276\320\262\320\276\320\271 \320\262\321\213\320\261\320\276\321\200\320\272\320\265", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\244\321\203\320\275\320\272\321\206\320\270\321\217 \320\260\320\272\321\202\320\270\320\262\320\260\321\206\320\270\320\270 \321\201\320\272\321\200\321\213\321\202\320\276\320\263\320\276 \321\201\320\273\320\276\321\217", nullptr));
        pushButton_learn->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\203\321\207\320\270\321\202\321\214 \320\275\320\265\320\271\321\200\320\276\321\201\320\265\321\202\321\214", nullptr));
        lineEdit_learningRate->setText(QCoreApplication::translate("MainWindow", "0.001", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\320\272\321\200\321\213\321\202\321\213\321\205 \320\275\320\265\320\271\321\200\320\276\320\275\320\276\320\262", nullptr));
        label_image->setText(QCoreApplication::translate("MainWindow", "\320\227\320\264\320\265\321\201\321\214 \320\261\321\203\320\264\320\265\321\202 \321\206\320\270\321\204\321\200\320\260", nullptr));
        pushButton_reset->setText(QCoreApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\275\320\265\320\271\321\200\320\276\321\201\320\265\321\202\320\270", nullptr));
        lineEdit_countHidden->setText(QCoreApplication::translate("MainWindow", "40", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\215\320\277\320\276\321\205", nullptr));
        lineEdit_countOutput->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\244\321\203\320\275\320\272\321\206\320\270\321\217 \320\260\320\272\321\202\320\270\320\262\320\260\321\206\320\270\320\270 \320\262\321\213\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\201\320\273\320\276\321\217", nullptr));
        label_leaningRate->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\276\320\261\321\203\321\207\320\265\320\275\320\270\321\217", nullptr));
        lineEdit_epochs->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        lineEdit_countInput->setText(QCoreApplication::translate("MainWindow", "784", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\321\205\320\276\320\264\320\275\321\213\321\205 \320\275\320\265\320\271\321\200\320\276\320\275\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
