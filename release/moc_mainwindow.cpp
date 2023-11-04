/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[27];
    char stringdata0[424];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "signalConsoleLog"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4), // "text"
QT_MOC_LITERAL(4, 34, 16), // "signalStartTrain"
QT_MOC_LITERAL(5, 51, 13), // "trainSettings"
QT_MOC_LITERAL(6, 65, 2), // "ts"
QT_MOC_LITERAL(7, 68, 19), // "signalStartValidate"
QT_MOC_LITERAL(8, 88, 25), // "QVector<QVector<double> >"
QT_MOC_LITERAL(9, 114, 8), // "testData"
QT_MOC_LITERAL(10, 123, 23), // "initializeNeuralNetwork"
QT_MOC_LITERAL(11, 147, 20), // "outputToProgressBars"
QT_MOC_LITERAL(12, 168, 15), // "QVector<double>"
QT_MOC_LITERAL(13, 184, 6), // "output"
QT_MOC_LITERAL(14, 191, 6), // "target"
QT_MOC_LITERAL(15, 198, 10), // "targetData"
QT_MOC_LITERAL(16, 209, 14), // "slotConsoleLog"
QT_MOC_LITERAL(17, 224, 14), // "getCurrentTime"
QT_MOC_LITERAL(18, 239, 21), // "trackingConsoleCursor"
QT_MOC_LITERAL(19, 261, 18), // "slotRecognizeDigit"
QT_MOC_LITERAL(20, 280, 9), // "drawnData"
QT_MOC_LITERAL(21, 290, 27), // "on_pushButton_learn_clicked"
QT_MOC_LITERAL(22, 318, 27), // "on_pushButton_clear_clicked"
QT_MOC_LITERAL(23, 346, 30), // "on_pushButton_validate_clicked"
QT_MOC_LITERAL(24, 377, 13), // "visualizeData"
QT_MOC_LITERAL(25, 391, 4), // "data"
QT_MOC_LITERAL(26, 396, 27) // "on_pushButton_reset_clicked"

    },
    "MainWindow\0signalConsoleLog\0\0text\0"
    "signalStartTrain\0trainSettings\0ts\0"
    "signalStartValidate\0QVector<QVector<double> >\0"
    "testData\0initializeNeuralNetwork\0"
    "outputToProgressBars\0QVector<double>\0"
    "output\0target\0targetData\0slotConsoleLog\0"
    "getCurrentTime\0trackingConsoleCursor\0"
    "slotRecognizeDigit\0drawnData\0"
    "on_pushButton_learn_clicked\0"
    "on_pushButton_clear_clicked\0"
    "on_pushButton_validate_clicked\0"
    "visualizeData\0data\0on_pushButton_reset_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,
       7,    1,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  103,    2, 0x0a /* Public */,
      11,    3,  104,    2, 0x0a /* Public */,
      11,    2,  111,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  116,    2, 0x2a /* Public | MethodCloned */,
      16,    1,  119,    2, 0x0a /* Public */,
      17,    0,  122,    2, 0x0a /* Public */,
      18,    0,  123,    2, 0x0a /* Public */,
      19,    1,  124,    2, 0x0a /* Public */,
      21,    0,  127,    2, 0x08 /* Private */,
      22,    0,  128,    2, 0x08 /* Private */,
      23,    0,  129,    2, 0x08 /* Private */,
      24,    1,  130,    2, 0x08 /* Private */,
      26,    0,  133,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int, 0x80000000 | 12,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int,   13,   14,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   25,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalConsoleLog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->signalStartTrain((*reinterpret_cast< const trainSettings(*)>(_a[1]))); break;
        case 2: _t->signalStartValidate((*reinterpret_cast< const QVector<QVector<double> >(*)>(_a[1]))); break;
        case 3: _t->initializeNeuralNetwork(); break;
        case 4: _t->outputToProgressBars((*reinterpret_cast< const QVector<double>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVector<double>(*)>(_a[3]))); break;
        case 5: _t->outputToProgressBars((*reinterpret_cast< const QVector<double>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->outputToProgressBars((*reinterpret_cast< const QVector<double>(*)>(_a[1]))); break;
        case 7: _t->slotConsoleLog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: { QString _r = _t->getCurrentTime();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->trackingConsoleCursor(); break;
        case 10: _t->slotRecognizeDigit((*reinterpret_cast< const QVector<double>(*)>(_a[1]))); break;
        case 11: _t->on_pushButton_learn_clicked(); break;
        case 12: _t->on_pushButton_clear_clicked(); break;
        case 13: _t->on_pushButton_validate_clicked(); break;
        case 14: _t->visualizeData((*reinterpret_cast< const QVector<double>(*)>(_a[1]))); break;
        case 15: _t->on_pushButton_reset_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector<double> > >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalConsoleLog)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const trainSettings & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalStartTrain)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QVector<QVector<double>> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalStartValidate)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::signalConsoleLog(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::signalStartTrain(const trainSettings & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::signalStartValidate(const QVector<QVector<double>> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
