/****************************************************************************
** Meta object code from reading C++ file 'MultiplotConfigWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/rqt_multiplot_plugin/include/rqt_multiplot/MultiplotConfigWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MultiplotConfigWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rqt_multiplot__MultiplotConfigWidget_t {
    QByteArrayData data[15];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rqt_multiplot__MultiplotConfigWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rqt_multiplot__MultiplotConfigWidget_t qt_meta_stringdata_rqt_multiplot__MultiplotConfigWidget = {
    {
QT_MOC_LITERAL(0, 0, 36), // "rqt_multiplot::MultiplotConfi..."
QT_MOC_LITERAL(1, 37, 28), // "currentConfigModifiedChanged"
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 8), // "modified"
QT_MOC_LITERAL(4, 76, 23), // "currentConfigUrlChanged"
QT_MOC_LITERAL(5, 100, 3), // "url"
QT_MOC_LITERAL(6, 104, 13), // "configChanged"
QT_MOC_LITERAL(7, 118, 29), // "configComboBoxEditTextChanged"
QT_MOC_LITERAL(8, 148, 4), // "text"
QT_MOC_LITERAL(9, 153, 31), // "configComboBoxCurrentUrlChanged"
QT_MOC_LITERAL(10, 185, 29), // "pushButtonClearHistoryClicked"
QT_MOC_LITERAL(11, 215, 20), // "pushButtonNewClicked"
QT_MOC_LITERAL(12, 236, 21), // "pushButtonOpenClicked"
QT_MOC_LITERAL(13, 258, 21), // "pushButtonSaveClicked"
QT_MOC_LITERAL(14, 280, 23) // "pushButtonSaveAsClicked"

    },
    "rqt_multiplot::MultiplotConfigWidget\0"
    "currentConfigModifiedChanged\0\0modified\0"
    "currentConfigUrlChanged\0url\0configChanged\0"
    "configComboBoxEditTextChanged\0text\0"
    "configComboBoxCurrentUrlChanged\0"
    "pushButtonClearHistoryClicked\0"
    "pushButtonNewClicked\0pushButtonOpenClicked\0"
    "pushButtonSaveClicked\0pushButtonSaveAsClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rqt_multiplot__MultiplotConfigWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   70,    2, 0x08 /* Private */,
       7,    1,   71,    2, 0x08 /* Private */,
       9,    1,   74,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,
      13,    0,   80,    2, 0x08 /* Private */,
      14,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rqt_multiplot::MultiplotConfigWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MultiplotConfigWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentConfigModifiedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->currentConfigUrlChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->configChanged(); break;
        case 3: _t->configComboBoxEditTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->configComboBoxCurrentUrlChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->pushButtonClearHistoryClicked(); break;
        case 6: _t->pushButtonNewClicked(); break;
        case 7: _t->pushButtonOpenClicked(); break;
        case 8: _t->pushButtonSaveClicked(); break;
        case 9: _t->pushButtonSaveAsClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MultiplotConfigWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiplotConfigWidget::currentConfigModifiedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MultiplotConfigWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiplotConfigWidget::currentConfigUrlChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rqt_multiplot::MultiplotConfigWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_rqt_multiplot__MultiplotConfigWidget.data,
    qt_meta_data_rqt_multiplot__MultiplotConfigWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rqt_multiplot::MultiplotConfigWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rqt_multiplot::MultiplotConfigWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rqt_multiplot__MultiplotConfigWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int rqt_multiplot::MultiplotConfigWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void rqt_multiplot::MultiplotConfigWidget::currentConfigModifiedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void rqt_multiplot::MultiplotConfigWidget::currentConfigUrlChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
