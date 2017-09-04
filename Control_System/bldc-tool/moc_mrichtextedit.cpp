/****************************************************************************
** Meta object code from reading C++ file 'mrichtextedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mrichtextedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mrichtextedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MRichTextEdit_t {
    QByteArrayData data[30];
    char stringdata0[379];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MRichTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MRichTextEdit_t qt_meta_stringdata_MRichTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MRichTextEdit"
QT_MOC_LITERAL(1, 14, 7), // "setText"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "text"
QT_MOC_LITERAL(4, 28, 12), // "setPlainText"
QT_MOC_LITERAL(5, 41, 7), // "setHtml"
QT_MOC_LITERAL(6, 49, 16), // "textRemoveFormat"
QT_MOC_LITERAL(7, 66, 19), // "textRemoveAllFormat"
QT_MOC_LITERAL(8, 86, 8), // "textBold"
QT_MOC_LITERAL(9, 95, 13), // "textUnderline"
QT_MOC_LITERAL(10, 109, 13), // "textStrikeout"
QT_MOC_LITERAL(11, 123, 10), // "textItalic"
QT_MOC_LITERAL(12, 134, 8), // "textSize"
QT_MOC_LITERAL(13, 143, 1), // "p"
QT_MOC_LITERAL(14, 145, 8), // "textLink"
QT_MOC_LITERAL(15, 154, 7), // "checked"
QT_MOC_LITERAL(16, 162, 9), // "textStyle"
QT_MOC_LITERAL(17, 172, 5), // "index"
QT_MOC_LITERAL(18, 178, 11), // "textBgColor"
QT_MOC_LITERAL(19, 190, 10), // "listBullet"
QT_MOC_LITERAL(20, 201, 11), // "listOrdered"
QT_MOC_LITERAL(21, 213, 28), // "slotCurrentCharFormatChanged"
QT_MOC_LITERAL(22, 242, 15), // "QTextCharFormat"
QT_MOC_LITERAL(23, 258, 6), // "format"
QT_MOC_LITERAL(24, 265, 25), // "slotCursorPositionChanged"
QT_MOC_LITERAL(25, 291, 24), // "slotClipboardDataChanged"
QT_MOC_LITERAL(26, 316, 19), // "increaseIndentation"
QT_MOC_LITERAL(27, 336, 19), // "decreaseIndentation"
QT_MOC_LITERAL(28, 356, 11), // "insertImage"
QT_MOC_LITERAL(29, 368, 10) // "textSource"

    },
    "MRichTextEdit\0setText\0\0text\0setPlainText\0"
    "setHtml\0textRemoveFormat\0textRemoveAllFormat\0"
    "textBold\0textUnderline\0textStrikeout\0"
    "textItalic\0textSize\0p\0textLink\0checked\0"
    "textStyle\0index\0textBgColor\0listBullet\0"
    "listOrdered\0slotCurrentCharFormatChanged\0"
    "QTextCharFormat\0format\0slotCursorPositionChanged\0"
    "slotClipboardDataChanged\0increaseIndentation\0"
    "decreaseIndentation\0insertImage\0"
    "textSource"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MRichTextEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x0a /* Public */,
       4,    1,  127,    2, 0x09 /* Protected */,
       5,    1,  130,    2, 0x09 /* Protected */,
       6,    0,  133,    2, 0x09 /* Protected */,
       7,    0,  134,    2, 0x09 /* Protected */,
       8,    0,  135,    2, 0x09 /* Protected */,
       9,    0,  136,    2, 0x09 /* Protected */,
      10,    0,  137,    2, 0x09 /* Protected */,
      11,    0,  138,    2, 0x09 /* Protected */,
      12,    1,  139,    2, 0x09 /* Protected */,
      14,    1,  142,    2, 0x09 /* Protected */,
      16,    1,  145,    2, 0x09 /* Protected */,
      18,    0,  148,    2, 0x09 /* Protected */,
      19,    1,  149,    2, 0x09 /* Protected */,
      20,    1,  152,    2, 0x09 /* Protected */,
      21,    1,  155,    2, 0x09 /* Protected */,
      24,    0,  158,    2, 0x09 /* Protected */,
      25,    0,  159,    2, 0x09 /* Protected */,
      26,    0,  160,    2, 0x09 /* Protected */,
      27,    0,  161,    2, 0x09 /* Protected */,
      28,    0,  162,    2, 0x09 /* Protected */,
      29,    0,  163,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MRichTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MRichTextEdit *_t = static_cast<MRichTextEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setPlainText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setHtml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->textRemoveFormat(); break;
        case 4: _t->textRemoveAllFormat(); break;
        case 5: _t->textBold(); break;
        case 6: _t->textUnderline(); break;
        case 7: _t->textStrikeout(); break;
        case 8: _t->textItalic(); break;
        case 9: _t->textSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->textLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->textStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->textBgColor(); break;
        case 13: _t->listBullet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->listOrdered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->slotCurrentCharFormatChanged((*reinterpret_cast< const QTextCharFormat(*)>(_a[1]))); break;
        case 16: _t->slotCursorPositionChanged(); break;
        case 17: _t->slotClipboardDataChanged(); break;
        case 18: _t->increaseIndentation(); break;
        case 19: _t->decreaseIndentation(); break;
        case 20: _t->insertImage(); break;
        case 21: _t->textSource(); break;
        default: ;
        }
    }
}

const QMetaObject MRichTextEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MRichTextEdit.data,
      qt_meta_data_MRichTextEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MRichTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MRichTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MRichTextEdit.stringdata0))
        return static_cast<void*>(const_cast< MRichTextEdit*>(this));
    if (!strcmp(_clname, "Ui::MRichTextEdit"))
        return static_cast< Ui::MRichTextEdit*>(const_cast< MRichTextEdit*>(this));
    return QWidget::qt_metacast(_clname);
}

int MRichTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
