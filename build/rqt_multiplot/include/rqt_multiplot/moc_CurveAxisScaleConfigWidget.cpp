/****************************************************************************
** Meta object code from reading C++ file 'CurveAxisScaleConfigWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/rqt_multiplot_plugin/include/rqt_multiplot/CurveAxisScaleConfigWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CurveAxisScaleConfigWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rqt_multiplot__CurveAxisScaleConfigWidget_t {
    QByteArrayData data[18];
    char stringdata0[439];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rqt_multiplot__CurveAxisScaleConfigWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rqt_multiplot__CurveAxisScaleConfigWidget_t qt_meta_stringdata_rqt_multiplot__CurveAxisScaleConfigWidget = {
    {
QT_MOC_LITERAL(0, 0, 41), // "rqt_multiplot::CurveAxisScale..."
QT_MOC_LITERAL(1, 42, 17), // "configTypeChanged"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 4), // "type"
QT_MOC_LITERAL(4, 66, 28), // "configAbsoluteMinimumChanged"
QT_MOC_LITERAL(5, 95, 7), // "minimum"
QT_MOC_LITERAL(6, 103, 28), // "configAbsoluteMaximumChanged"
QT_MOC_LITERAL(7, 132, 7), // "maximum"
QT_MOC_LITERAL(8, 140, 28), // "configRelativeMinimumChanged"
QT_MOC_LITERAL(9, 169, 28), // "configRelativeMaximumChanged"
QT_MOC_LITERAL(10, 198, 26), // "radioButtonAbsoluteToggled"
QT_MOC_LITERAL(11, 225, 7), // "checked"
QT_MOC_LITERAL(12, 233, 26), // "radioButtonRelativeToggled"
QT_MOC_LITERAL(13, 260, 22), // "radioButtonAutoToggled"
QT_MOC_LITERAL(14, 283, 38), // "lineEditAbsoluteMinimumEditin..."
QT_MOC_LITERAL(15, 322, 38), // "lineEditAbsoluteMaximumEditin..."
QT_MOC_LITERAL(16, 361, 38), // "lineEditRelativeMinimumEditin..."
QT_MOC_LITERAL(17, 400, 38) // "lineEditRelativeMaximumEditin..."

    },
    "rqt_multiplot::CurveAxisScaleConfigWidget\0"
    "configTypeChanged\0\0type\0"
    "configAbsoluteMinimumChanged\0minimum\0"
    "configAbsoluteMaximumChanged\0maximum\0"
    "configRelativeMinimumChanged\0"
    "configRelativeMaximumChanged\0"
    "radioButtonAbsoluteToggled\0checked\0"
    "radioButtonRelativeToggled\0"
    "radioButtonAutoToggled\0"
    "lineEditAbsoluteMinimumEditingFinished\0"
    "lineEditAbsoluteMaximumEditingFinished\0"
    "lineEditRelativeMinimumEditingFinished\0"
    "lineEditRelativeMaximumEditingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rqt_multiplot__CurveAxisScaleConfigWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    1,   77,    2, 0x08 /* Private */,
       6,    1,   80,    2, 0x08 /* Private */,
       8,    1,   83,    2, 0x08 /* Private */,
       9,    1,   86,    2, 0x08 /* Private */,
      10,    1,   89,    2, 0x08 /* Private */,
      12,    1,   92,    2, 0x08 /* Private */,
      13,    1,   95,    2, 0x08 /* Private */,
      14,    0,   98,    2, 0x08 /* Private */,
      15,    0,   99,    2, 0x08 /* Private */,
      16,    0,  100,    2, 0x08 /* Private */,
      17,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rqt_multiplot::CurveAxisScaleConfigWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CurveAxisScaleConfigWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->configAbsoluteMinimumChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->configAbsoluteMaximumChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->configRelativeMinimumChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->configRelativeMaximumChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->radioButtonAbsoluteToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->radioButtonRelativeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->radioButtonAutoToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->lineEditAbsoluteMinimumEditingFinished(); break;
        case 9: _t->lineEditAbsoluteMaximumEditingFinished(); break;
        case 10: _t->lineEditRelativeMinimumEditingFinished(); break;
        case 11: _t->lineEditRelativeMaximumEditingFinished(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rqt_multiplot::CurveAxisScaleConfigWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_rqt_multiplot__CurveAxisScaleConfigWidget.data,
    qt_meta_data_rqt_multiplot__CurveAxisScaleConfigWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rqt_multiplot::CurveAxisScaleConfigWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rqt_multiplot::CurveAxisScaleConfigWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rqt_multiplot__CurveAxisScaleConfigWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int rqt_multiplot::CurveAxisScaleConfigWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
