/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[117];
    char stringdata0[2541];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 19), // "serialDataAvailable"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "serialPortError"
QT_MOC_LITERAL(4, 48, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(5, 77, 5), // "error"
QT_MOC_LITERAL(6, 83, 9), // "timerSlot"
QT_MOC_LITERAL(7, 93, 16), // "packetDataToSend"
QT_MOC_LITERAL(8, 110, 11), // "QByteArray&"
QT_MOC_LITERAL(9, 122, 4), // "data"
QT_MOC_LITERAL(10, 127, 17), // "fwVersionReceived"
QT_MOC_LITERAL(11, 145, 5), // "major"
QT_MOC_LITERAL(12, 151, 5), // "minor"
QT_MOC_LITERAL(13, 157, 11), // "ackReceived"
QT_MOC_LITERAL(14, 169, 7), // "ackType"
QT_MOC_LITERAL(15, 177, 16), // "mcValuesReceived"
QT_MOC_LITERAL(16, 194, 9), // "MC_VALUES"
QT_MOC_LITERAL(17, 204, 6), // "values"
QT_MOC_LITERAL(18, 211, 13), // "printReceived"
QT_MOC_LITERAL(19, 225, 3), // "str"
QT_MOC_LITERAL(20, 229, 15), // "samplesReceived"
QT_MOC_LITERAL(21, 245, 16), // "rotorPosReceived"
QT_MOC_LITERAL(22, 262, 3), // "pos"
QT_MOC_LITERAL(23, 266, 25), // "experimentSamplesReceived"
QT_MOC_LITERAL(24, 292, 15), // "QVector<double>"
QT_MOC_LITERAL(25, 308, 7), // "samples"
QT_MOC_LITERAL(26, 316, 14), // "mcconfReceived"
QT_MOC_LITERAL(27, 331, 16), // "mc_configuration"
QT_MOC_LITERAL(28, 348, 6), // "mcconf"
QT_MOC_LITERAL(29, 355, 18), // "motorParamReceived"
QT_MOC_LITERAL(30, 374, 15), // "cycle_int_limit"
QT_MOC_LITERAL(31, 390, 15), // "bemf_coupling_k"
QT_MOC_LITERAL(32, 406, 12), // "QVector<int>"
QT_MOC_LITERAL(33, 419, 10), // "hall_table"
QT_MOC_LITERAL(34, 430, 8), // "hall_res"
QT_MOC_LITERAL(35, 439, 15), // "motorRLReceived"
QT_MOC_LITERAL(36, 455, 1), // "r"
QT_MOC_LITERAL(37, 457, 1), // "l"
QT_MOC_LITERAL(38, 459, 20), // "motorLinkageReceived"
QT_MOC_LITERAL(39, 480, 12), // "flux_linkage"
QT_MOC_LITERAL(40, 493, 20), // "encoderParamReceived"
QT_MOC_LITERAL(41, 514, 6), // "offset"
QT_MOC_LITERAL(42, 521, 5), // "ratio"
QT_MOC_LITERAL(43, 527, 8), // "inverted"
QT_MOC_LITERAL(44, 536, 20), // "focHallTableReceived"
QT_MOC_LITERAL(45, 557, 3), // "res"
QT_MOC_LITERAL(46, 561, 15), // "appconfReceived"
QT_MOC_LITERAL(47, 577, 17), // "app_configuration"
QT_MOC_LITERAL(48, 595, 7), // "appconf"
QT_MOC_LITERAL(49, 603, 18), // "decodedPpmReceived"
QT_MOC_LITERAL(50, 622, 9), // "ppm_value"
QT_MOC_LITERAL(51, 632, 12), // "ppm_last_len"
QT_MOC_LITERAL(52, 645, 18), // "decodedAdcReceived"
QT_MOC_LITERAL(53, 664, 9), // "adc_value"
QT_MOC_LITERAL(54, 674, 11), // "adc_voltage"
QT_MOC_LITERAL(55, 686, 10), // "adc_value2"
QT_MOC_LITERAL(56, 697, 12), // "adc_voltage2"
QT_MOC_LITERAL(57, 710, 19), // "decodedChukReceived"
QT_MOC_LITERAL(58, 730, 10), // "chuk_value"
QT_MOC_LITERAL(59, 741, 30), // "on_serialConnectButton_clicked"
QT_MOC_LITERAL(60, 772, 27), // "on_udpConnectButton_clicked"
QT_MOC_LITERAL(61, 800, 27), // "on_disconnectButton_clicked"
QT_MOC_LITERAL(62, 828, 24), // "on_getDataButton_clicked"
QT_MOC_LITERAL(63, 853, 29), // "on_getDataStartButton_clicked"
QT_MOC_LITERAL(64, 883, 21), // "on_dutyButton_clicked"
QT_MOC_LITERAL(65, 905, 20), // "on_rpmButton_clicked"
QT_MOC_LITERAL(66, 926, 24), // "on_currentButton_clicked"
QT_MOC_LITERAL(67, 951, 20), // "on_offButton_clicked"
QT_MOC_LITERAL(68, 972, 25), // "on_offBrakeButton_clicked"
QT_MOC_LITERAL(69, 998, 23), // "on_replotButton_clicked"
QT_MOC_LITERAL(70, 1022, 24), // "on_rescaleButton_clicked"
QT_MOC_LITERAL(71, 1047, 28), // "on_horizontalZoomBox_clicked"
QT_MOC_LITERAL(72, 1076, 26), // "on_verticalZoomBox_clicked"
QT_MOC_LITERAL(73, 1103, 28), // "on_filterLogScaleBox_clicked"
QT_MOC_LITERAL(74, 1132, 7), // "checked"
QT_MOC_LITERAL(75, 1140, 29), // "on_filterLogScaleBox2_clicked"
QT_MOC_LITERAL(76, 1170, 23), // "on_detectButton_clicked"
QT_MOC_LITERAL(77, 1194, 30), // "on_clearTerminalButton_clicked"
QT_MOC_LITERAL(78, 1225, 29), // "on_sendTerminalButton_clicked"
QT_MOC_LITERAL(79, 1255, 27), // "on_stopDetectButton_clicked"
QT_MOC_LITERAL(80, 1283, 39), // "on_experimentClearSamplesButt..."
QT_MOC_LITERAL(81, 1323, 38), // "on_experimentSaveSamplesButto..."
QT_MOC_LITERAL(82, 1362, 27), // "on_mcconfReadButton_clicked"
QT_MOC_LITERAL(83, 1390, 34), // "on_mcconfReadDefaultButton_cl..."
QT_MOC_LITERAL(84, 1425, 28), // "on_mcconfWriteButton_clicked"
QT_MOC_LITERAL(85, 1454, 29), // "on_currentBrakeButton_clicked"
QT_MOC_LITERAL(86, 1484, 30), // "on_mcconfLoadXmlButton_clicked"
QT_MOC_LITERAL(87, 1515, 30), // "on_mcconfSaveXmlButton_clicked"
QT_MOC_LITERAL(88, 1546, 39), // "on_mcconfDetectMotorParamButt..."
QT_MOC_LITERAL(89, 1586, 28), // "on_appconfReadButton_clicked"
QT_MOC_LITERAL(90, 1615, 29), // "on_appconfWriteButton_clicked"
QT_MOC_LITERAL(91, 1645, 30), // "on_appconfRebootButton_clicked"
QT_MOC_LITERAL(92, 1676, 35), // "on_appconfReadDefaultButton_c..."
QT_MOC_LITERAL(93, 1712, 24), // "on_posCtrlButton_clicked"
QT_MOC_LITERAL(94, 1737, 31), // "on_firmwareChooseButton_clicked"
QT_MOC_LITERAL(95, 1769, 31), // "on_firmwareUploadButton_clicked"
QT_MOC_LITERAL(96, 1801, 36), // "on_firmwareVersionReadButton_..."
QT_MOC_LITERAL(97, 1838, 31), // "on_firmwareCancelButton_clicked"
QT_MOC_LITERAL(98, 1870, 33), // "on_servoOutputSlider_valueCha..."
QT_MOC_LITERAL(99, 1904, 5), // "value"
QT_MOC_LITERAL(100, 1910, 42), // "on_mcconfFocObserverGainCalcB..."
QT_MOC_LITERAL(101, 1953, 35), // "on_mcconfFocMeasureRLButton_c..."
QT_MOC_LITERAL(102, 1989, 40), // "on_mcconfFocMeasureLinkageBut..."
QT_MOC_LITERAL(103, 2030, 32), // "on_mcconfFocCalcCCButton_clicked"
QT_MOC_LITERAL(104, 2063, 39), // "on_mcconfFocApplyRLLambdaButt..."
QT_MOC_LITERAL(105, 2103, 37), // "on_mcconfFocCalcCCApplyButton..."
QT_MOC_LITERAL(106, 2141, 34), // "on_mcconfDetectApplyButton_cl..."
QT_MOC_LITERAL(107, 2176, 40), // "on_mcconfFocMeasureEncoderBut..."
QT_MOC_LITERAL(108, 2217, 45), // "on_mcconfFocMeasureEncoderApp..."
QT_MOC_LITERAL(109, 2263, 30), // "on_detectEncoderButton_clicked"
QT_MOC_LITERAL(110, 2294, 29), // "on_detectPidPosButton_clicked"
QT_MOC_LITERAL(111, 2324, 34), // "on_detectPidPosErrorButton_cl..."
QT_MOC_LITERAL(112, 2359, 43), // "on_detectEncoderObserverError..."
QT_MOC_LITERAL(113, 2403, 31), // "on_detectObserverButton_clicked"
QT_MOC_LITERAL(114, 2435, 37), // "on_mcconfFocMeasureHallButton..."
QT_MOC_LITERAL(115, 2473, 42), // "on_mcconfFocMeasureHallApplyB..."
QT_MOC_LITERAL(116, 2516, 24) // "on_refreshButton_clicked"

    },
    "MainWindow\0serialDataAvailable\0\0"
    "serialPortError\0QSerialPort::SerialPortError\0"
    "error\0timerSlot\0packetDataToSend\0"
    "QByteArray&\0data\0fwVersionReceived\0"
    "major\0minor\0ackReceived\0ackType\0"
    "mcValuesReceived\0MC_VALUES\0values\0"
    "printReceived\0str\0samplesReceived\0"
    "rotorPosReceived\0pos\0experimentSamplesReceived\0"
    "QVector<double>\0samples\0mcconfReceived\0"
    "mc_configuration\0mcconf\0motorParamReceived\0"
    "cycle_int_limit\0bemf_coupling_k\0"
    "QVector<int>\0hall_table\0hall_res\0"
    "motorRLReceived\0r\0l\0motorLinkageReceived\0"
    "flux_linkage\0encoderParamReceived\0"
    "offset\0ratio\0inverted\0focHallTableReceived\0"
    "res\0appconfReceived\0app_configuration\0"
    "appconf\0decodedPpmReceived\0ppm_value\0"
    "ppm_last_len\0decodedAdcReceived\0"
    "adc_value\0adc_voltage\0adc_value2\0"
    "adc_voltage2\0decodedChukReceived\0"
    "chuk_value\0on_serialConnectButton_clicked\0"
    "on_udpConnectButton_clicked\0"
    "on_disconnectButton_clicked\0"
    "on_getDataButton_clicked\0"
    "on_getDataStartButton_clicked\0"
    "on_dutyButton_clicked\0on_rpmButton_clicked\0"
    "on_currentButton_clicked\0on_offButton_clicked\0"
    "on_offBrakeButton_clicked\0"
    "on_replotButton_clicked\0"
    "on_rescaleButton_clicked\0"
    "on_horizontalZoomBox_clicked\0"
    "on_verticalZoomBox_clicked\0"
    "on_filterLogScaleBox_clicked\0checked\0"
    "on_filterLogScaleBox2_clicked\0"
    "on_detectButton_clicked\0"
    "on_clearTerminalButton_clicked\0"
    "on_sendTerminalButton_clicked\0"
    "on_stopDetectButton_clicked\0"
    "on_experimentClearSamplesButton_clicked\0"
    "on_experimentSaveSamplesButton_clicked\0"
    "on_mcconfReadButton_clicked\0"
    "on_mcconfReadDefaultButton_clicked\0"
    "on_mcconfWriteButton_clicked\0"
    "on_currentBrakeButton_clicked\0"
    "on_mcconfLoadXmlButton_clicked\0"
    "on_mcconfSaveXmlButton_clicked\0"
    "on_mcconfDetectMotorParamButton_clicked\0"
    "on_appconfReadButton_clicked\0"
    "on_appconfWriteButton_clicked\0"
    "on_appconfRebootButton_clicked\0"
    "on_appconfReadDefaultButton_clicked\0"
    "on_posCtrlButton_clicked\0"
    "on_firmwareChooseButton_clicked\0"
    "on_firmwareUploadButton_clicked\0"
    "on_firmwareVersionReadButton_clicked\0"
    "on_firmwareCancelButton_clicked\0"
    "on_servoOutputSlider_valueChanged\0"
    "value\0on_mcconfFocObserverGainCalcButton_clicked\0"
    "on_mcconfFocMeasureRLButton_clicked\0"
    "on_mcconfFocMeasureLinkageButton_clicked\0"
    "on_mcconfFocCalcCCButton_clicked\0"
    "on_mcconfFocApplyRLLambdaButton_clicked\0"
    "on_mcconfFocCalcCCApplyButton_clicked\0"
    "on_mcconfDetectApplyButton_clicked\0"
    "on_mcconfFocMeasureEncoderButton_clicked\0"
    "on_mcconfFocMeasureEncoderApplyButton_clicked\0"
    "on_detectEncoderButton_clicked\0"
    "on_detectPidPosButton_clicked\0"
    "on_detectPidPosErrorButton_clicked\0"
    "on_detectEncoderObserverErrorButton_clicked\0"
    "on_detectObserverButton_clicked\0"
    "on_mcconfFocMeasureHallButton_clicked\0"
    "on_mcconfFocMeasureHallApplyButton_clicked\0"
    "on_refreshButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      77,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  399,    2, 0x08 /* Private */,
       3,    1,  400,    2, 0x08 /* Private */,
       6,    0,  403,    2, 0x08 /* Private */,
       7,    1,  404,    2, 0x08 /* Private */,
      10,    2,  407,    2, 0x08 /* Private */,
      13,    1,  412,    2, 0x08 /* Private */,
      15,    1,  415,    2, 0x08 /* Private */,
      18,    1,  418,    2, 0x08 /* Private */,
      20,    1,  421,    2, 0x08 /* Private */,
      21,    1,  424,    2, 0x08 /* Private */,
      23,    1,  427,    2, 0x08 /* Private */,
      26,    1,  430,    2, 0x08 /* Private */,
      29,    4,  433,    2, 0x08 /* Private */,
      35,    2,  442,    2, 0x08 /* Private */,
      38,    1,  447,    2, 0x08 /* Private */,
      40,    3,  450,    2, 0x08 /* Private */,
      44,    2,  457,    2, 0x08 /* Private */,
      46,    1,  462,    2, 0x08 /* Private */,
      49,    2,  465,    2, 0x08 /* Private */,
      52,    4,  470,    2, 0x08 /* Private */,
      57,    1,  479,    2, 0x08 /* Private */,
      59,    0,  482,    2, 0x08 /* Private */,
      60,    0,  483,    2, 0x08 /* Private */,
      61,    0,  484,    2, 0x08 /* Private */,
      62,    0,  485,    2, 0x08 /* Private */,
      63,    0,  486,    2, 0x08 /* Private */,
      64,    0,  487,    2, 0x08 /* Private */,
      65,    0,  488,    2, 0x08 /* Private */,
      66,    0,  489,    2, 0x08 /* Private */,
      67,    0,  490,    2, 0x08 /* Private */,
      68,    0,  491,    2, 0x08 /* Private */,
      69,    0,  492,    2, 0x08 /* Private */,
      70,    0,  493,    2, 0x08 /* Private */,
      71,    0,  494,    2, 0x08 /* Private */,
      72,    0,  495,    2, 0x08 /* Private */,
      73,    1,  496,    2, 0x08 /* Private */,
      75,    1,  499,    2, 0x08 /* Private */,
      76,    0,  502,    2, 0x08 /* Private */,
      77,    0,  503,    2, 0x08 /* Private */,
      78,    0,  504,    2, 0x08 /* Private */,
      79,    0,  505,    2, 0x08 /* Private */,
      80,    0,  506,    2, 0x08 /* Private */,
      81,    0,  507,    2, 0x08 /* Private */,
      82,    0,  508,    2, 0x08 /* Private */,
      83,    0,  509,    2, 0x08 /* Private */,
      84,    0,  510,    2, 0x08 /* Private */,
      85,    0,  511,    2, 0x08 /* Private */,
      86,    0,  512,    2, 0x08 /* Private */,
      87,    0,  513,    2, 0x08 /* Private */,
      88,    0,  514,    2, 0x08 /* Private */,
      89,    0,  515,    2, 0x08 /* Private */,
      90,    0,  516,    2, 0x08 /* Private */,
      91,    0,  517,    2, 0x08 /* Private */,
      92,    0,  518,    2, 0x08 /* Private */,
      93,    0,  519,    2, 0x08 /* Private */,
      94,    0,  520,    2, 0x08 /* Private */,
      95,    0,  521,    2, 0x08 /* Private */,
      96,    0,  522,    2, 0x08 /* Private */,
      97,    0,  523,    2, 0x08 /* Private */,
      98,    1,  524,    2, 0x08 /* Private */,
     100,    0,  527,    2, 0x08 /* Private */,
     101,    0,  528,    2, 0x08 /* Private */,
     102,    0,  529,    2, 0x08 /* Private */,
     103,    0,  530,    2, 0x08 /* Private */,
     104,    0,  531,    2, 0x08 /* Private */,
     105,    0,  532,    2, 0x08 /* Private */,
     106,    0,  533,    2, 0x08 /* Private */,
     107,    0,  534,    2, 0x08 /* Private */,
     108,    0,  535,    2, 0x08 /* Private */,
     109,    0,  536,    2, 0x08 /* Private */,
     110,    0,  537,    2, 0x08 /* Private */,
     111,    0,  538,    2, 0x08 /* Private */,
     112,    0,  539,    2, 0x08 /* Private */,
     113,    0,  540,    2, 0x08 /* Private */,
     114,    0,  541,    2, 0x08 /* Private */,
     115,    0,  542,    2, 0x08 /* Private */,
     116,    0,  543,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, 0x80000000 | 32, QMetaType::Int,   30,   31,   33,   34,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   36,   37,
    QMetaType::Void, QMetaType::Double,   39,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Bool,   41,   42,   43,
    QMetaType::Void, 0x80000000 | 32, QMetaType::Int,   33,   45,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   50,   51,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   53,   54,   55,   56,
    QMetaType::Void, QMetaType::Double,   58,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   74,
    QMetaType::Void, QMetaType::Bool,   74,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   99,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serialDataAvailable(); break;
        case 1: _t->serialPortError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 2: _t->timerSlot(); break;
        case 3: _t->packetDataToSend((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 4: _t->fwVersionReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->ackReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->mcValuesReceived((*reinterpret_cast< MC_VALUES(*)>(_a[1]))); break;
        case 7: _t->printReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->samplesReceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 9: _t->rotorPosReceived((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->experimentSamplesReceived((*reinterpret_cast< QVector<double>(*)>(_a[1]))); break;
        case 11: _t->mcconfReceived((*reinterpret_cast< mc_configuration(*)>(_a[1]))); break;
        case 12: _t->motorParamReceived((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< QVector<int>(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 13: _t->motorRLReceived((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 14: _t->motorLinkageReceived((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->encoderParamReceived((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 16: _t->focHallTableReceived((*reinterpret_cast< QVector<int>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->appconfReceived((*reinterpret_cast< app_configuration(*)>(_a[1]))); break;
        case 18: _t->decodedPpmReceived((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 19: _t->decodedAdcReceived((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 20: _t->decodedChukReceived((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 21: _t->on_serialConnectButton_clicked(); break;
        case 22: _t->on_udpConnectButton_clicked(); break;
        case 23: _t->on_disconnectButton_clicked(); break;
        case 24: _t->on_getDataButton_clicked(); break;
        case 25: _t->on_getDataStartButton_clicked(); break;
        case 26: _t->on_dutyButton_clicked(); break;
        case 27: _t->on_rpmButton_clicked(); break;
        case 28: _t->on_currentButton_clicked(); break;
        case 29: _t->on_offButton_clicked(); break;
        case 30: _t->on_offBrakeButton_clicked(); break;
        case 31: _t->on_replotButton_clicked(); break;
        case 32: _t->on_rescaleButton_clicked(); break;
        case 33: _t->on_horizontalZoomBox_clicked(); break;
        case 34: _t->on_verticalZoomBox_clicked(); break;
        case 35: _t->on_filterLogScaleBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->on_filterLogScaleBox2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->on_detectButton_clicked(); break;
        case 38: _t->on_clearTerminalButton_clicked(); break;
        case 39: _t->on_sendTerminalButton_clicked(); break;
        case 40: _t->on_stopDetectButton_clicked(); break;
        case 41: _t->on_experimentClearSamplesButton_clicked(); break;
        case 42: _t->on_experimentSaveSamplesButton_clicked(); break;
        case 43: _t->on_mcconfReadButton_clicked(); break;
        case 44: _t->on_mcconfReadDefaultButton_clicked(); break;
        case 45: _t->on_mcconfWriteButton_clicked(); break;
        case 46: _t->on_currentBrakeButton_clicked(); break;
        case 47: _t->on_mcconfLoadXmlButton_clicked(); break;
        case 48: _t->on_mcconfSaveXmlButton_clicked(); break;
        case 49: _t->on_mcconfDetectMotorParamButton_clicked(); break;
        case 50: _t->on_appconfReadButton_clicked(); break;
        case 51: _t->on_appconfWriteButton_clicked(); break;
        case 52: _t->on_appconfRebootButton_clicked(); break;
        case 53: _t->on_appconfReadDefaultButton_clicked(); break;
        case 54: _t->on_posCtrlButton_clicked(); break;
        case 55: _t->on_firmwareChooseButton_clicked(); break;
        case 56: _t->on_firmwareUploadButton_clicked(); break;
        case 57: _t->on_firmwareVersionReadButton_clicked(); break;
        case 58: _t->on_firmwareCancelButton_clicked(); break;
        case 59: _t->on_servoOutputSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 60: _t->on_mcconfFocObserverGainCalcButton_clicked(); break;
        case 61: _t->on_mcconfFocMeasureRLButton_clicked(); break;
        case 62: _t->on_mcconfFocMeasureLinkageButton_clicked(); break;
        case 63: _t->on_mcconfFocCalcCCButton_clicked(); break;
        case 64: _t->on_mcconfFocApplyRLLambdaButton_clicked(); break;
        case 65: _t->on_mcconfFocCalcCCApplyButton_clicked(); break;
        case 66: _t->on_mcconfDetectApplyButton_clicked(); break;
        case 67: _t->on_mcconfFocMeasureEncoderButton_clicked(); break;
        case 68: _t->on_mcconfFocMeasureEncoderApplyButton_clicked(); break;
        case 69: _t->on_detectEncoderButton_clicked(); break;
        case 70: _t->on_detectPidPosButton_clicked(); break;
        case 71: _t->on_detectPidPosErrorButton_clicked(); break;
        case 72: _t->on_detectEncoderObserverErrorButton_clicked(); break;
        case 73: _t->on_detectObserverButton_clicked(); break;
        case 74: _t->on_mcconfFocMeasureHallButton_clicked(); break;
        case 75: _t->on_mcconfFocMeasureHallApplyButton_clicked(); break;
        case 76: _t->on_refreshButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 77)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 77;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 77)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 77;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
