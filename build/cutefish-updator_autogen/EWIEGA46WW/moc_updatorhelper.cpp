/****************************************************************************
** Meta object code from reading C++ file 'updatorhelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../updatorhelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatorhelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UpdatorHelper_t {
    QByteArrayData data[16];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpdatorHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpdatorHelper_t qt_meta_stringdata_UpdatorHelper = {
    {
QT_MOC_LITERAL(0, 0, 13), // "UpdatorHelper"
QT_MOC_LITERAL(1, 14, 14), // "startingUpdate"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "updateFinished"
QT_MOC_LITERAL(4, 45, 11), // "updateError"
QT_MOC_LITERAL(5, 57, 19), // "checkUpdateFinished"
QT_MOC_LITERAL(6, 77, 20), // "statusDetailsChanged"
QT_MOC_LITERAL(7, 98, 20), // "checkProgressChanged"
QT_MOC_LITERAL(8, 119, 10), // "checkError"
QT_MOC_LITERAL(9, 130, 7), // "details"
QT_MOC_LITERAL(10, 138, 12), // "checkUpdates"
QT_MOC_LITERAL(11, 151, 7), // "upgrade"
QT_MOC_LITERAL(12, 159, 6), // "reboot"
QT_MOC_LITERAL(13, 166, 7), // "version"
QT_MOC_LITERAL(14, 174, 13), // "statusDetails"
QT_MOC_LITERAL(15, 188, 13) // "checkProgress"

    },
    "UpdatorHelper\0startingUpdate\0\0"
    "updateFinished\0updateError\0"
    "checkUpdateFinished\0statusDetailsChanged\0"
    "checkProgressChanged\0checkError\0details\0"
    "checkUpdates\0upgrade\0reboot\0version\0"
    "statusDetails\0checkProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpdatorHelper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       3,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,
       8,    1,   70,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   73,    2, 0x02 /* Public */,
      11,    0,   74,    2, 0x02 /* Public */,
      12,    0,   75,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::QString, 0x00095401,
      14, QMetaType::QString, 0x00495001,
      15, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       4,
       5,

       0        // eod
};

void UpdatorHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdatorHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startingUpdate(); break;
        case 1: _t->updateFinished(); break;
        case 2: _t->updateError(); break;
        case 3: _t->checkUpdateFinished(); break;
        case 4: _t->statusDetailsChanged(); break;
        case 5: _t->checkProgressChanged(); break;
        case 6: _t->checkError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->checkUpdates(); break;
        case 8: _t->upgrade(); break;
        case 9: _t->reboot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UpdatorHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdatorHelper::startingUpdate)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UpdatorHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdatorHelper::updateFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UpdatorHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdatorHelper::updateError)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UpdatorHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdatorHelper::checkUpdateFinished)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UpdatorHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdatorHelper::statusDetailsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (UpdatorHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdatorHelper::checkProgressChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (UpdatorHelper::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdatorHelper::checkError)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UpdatorHelper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->version(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->statusDetails(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->checkProgress(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject UpdatorHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_UpdatorHelper.data,
    qt_meta_data_UpdatorHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UpdatorHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdatorHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UpdatorHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UpdatorHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UpdatorHelper::startingUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UpdatorHelper::updateFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UpdatorHelper::updateError()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void UpdatorHelper::checkUpdateFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void UpdatorHelper::statusDetailsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void UpdatorHelper::checkProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void UpdatorHelper::checkError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
