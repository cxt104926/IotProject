/****************************************************************************
** Meta object code from reading C++ file 'networkmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../networkmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetworkModel_t {
    QByteArrayData data[11];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkModel_t qt_meta_stringdata_NetworkModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "NetworkModel"
QT_MOC_LITERAL(1, 13, 11), // "clientCount"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "readClientData"
QT_MOC_LITERAL(4, 41, 17), // "sendToPublicCloud"
QT_MOC_LITERAL(5, 59, 4), // "data"
QT_MOC_LITERAL(6, 64, 12), // "sendToClient"
QT_MOC_LITERAL(7, 77, 19), // "handleNewConnection"
QT_MOC_LITERAL(8, 97, 20), // "handleDataFromClient"
QT_MOC_LITERAL(9, 118, 19), // "handleDisconnection"
QT_MOC_LITERAL(10, 138, 19) // "handleDataFromClode"

    },
    "NetworkModel\0clientCount\0\0readClientData\0"
    "sendToPublicCloud\0data\0sendToClient\0"
    "handleNewConnection\0handleDataFromClient\0"
    "handleDisconnection\0handleDataFromClode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   60,    2, 0x0a /* Public */,
       6,    1,   63,    2, 0x0a /* Public */,
       7,    0,   66,    2, 0x0a /* Public */,
       8,    1,   67,    2, 0x0a /* Public */,
       9,    0,   70,    2, 0x0a /* Public */,
      10,    0,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,

 // slots: parameters
    QMetaType::LongLong, QMetaType::QByteArray,    5,
    QMetaType::LongLong, QMetaType::QByteArray,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NetworkModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetworkModel *_t = static_cast<NetworkModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clientCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->readClientData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: { qint64 _r = _t->sendToPublicCloud((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 3: { qint64 _r = _t->sendToClient((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->handleNewConnection(); break;
        case 5: _t->handleDataFromClient((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 6: _t->handleDisconnection(); break;
        case 7: _t->handleDataFromClode(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NetworkModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkModel::clientCount)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NetworkModel::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkModel::readClientData)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NetworkModel::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_NetworkModel.data,
    qt_meta_data_NetworkModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NetworkModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkModel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NetworkModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void NetworkModel::clientCount(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NetworkModel::readClientData(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
