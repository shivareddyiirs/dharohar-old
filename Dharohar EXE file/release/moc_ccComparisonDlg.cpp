/****************************************************************************
** Meta object code from reading C++ file 'ccComparisonDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ccComparisonDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccComparisonDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ccComparisonDlg_t {
    QByteArrayData data[8];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccComparisonDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccComparisonDlg_t qt_meta_stringdata_ccComparisonDlg = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ccComparisonDlg"
QT_MOC_LITERAL(1, 16, 16), // "computeDistances"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "applyAndExit"
QT_MOC_LITERAL(4, 47, 13), // "cancelAndExit"
QT_MOC_LITERAL(5, 61, 9), // "showHisto"
QT_MOC_LITERAL(6, 71, 16), // "locaModelChanged"
QT_MOC_LITERAL(7, 88, 14) // "maxDistUpdated"

    },
    "ccComparisonDlg\0computeDistances\0\0"
    "applyAndExit\0cancelAndExit\0showHisto\0"
    "locaModelChanged\0maxDistUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccComparisonDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x09 /* Protected */,
       6,    1,   48,    2, 0x09 /* Protected */,
       7,    0,   51,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void ccComparisonDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccComparisonDlg *_t = static_cast<ccComparisonDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->computeDistances();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->applyAndExit(); break;
        case 2: _t->cancelAndExit(); break;
        case 3: _t->showHisto(); break;
        case 4: _t->locaModelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->maxDistUpdated(); break;
        default: ;
        }
    }
}

const QMetaObject ccComparisonDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccComparisonDlg.data,
      qt_meta_data_ccComparisonDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccComparisonDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccComparisonDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccComparisonDlg.stringdata0))
        return static_cast<void*>(const_cast< ccComparisonDlg*>(this));
    if (!strcmp(_clname, "Ui::ComparisonDialog"))
        return static_cast< Ui::ComparisonDialog*>(const_cast< ccComparisonDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccComparisonDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
