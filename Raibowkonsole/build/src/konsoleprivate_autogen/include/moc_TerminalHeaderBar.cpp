/****************************************************************************
** Meta object code from reading C++ file 'TerminalHeaderBar.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/widgets/TerminalHeaderBar.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TerminalHeaderBar.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7Konsole17TerminalHeaderBarE_t {};
} // unnamed namespace

template <> constexpr inline auto Konsole::TerminalHeaderBar::qt_create_metaobjectdata<qt_meta_tag_ZN7Konsole17TerminalHeaderBarE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Konsole::TerminalHeaderBar",
        "requestToggleExpansion",
        "",
        "requestMoveToNewTab",
        "setFocusIndicatorState",
        "focused",
        "updateNotification",
        "ViewProperties*",
        "item",
        "Konsole::Session::Notification",
        "notification",
        "enabled",
        "updateSpecialState"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'requestToggleExpansion'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestMoveToNewTab'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setFocusIndicatorState'
        QtMocHelpers::SlotData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Slot 'updateNotification'
        QtMocHelpers::SlotData<void(ViewProperties *, Konsole::Session::Notification, bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 10 }, { QMetaType::Bool, 11 },
        }}),
        // Slot 'updateSpecialState'
        QtMocHelpers::SlotData<void(ViewProperties *)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TerminalHeaderBar, qt_meta_tag_ZN7Konsole17TerminalHeaderBarE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Konsole::TerminalHeaderBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole17TerminalHeaderBarE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole17TerminalHeaderBarE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Konsole17TerminalHeaderBarE_t>.metaTypes,
    nullptr
} };

void Konsole::TerminalHeaderBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TerminalHeaderBar *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->requestToggleExpansion(); break;
        case 1: _t->requestMoveToNewTab(); break;
        case 2: _t->setFocusIndicatorState((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->updateNotification((*reinterpret_cast< std::add_pointer_t<ViewProperties*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Konsole::Session::Notification>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 4: _t->updateSpecialState((*reinterpret_cast< std::add_pointer_t<ViewProperties*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TerminalHeaderBar::*)()>(_a, &TerminalHeaderBar::requestToggleExpansion, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TerminalHeaderBar::*)()>(_a, &TerminalHeaderBar::requestMoveToNewTab, 1))
            return;
    }
}

const QMetaObject *Konsole::TerminalHeaderBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::TerminalHeaderBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole17TerminalHeaderBarE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Konsole::TerminalHeaderBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Konsole::TerminalHeaderBar::requestToggleExpansion()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Konsole::TerminalHeaderBar::requestMoveToNewTab()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
