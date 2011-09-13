/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat Jun 25 10:32:37 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      41,   11,   11,   11, 0x08,
      67,   11,   11,   11, 0x08,
      94,   11,   11,   11, 0x08,
     126,  120,   11,   11, 0x08,
     159,   11,   11,   11, 0x08,
     181,   11,   11,   11, 0x08,
     201,   11,   11,   11, 0x08,
     223,   11,   11,   11, 0x08,
     243,   11,   11,   11, 0x08,
     263,   11,   11,   11, 0x08,
     283,   11,   11,   11, 0x08,
     304,   11,   11,   11, 0x08,
     326,   11,   11,   11, 0x08,
     348,   11,   11,   11, 0x08,
     371,   11,   11,   11, 0x08,
     399,   11,   11,   11, 0x08,
     427,   11,   11,   11, 0x08,
     450,   11,   11,   11, 0x08,
     475,   11,   11,   11, 0x08,
     502,   11,   11,   11, 0x08,
     531,   11,   11,   11, 0x08,
     559,   11,   11,   11, 0x08,
     585,   11,   11,   11, 0x08,
     616,   11,   11,   11, 0x08,
     647,   11,   11,   11, 0x08,
     677,   11,   11,   11, 0x08,
     709,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_actionForward_triggered()\0"
    "on_actionBack_triggered()\0"
    "on_actionAbout_triggered()\0"
    "on_actionSave_triggered()\0index\0"
    "on_treeView_clicked(QModelIndex)\0"
    "slotGaussInSmoother()\0slotBoxInSmoother()\0"
    "slotEightInSmoother()\0slotTenInSmoother()\0"
    "slotMF5InSmoother()\0slotMF9InSmoother()\0"
    "slotILPFInSmoother()\0slotBWLPFInSmoother()\0"
    "slotIHPFInSharpener()\0slotBWHPFInSharpener()\0"
    "slotLaplacian4InSharpener()\0"
    "slotLaplacian8InSharpener()\0"
    "slotSobelInSharpener()\0slotPrewittInSharpener()\0"
    "slotIsotropicInSharpener()\0"
    "slotGradiantInEdgeDetector()\0"
    "slotRobertsInEdgeDetector()\0"
    "slotSobelInEdgeDetector()\0"
    "slotLaplacian8InEdgeDetector()\0"
    "slotLinearityInTransformator()\0"
    "slotLogTransInTransformator()\0"
    "slotPowerTransInTransformator()\0"
    "slotExpTransInTransformator()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_actionForward_triggered(); break;
        case 1: on_actionBack_triggered(); break;
        case 2: on_actionAbout_triggered(); break;
        case 3: on_actionSave_triggered(); break;
        case 4: on_treeView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: slotGaussInSmoother(); break;
        case 6: slotBoxInSmoother(); break;
        case 7: slotEightInSmoother(); break;
        case 8: slotTenInSmoother(); break;
        case 9: slotMF5InSmoother(); break;
        case 10: slotMF9InSmoother(); break;
        case 11: slotILPFInSmoother(); break;
        case 12: slotBWLPFInSmoother(); break;
        case 13: slotIHPFInSharpener(); break;
        case 14: slotBWHPFInSharpener(); break;
        case 15: slotLaplacian4InSharpener(); break;
        case 16: slotLaplacian8InSharpener(); break;
        case 17: slotSobelInSharpener(); break;
        case 18: slotPrewittInSharpener(); break;
        case 19: slotIsotropicInSharpener(); break;
        case 20: slotGradiantInEdgeDetector(); break;
        case 21: slotRobertsInEdgeDetector(); break;
        case 22: slotSobelInEdgeDetector(); break;
        case 23: slotLaplacian8InEdgeDetector(); break;
        case 24: slotLinearityInTransformator(); break;
        case 25: slotLogTransInTransformator(); break;
        case 26: slotPowerTransInTransformator(); break;
        case 27: slotExpTransInTransformator(); break;
        default: ;
        }
        _id -= 28;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
