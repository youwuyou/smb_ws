/****************************************************************************
** Meta object code from reading C++ file 'MultiplotWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/rqt_multiplot_plugin/include/rqt_multiplot/MultiplotWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MultiplotWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rqt_multiplot__MultiplotWidget_t {
    QByteArrayData data[6];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rqt_multiplot__MultiplotWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rqt_multiplot__MultiplotWidget_t qt_meta_stringdata_rqt_multiplot__MultiplotWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "rqt_multiplot::MultiplotWidget"
QT_MOC_LITERAL(1, 31, 40), // "configWidgetCurrentConfigModi..."
QT_MOC_LITERAL(2, 72, 0), // ""
QT_MOC_LITERAL(3, 73, 8), // "modified"
QT_MOC_LITERAL(4, 82, 35), // "configWidgetCurrentConfigUrlC..."
QT_MOC_LITERAL(5, 118, 3) // "url"

    },
    "rqt_multiplot::MultiplotWidget\0"
    "configWidgetCurrentConfigModifiedChanged\0"
    "\0modified\0configWidgetCurrentConfigUrlChanged\0"
    "url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rqt_multiplot__MultiplotWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void rqt_multiplot::MultiplotWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MultiplotWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configWidgetCurrentConfigModifiedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->configWidgetCurrentConfigUrlChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rqt_multiplot::MultiplotWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_rqt_multiplot__MultiplotWidget.data,
    qt_meta_data_rqt_multiplot__MultiplotWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rqt_multiplot::MultiplotWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rqt_multiplot::MultiplotWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rqt_multiplot__MultiplotWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int rqt_multiplot::MultiplotWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
