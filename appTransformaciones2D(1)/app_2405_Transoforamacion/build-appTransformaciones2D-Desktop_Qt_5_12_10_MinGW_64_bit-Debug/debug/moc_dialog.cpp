/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../app_2405_Transoforamacion_Proyecto/dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialog_t {
    QByteArrayData data[19];
    char stringdata0[360];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Dialog"
QT_MOC_LITERAL(1, 7, 17), // "on_btnIzq_clicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 20), // "on_btnArriba_clicked"
QT_MOC_LITERAL(4, 47, 17), // "on_btnDer_clicked"
QT_MOC_LITERAL(5, 65, 19), // "on_btnAbajo_clicked"
QT_MOC_LITERAL(6, 85, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(7, 107, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(8, 131, 28), // "on_doubleSpinBox_textChanged"
QT_MOC_LITERAL(9, 160, 4), // "arg1"
QT_MOC_LITERAL(10, 165, 29), // "on_verticalSlider_sliderMoved"
QT_MOC_LITERAL(11, 195, 8), // "position"
QT_MOC_LITERAL(12, 204, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(13, 228, 26), // "on_dial_angulo_sliderMoved"
QT_MOC_LITERAL(14, 255, 15), // "rotarAnimacion1"
QT_MOC_LITERAL(15, 271, 15), // "rotarAnimacion2"
QT_MOC_LITERAL(16, 287, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(17, 311, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(18, 335, 24) // "on_checkBox_stateChanged"

    },
    "Dialog\0on_btnIzq_clicked\0\0"
    "on_btnArriba_clicked\0on_btnDer_clicked\0"
    "on_btnAbajo_clicked\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_doubleSpinBox_textChanged\0arg1\0"
    "on_verticalSlider_sliderMoved\0position\0"
    "on_pushButton_3_clicked\0"
    "on_dial_angulo_sliderMoved\0rotarAnimacion1\0"
    "rotarAnimacion2\0on_pushButton_4_clicked\0"
    "on_pushButton_5_clicked\0"
    "on_checkBox_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    1,   95,    2, 0x08 /* Private */,
      10,    1,   98,    2, 0x08 /* Private */,
      12,    0,  101,    2, 0x08 /* Private */,
      13,    1,  102,    2, 0x08 /* Private */,
      14,    0,  105,    2, 0x08 /* Private */,
      15,    0,  106,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    1,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnIzq_clicked(); break;
        case 1: _t->on_btnArriba_clicked(); break;
        case 2: _t->on_btnDer_clicked(); break;
        case 3: _t->on_btnAbajo_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_doubleSpinBox_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_verticalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_3_clicked(); break;
        case 9: _t->on_dial_angulo_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->rotarAnimacion1(); break;
        case 11: _t->rotarAnimacion2(); break;
        case 12: _t->on_pushButton_4_clicked(); break;
        case 13: _t->on_pushButton_5_clicked(); break;
        case 14: _t->on_checkBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Dialog.data,
    qt_meta_data_Dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
