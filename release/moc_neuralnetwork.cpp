/****************************************************************************
** Meta object code from reading C++ file 'neuralnetwork.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../neuralnetwork.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'neuralnetwork.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NeuralNetwork_t {
    QByteArrayData data[18];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NeuralNetwork_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NeuralNetwork_t qt_meta_stringdata_NeuralNetwork = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NeuralNetwork"
QT_MOC_LITERAL(1, 14, 16), // "signalDrawOutput"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "QVector<double>"
QT_MOC_LITERAL(4, 48, 6), // "output"
QT_MOC_LITERAL(5, 55, 6), // "target"
QT_MOC_LITERAL(6, 62, 10), // "targetData"
QT_MOC_LITERAL(7, 73, 16), // "signalConsoleLog"
QT_MOC_LITERAL(8, 90, 4), // "text"
QT_MOC_LITERAL(9, 95, 11), // "feedForward"
QT_MOC_LITERAL(10, 107, 9), // "inputData"
QT_MOC_LITERAL(11, 117, 23), // "needRecognizeDrawnDigit"
QT_MOC_LITERAL(12, 141, 5), // "train"
QT_MOC_LITERAL(13, 147, 13), // "trainSettings"
QT_MOC_LITERAL(14, 161, 2), // "ts"
QT_MOC_LITERAL(15, 164, 8), // "validate"
QT_MOC_LITERAL(16, 173, 25), // "QVector<QVector<double> >"
QT_MOC_LITERAL(17, 199, 8) // "testData"

    },
    "NeuralNetwork\0signalDrawOutput\0\0"
    "QVector<double>\0output\0target\0targetData\0"
    "signalConsoleLog\0text\0feedForward\0"
    "inputData\0needRecognizeDrawnDigit\0"
    "train\0trainSettings\0ts\0validate\0"
    "QVector<QVector<double> >\0testData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NeuralNetwork[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   54,    2, 0x06 /* Public */,
       1,    2,   61,    2, 0x26 /* Public | MethodCloned */,
       1,    1,   66,    2, 0x26 /* Public | MethodCloned */,
       7,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   72,    2, 0x0a /* Public */,
       9,    1,   77,    2, 0x2a /* Public | MethodCloned */,
      12,    1,   80,    2, 0x0a /* Public */,
      15,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 3,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,   10,   11,
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void NeuralNetwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NeuralNetwork *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalDrawOutput((*reinterpret_cast< const QVector<double>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVector<double>(*)>(_a[3]))); break;
        case 1: _t->signalDrawOutput((*reinterpret_cast< const QVector<double>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->signalDrawOutput((*reinterpret_cast< const QVector<double>(*)>(_a[1]))); break;
        case 3: _t->signalConsoleLog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->feedForward((*reinterpret_cast< const QVector<double>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->feedForward((*reinterpret_cast< const QVector<double>(*)>(_a[1]))); break;
        case 6: _t->train((*reinterpret_cast< const trainSettings(*)>(_a[1]))); break;
        case 7: _t->validate((*reinterpret_cast< const QVector<QVector<double> >(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector<double> > >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NeuralNetwork::*)(const QVector<double> & , int , const QVector<double> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuralNetwork::signalDrawOutput)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NeuralNetwork::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NeuralNetwork::signalConsoleLog)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NeuralNetwork::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_NeuralNetwork.data,
    qt_meta_data_NeuralNetwork,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NeuralNetwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NeuralNetwork::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NeuralNetwork.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NeuralNetwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void NeuralNetwork::signalDrawOutput(const QVector<double> & _t1, int _t2, const QVector<double> & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 3
void NeuralNetwork::signalConsoleLog(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
