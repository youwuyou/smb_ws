/****************************************************************************
** Meta object code from reading C++ file 'CurveAxisConfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/rqt_multiplot_plugin/include/rqt_multiplot/CurveAxisConfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CurveAxisConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rqt_multiplot__CurveAxisConfig_t {
    QByteArrayData data[11];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rqt_multiplot__CurveAxisConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rqt_multiplot__CurveAxisConfig_t qt_meta_stringdata_rqt_multiplot__CurveAxisConfig = {
    {
QT_MOC_LITERAL(0, 0, 30), // "rqt_multiplot::CurveAxisConfig"
QT_MOC_LITERAL(1, 31, 12), // "topicChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "topic"
QT_MOC_LITERAL(4, 51, 11), // "typeChanged"
QT_MOC_LITERAL(5, 63, 4), // "type"
QT_MOC_LITERAL(6, 68, 16), // "fieldTypeChanged"
QT_MOC_LITERAL(7, 85, 9), // "fieldType"
QT_MOC_LITERAL(8, 95, 12), // "fieldChanged"
QT_MOC_LITERAL(9, 108, 5), // "field"
QT_MOC_LITERAL(10, 114, 12) // "scaleChanged"

    },
    "rqt_multiplot::CurveAxisConfig\0"
    "topicChanged\0\0topic\0typeChanged\0type\0"
    "fieldTypeChanged\0fieldType\0fieldChanged\0"
    "field\0scaleChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rqt_multiplot__CurveAxisConfig[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    1,   45,    2, 0x06 /* Public */,
       8,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void rqt_multiplot::CurveAxisConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CurveAxisConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->topicChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->typeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->fieldTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->fieldChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->scaleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CurveAxisConfig::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurveAxisConfig::topicChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CurveAxisConfig::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurveAxisConfig::typeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CurveAxisConfig::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurveAxisConfig::fieldTypeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CurveAxisConfig::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurveAxisConfig::fieldChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rqt_multiplot::CurveAxisConfig::staticMetaObject = { {
    &Config::staticMetaObject,
    qt_meta_stringdata_rqt_multiplot__CurveAxisConfig.data,
    qt_meta_data_rqt_multiplot__CurveAxisConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rqt_multiplot::CurveAxisConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rqt_multiplot::CurveAxisConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rqt_multiplot__CurveAxisConfig.stringdata0))
        return static_cast<void*>(this);
    return Config::qt_metacast(_clname);
}

int rqt_multiplot::CurveAxisConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Config::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void rqt_multiplot::CurveAxisConfig::topicChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void rqt_multiplot::CurveAxisConfig::typeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void rqt_multiplot::CurveAxisConfig::fieldTypeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void rqt_multiplot::CurveAxisConfig::fieldChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
