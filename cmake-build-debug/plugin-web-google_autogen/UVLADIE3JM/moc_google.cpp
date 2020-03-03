/****************************************************************************
** Meta object code from reading C++ file 'google.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/google.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'google.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Google_t {
    QByteArrayData data[6];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Google_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Google_t qt_meta_stringdata_Google = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Google"
QT_MOC_LITERAL(1, 7, 11), // "sendMessage"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 15), // "PluginMetaData*"
QT_MOC_LITERAL(4, 36, 4), // "data"
QT_MOC_LITERAL(5, 41, 14) // "receiveMessage"

    },
    "Google\0sendMessage\0\0PluginMetaData*\0"
    "data\0receiveMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Google[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Google::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Google *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendMessage((*reinterpret_cast< PluginMetaData*(*)>(_a[1]))); break;
        case 1: _t->receiveMessage((*reinterpret_cast< PluginMetaData*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PluginMetaData* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PluginMetaData* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Google::*)(PluginMetaData * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Google::sendMessage)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Google::staticMetaObject = { {
    QMetaObject::SuperData::link<IAppPluginInterface::staticMetaObject>(),
    qt_meta_stringdata_Google.data,
    qt_meta_data_Google,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Google::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Google::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Google.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "App.Plugin.Interface"))
        return static_cast< IAppPluginInterface*>(this);
    return IAppPluginInterface::qt_metacast(_clname);
}

int Google::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IAppPluginInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Google::sendMessage(PluginMetaData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x74,  'A',  'p',  'p',  '.',  'P',  'l', 
    'u',  'g',  'i',  'n',  '.',  'I',  'n',  't', 
    'e',  'r',  'f',  'a',  'c',  'e', 
    // "className"
    0x03,  0x66,  'G',  'o',  'o',  'g',  'l',  'e', 
    // "MetaData"
    0x04,  0xa9,  0x66,  'a',  'u',  't',  'h',  'o', 
    'r',  0x69,  uchar('\xe6'), uchar('\xaf'), uchar('\x9b'), uchar('\xe5'), uchar('\x8d'), uchar('\x8e'),
    uchar('\xe4'), uchar('\xbc'), uchar('\x9f'), 0x64,  'd',  'a',  't',  'e', 
    0x6a,  '2',  '0',  '2',  '0',  '/',  '0',  '3', 
    '/',  '0',  '3',  0x64,  'd',  'e',  's',  'c', 
    0x72,  uchar('\xe4'), uchar('\xb8'), uchar('\xad'), uchar('\xe6'), uchar('\x96'), uchar('\x87'), uchar('\xe6'),
    uchar('\xa3'), uchar('\x80'), uchar('\xe7'), uchar('\xb4'), uchar('\xa2'), uchar('\xe5'), uchar('\xbc'), uchar('\x95'),
    uchar('\xe6'), uchar('\x93'), uchar('\x8e'), 0x6b,  'f',  'o',  'r',  'c', 
    'e',  'U',  'p',  'd',  'a',  't',  'e',  0x64, 
    't',  'r',  'u',  'e',  0x69,  'i',  'c',  'o', 
    'n',  'L',  'o',  'c',  'a',  'l',  0x78,  0x1c, 
    'q',  'r',  'c',  ':',  '/',  'i',  'm',  'a', 
    'g',  'e',  's',  '/',  'i',  'm',  'a',  'g', 
    'e',  '_',  'g',  'o',  'o',  'g',  'l',  'e', 
    '.',  'p',  'n',  'g',  0x6c,  'i',  'c',  'o', 
    'n',  'R',  'e',  'm',  'o',  't',  'e',  'l', 
    'y',  0x78,  0x1d,  'h',  't',  't',  'p',  's', 
    ':',  '/',  '/',  '.',  '.',  '.',  ' ',  uchar('\xe9'),
    uchar('\x85'), uchar('\x8d'), uchar('\xe7'), uchar('\xbd'), uchar('\xae'), ' ',  'c',  'd', 
    'n',  ' ',  uchar('\xe5'), uchar('\x9c'), uchar('\xb0'), uchar('\xe5'), uchar('\x9d'), uchar('\x80'),
    0x64,  'n',  'a',  'm',  'e',  0x72,  uchar('\xe8'), uchar('\xb0'),
    uchar('\xb7'), uchar('\xe6'), uchar('\xad'), uchar('\x8c'), uchar('\xe6'), uchar('\x90'), uchar('\x9c'), uchar('\xe7'),
    uchar('\xb4'), uchar('\xa2'), uchar('\xe5'), uchar('\xb7'), uchar('\xa5'), uchar('\xe5'), uchar('\x85'), uchar('\xb7'),
    0x6b,  'v',  'e',  'r',  's',  'i',  'o',  'n', 
    'C',  'o',  'd',  'e',  0x65,  '1',  '.',  '0', 
    '.',  '0',  0x6b,  'v',  'e',  'r',  's',  'i', 
    'o',  'n',  'N',  'a',  'm',  'e',  0x6a,  'd', 
    'e',  'v',  '-',  'l',  'a',  's',  't',  'e', 
    'r', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(Google, Google)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
