/****************************************************************************
** Meta object code from reading C++ file 'packetinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "packetinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'packetinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PacketInterface_t {
    QByteArrayData data[56];
    char stringdata0[675];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PacketInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PacketInterface_t qt_meta_stringdata_PacketInterface = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PacketInterface"
QT_MOC_LITERAL(1, 16, 10), // "dataToSend"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "QByteArray&"
QT_MOC_LITERAL(4, 40, 4), // "data"
QT_MOC_LITERAL(5, 45, 17), // "fwVersionReceived"
QT_MOC_LITERAL(6, 63, 5), // "major"
QT_MOC_LITERAL(7, 69, 5), // "minor"
QT_MOC_LITERAL(8, 75, 11), // "ackReceived"
QT_MOC_LITERAL(9, 87, 7), // "ackType"
QT_MOC_LITERAL(10, 95, 14), // "valuesReceived"
QT_MOC_LITERAL(11, 110, 9), // "MC_VALUES"
QT_MOC_LITERAL(12, 120, 6), // "values"
QT_MOC_LITERAL(13, 127, 13), // "printReceived"
QT_MOC_LITERAL(14, 141, 3), // "str"
QT_MOC_LITERAL(15, 145, 15), // "samplesReceived"
QT_MOC_LITERAL(16, 161, 5), // "bytes"
QT_MOC_LITERAL(17, 167, 16), // "rotorPosReceived"
QT_MOC_LITERAL(18, 184, 3), // "pos"
QT_MOC_LITERAL(19, 188, 25), // "experimentSamplesReceived"
QT_MOC_LITERAL(20, 214, 15), // "QVector<double>"
QT_MOC_LITERAL(21, 230, 7), // "samples"
QT_MOC_LITERAL(22, 238, 14), // "mcconfReceived"
QT_MOC_LITERAL(23, 253, 16), // "mc_configuration"
QT_MOC_LITERAL(24, 270, 6), // "mcconf"
QT_MOC_LITERAL(25, 277, 18), // "motorParamReceived"
QT_MOC_LITERAL(26, 296, 15), // "cycle_int_limit"
QT_MOC_LITERAL(27, 312, 15), // "bemf_coupling_k"
QT_MOC_LITERAL(28, 328, 12), // "QVector<int>"
QT_MOC_LITERAL(29, 341, 10), // "hall_table"
QT_MOC_LITERAL(30, 352, 8), // "hall_res"
QT_MOC_LITERAL(31, 361, 15), // "appconfReceived"
QT_MOC_LITERAL(32, 377, 17), // "app_configuration"
QT_MOC_LITERAL(33, 395, 7), // "appconf"
QT_MOC_LITERAL(34, 403, 18), // "decodedPpmReceived"
QT_MOC_LITERAL(35, 422, 5), // "value"
QT_MOC_LITERAL(36, 428, 8), // "last_len"
QT_MOC_LITERAL(37, 437, 18), // "decodedAdcReceived"
QT_MOC_LITERAL(38, 456, 7), // "voltage"
QT_MOC_LITERAL(39, 464, 6), // "value2"
QT_MOC_LITERAL(40, 471, 8), // "voltage2"
QT_MOC_LITERAL(41, 480, 19), // "decodedChukReceived"
QT_MOC_LITERAL(42, 500, 15), // "motorRLReceived"
QT_MOC_LITERAL(43, 516, 1), // "r"
QT_MOC_LITERAL(44, 518, 1), // "l"
QT_MOC_LITERAL(45, 520, 20), // "motorLinkageReceived"
QT_MOC_LITERAL(46, 541, 12), // "flux_linkage"
QT_MOC_LITERAL(47, 554, 20), // "encoderParamReceived"
QT_MOC_LITERAL(48, 575, 6), // "offset"
QT_MOC_LITERAL(49, 582, 5), // "ratio"
QT_MOC_LITERAL(50, 588, 8), // "inverted"
QT_MOC_LITERAL(51, 597, 21), // "customAppDataReceived"
QT_MOC_LITERAL(52, 619, 20), // "focHallTableReceived"
QT_MOC_LITERAL(53, 640, 3), // "res"
QT_MOC_LITERAL(54, 644, 9), // "timerSlot"
QT_MOC_LITERAL(55, 654, 20) // "readPendingDatagrams"

    },
    "PacketInterface\0dataToSend\0\0QByteArray&\0"
    "data\0fwVersionReceived\0major\0minor\0"
    "ackReceived\0ackType\0valuesReceived\0"
    "MC_VALUES\0values\0printReceived\0str\0"
    "samplesReceived\0bytes\0rotorPosReceived\0"
    "pos\0experimentSamplesReceived\0"
    "QVector<double>\0samples\0mcconfReceived\0"
    "mc_configuration\0mcconf\0motorParamReceived\0"
    "cycle_int_limit\0bemf_coupling_k\0"
    "QVector<int>\0hall_table\0hall_res\0"
    "appconfReceived\0app_configuration\0"
    "appconf\0decodedPpmReceived\0value\0"
    "last_len\0decodedAdcReceived\0voltage\0"
    "value2\0voltage2\0decodedChukReceived\0"
    "motorRLReceived\0r\0l\0motorLinkageReceived\0"
    "flux_linkage\0encoderParamReceived\0"
    "offset\0ratio\0inverted\0customAppDataReceived\0"
    "focHallTableReceived\0res\0timerSlot\0"
    "readPendingDatagrams"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PacketInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       5,    2,  122,    2, 0x06 /* Public */,
       8,    1,  127,    2, 0x06 /* Public */,
      10,    1,  130,    2, 0x06 /* Public */,
      13,    1,  133,    2, 0x06 /* Public */,
      15,    1,  136,    2, 0x06 /* Public */,
      17,    1,  139,    2, 0x06 /* Public */,
      19,    1,  142,    2, 0x06 /* Public */,
      22,    1,  145,    2, 0x06 /* Public */,
      25,    4,  148,    2, 0x06 /* Public */,
      31,    1,  157,    2, 0x06 /* Public */,
      34,    2,  160,    2, 0x06 /* Public */,
      37,    4,  165,    2, 0x06 /* Public */,
      41,    1,  174,    2, 0x06 /* Public */,
      42,    2,  177,    2, 0x06 /* Public */,
      45,    1,  182,    2, 0x06 /* Public */,
      47,    3,  185,    2, 0x06 /* Public */,
      51,    1,  192,    2, 0x06 /* Public */,
      52,    2,  195,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      54,    0,  200,    2, 0x0a /* Public */,
      55,    0,  201,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QByteArray,   16,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, 0x80000000 | 28, QMetaType::Int,   26,   27,   29,   30,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   35,   36,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   35,   38,   39,   40,
    QMetaType::Void, QMetaType::Double,   35,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   43,   44,
    QMetaType::Void, QMetaType::Double,   46,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Bool,   48,   49,   50,
    QMetaType::Void, QMetaType::QByteArray,    4,
    QMetaType::Void, 0x80000000 | 28, QMetaType::Int,   29,   53,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PacketInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PacketInterface *_t = static_cast<PacketInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataToSend((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->fwVersionReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->ackReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->valuesReceived((*reinterpret_cast< MC_VALUES(*)>(_a[1]))); break;
        case 4: _t->printReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->samplesReceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->rotorPosReceived((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->experimentSamplesReceived((*reinterpret_cast< QVector<double>(*)>(_a[1]))); break;
        case 8: _t->mcconfReceived((*reinterpret_cast< mc_configuration(*)>(_a[1]))); break;
        case 9: _t->motorParamReceived((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< QVector<int>(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 10: _t->appconfReceived((*reinterpret_cast< app_configuration(*)>(_a[1]))); break;
        case 11: _t->decodedPpmReceived((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 12: _t->decodedAdcReceived((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 13: _t->decodedChukReceived((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->motorRLReceived((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 15: _t->motorLinkageReceived((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->encoderParamReceived((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 17: _t->customAppDataReceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 18: _t->focHallTableReceived((*reinterpret_cast< QVector<int>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->timerSlot(); break;
        case 20: _t->readPendingDatagrams(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PacketInterface::*_t)(QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::dataToSend)) {
                *result = 0;
            }
        }
        {
            typedef void (PacketInterface::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::fwVersionReceived)) {
                *result = 1;
            }
        }
        {
            typedef void (PacketInterface::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::ackReceived)) {
                *result = 2;
            }
        }
        {
            typedef void (PacketInterface::*_t)(MC_VALUES );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::valuesReceived)) {
                *result = 3;
            }
        }
        {
            typedef void (PacketInterface::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::printReceived)) {
                *result = 4;
            }
        }
        {
            typedef void (PacketInterface::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::samplesReceived)) {
                *result = 5;
            }
        }
        {
            typedef void (PacketInterface::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::rotorPosReceived)) {
                *result = 6;
            }
        }
        {
            typedef void (PacketInterface::*_t)(QVector<double> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::experimentSamplesReceived)) {
                *result = 7;
            }
        }
        {
            typedef void (PacketInterface::*_t)(mc_configuration );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::mcconfReceived)) {
                *result = 8;
            }
        }
        {
            typedef void (PacketInterface::*_t)(double , double , QVector<int> , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::motorParamReceived)) {
                *result = 9;
            }
        }
        {
            typedef void (PacketInterface::*_t)(app_configuration );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::appconfReceived)) {
                *result = 10;
            }
        }
        {
            typedef void (PacketInterface::*_t)(double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::decodedPpmReceived)) {
                *result = 11;
            }
        }
        {
            typedef void (PacketInterface::*_t)(double , double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::decodedAdcReceived)) {
                *result = 12;
            }
        }
        {
            typedef void (PacketInterface::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::decodedChukReceived)) {
                *result = 13;
            }
        }
        {
            typedef void (PacketInterface::*_t)(double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::motorRLReceived)) {
                *result = 14;
            }
        }
        {
            typedef void (PacketInterface::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::motorLinkageReceived)) {
                *result = 15;
            }
        }
        {
            typedef void (PacketInterface::*_t)(double , double , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::encoderParamReceived)) {
                *result = 16;
            }
        }
        {
            typedef void (PacketInterface::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::customAppDataReceived)) {
                *result = 17;
            }
        }
        {
            typedef void (PacketInterface::*_t)(QVector<int> , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PacketInterface::focHallTableReceived)) {
                *result = 18;
            }
        }
    }
}

const QMetaObject PacketInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PacketInterface.data,
      qt_meta_data_PacketInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PacketInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PacketInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PacketInterface.stringdata0))
        return static_cast<void*>(const_cast< PacketInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int PacketInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void PacketInterface::dataToSend(QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PacketInterface::fwVersionReceived(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PacketInterface::ackReceived(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PacketInterface::valuesReceived(MC_VALUES _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PacketInterface::printReceived(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PacketInterface::samplesReceived(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PacketInterface::rotorPosReceived(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PacketInterface::experimentSamplesReceived(QVector<double> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PacketInterface::mcconfReceived(mc_configuration _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PacketInterface::motorParamReceived(double _t1, double _t2, QVector<int> _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void PacketInterface::appconfReceived(app_configuration _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void PacketInterface::decodedPpmReceived(double _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void PacketInterface::decodedAdcReceived(double _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void PacketInterface::decodedChukReceived(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void PacketInterface::motorRLReceived(double _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void PacketInterface::motorLinkageReceived(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void PacketInterface::encoderParamReceived(double _t1, double _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void PacketInterface::customAppDataReceived(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void PacketInterface::focHallTableReceived(QVector<int> _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}
QT_END_MOC_NAMESPACE
