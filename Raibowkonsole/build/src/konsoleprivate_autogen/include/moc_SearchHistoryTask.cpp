/****************************************************************************
** Meta object code from reading C++ file 'SearchHistoryTask.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/SearchHistoryTask.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SearchHistoryTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN7Konsole17SearchHistoryTaskE_t {};
} // unnamed namespace

template <> constexpr inline auto Konsole::SearchHistoryTask::qt_create_metaobjectdata<qt_meta_tag_ZN7Konsole17SearchHistoryTaskE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Konsole::SearchHistoryTask",
        "searchResults",
        "",
        "QSet<int>"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'searchResults'
        QtMocHelpers::SignalData<void(const QSet<int> &, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { QMetaType::Int, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SearchHistoryTask, qt_meta_tag_ZN7Konsole17SearchHistoryTaskE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Konsole::SearchHistoryTask::staticMetaObject = { {
    QMetaObject::SuperData::link<SessionTask::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole17SearchHistoryTaskE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole17SearchHistoryTaskE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Konsole17SearchHistoryTaskE_t>.metaTypes,
    nullptr
} };

void Konsole::SearchHistoryTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SearchHistoryTask *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->searchResults((*reinterpret_cast< std::add_pointer_t<QSet<int>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSet<int> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SearchHistoryTask::*)(const QSet<int> & , int )>(_a, &SearchHistoryTask::searchResults, 0))
            return;
    }
}

const QMetaObject *Konsole::SearchHistoryTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::SearchHistoryTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole17SearchHistoryTaskE_t>.strings))
        return static_cast<void*>(this);
    return SessionTask::qt_metacast(_clname);
}

int Konsole::SearchHistoryTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SessionTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Konsole::SearchHistoryTask::searchResults(const QSet<int> & _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
QT_WARNING_POP
