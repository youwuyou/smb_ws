/****************************************************************************
** Meta object code from reading C++ file 'MessageTopicComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/rqt_multiplot_plugin/include/rqt_multiplot/MessageTopicComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MessageTopicComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rqt_multiplot__MessageTopicComboBox_t {
    QByteArrayData data[11];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rqt_multiplot__MessageTopicComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rqt_multiplot__MessageTopicComboBox_t qt_meta_stringdata_rqt_multiplot__MessageTopicComboBox = {
    {
QT_MOC_LITERAL(0, 0, 35), // "rqt_multiplot::MessageTopicCo..."
QT_MOC_LITERAL(1, 36, 13), // "updateStarted"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 14), // "updateFinished"
QT_MOC_LITERAL(4, 66, 19), // "currentTopicChanged"
QT_MOC_LITERAL(5, 86, 5), // "topic"
QT_MOC_LITERAL(6, 92, 21), // "registryUpdateStarted"
QT_MOC_LITERAL(7, 114, 22), // "registryUpdateFinished"
QT_MOC_LITERAL(8, 137, 19), // "currentIndexChanged"
QT_MOC_LITERAL(9, 157, 4), // "text"
QT_MOC_LITERAL(10, 162, 23) // "lineEditEditingFinished"

    },
    "rqt_multiplot::MessageTopicComboBox\0"
    "updateStarted\0\0updateFinished\0"
    "currentTopicChanged\0topic\0"
    "registryUpdateStarted\0registryUpdateFinished\0"
    "currentIndexChanged\0text\0"
    "lineEditEditingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rqt_multiplot__MessageTopicComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

       0        // eod
};

void rqt_multiplot::MessageTopicComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MessageTopicComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateStarted(); break;
        case 1: _t->updateFinished(); break;
        case 2: _t->currentTopicChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->registryUpdateStarted(); break;
        case 4: _t->registryUpdateFinished(); break;
        case 5: _t->currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->lineEditEditingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MessageTopicComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageTopicComboBox::updateStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MessageTopicComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageTopicComboBox::updateFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MessageTopicComboBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageTopicComboBox::currentTopicChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rqt_multiplot::MessageTopicComboBox::staticMetaObject = { {
    &MatchFilterComboBox::staticMetaObject,
    qt_meta_stringdata_rqt_multiplot__MessageTopicComboBox.data,
    qt_meta_data_rqt_multiplot__MessageTopicComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rqt_multiplot::MessageTopicComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rqt_multiplot::MessageTopicComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rqt_multiplot__MessageTopicComboBox.stringdata0))
        return static_cast<void*>(this);
    return MatchFilterComboBox::qt_metacast(_clname);
}

int rqt_multiplot::MessageTopicComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MatchFilterComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void rqt_multiplot::MessageTopicComboBox::updateStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void rqt_multiplot::MessageTopicComboBox::updateFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void rqt_multiplot::MessageTopicComboBox::currentTopicChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
