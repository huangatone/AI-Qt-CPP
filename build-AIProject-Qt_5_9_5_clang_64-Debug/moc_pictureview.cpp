/****************************************************************************
** Meta object code from reading C++ file 'pictureview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AIProject/pictureview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pictureview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PictureView_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PictureView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PictureView_t qt_meta_stringdata_PictureView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PictureView"
QT_MOC_LITERAL(1, 12, 18), // "on_btnNext_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 31), // "on_horizontalSlider_sliderMoved"
QT_MOC_LITERAL(4, 64, 8), // "position"
QT_MOC_LITERAL(5, 73, 22), // "on_btnPVZoomIn_clicked"
QT_MOC_LITERAL(6, 96, 23), // "on_btnPVZoomOut_clicked"
QT_MOC_LITERAL(7, 120, 20) // "on_btnPVZoom_clicked"

    },
    "PictureView\0on_btnNext_clicked\0\0"
    "on_horizontalSlider_sliderMoved\0"
    "position\0on_btnPVZoomIn_clicked\0"
    "on_btnPVZoomOut_clicked\0on_btnPVZoom_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PictureView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PictureView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PictureView *_t = static_cast<PictureView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnNext_clicked(); break;
        case 1: _t->on_horizontalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_btnPVZoomIn_clicked(); break;
        case 3: _t->on_btnPVZoomOut_clicked(); break;
        case 4: _t->on_btnPVZoom_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject PictureView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PictureView.data,
      qt_meta_data_PictureView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PictureView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PictureView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PictureView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PictureView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE