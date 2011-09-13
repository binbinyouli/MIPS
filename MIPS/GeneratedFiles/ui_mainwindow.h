/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Jun 25 10:32:38 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionBack;
    QAction *actionForward;
    QAction *actionAbout;
    QAction *actionSave;
    QAction *actionGauss_2;
    QAction *actionBox_2;
    QAction *actionEight_2;
    QAction *actionTen_2;
    QAction *actionMF9;
    QAction *actionMF5;
    QAction *actionIdeal_Low_Pass_Filter;
    QAction *actionButter_Worth_LP_Filter;
    QAction *actionIdeal_High_Pass_Filter;
    QAction *actionButter_Worth_HP_Filter;
    QAction *actionL4;
    QAction *actionL8;
    QAction *actionPrewitt;
    QAction *actionIsotropic;
    QAction *actionSobel;
    QAction *actionGradiant;
    QAction *actionRoberts;
    QAction *actionSobel_In_ED;
    QAction *actionLaplace8;
    QAction *actionLinearity;
    QAction *actionLogTrans;
    QAction *actionPowerTrans;
    QAction *actionExpTrans;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QLabel *imageInfo;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Preview;
    QMenu *menu_Sharpening;
    QMenu *menuLaplacian;
    QMenu *menu_Smoothness;
    QMenu *menuNeighbhAveraging;
    QMenu *menuMedian_Filter;
    QMenu *menuHelp;
    QMenu *menuEdge_Detecting;
    QMenu *menuGrayLT;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QTreeView *treeView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(818, 387);
        actionBack = new QAction(MainWindow);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        actionBack->setCheckable(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MIPS/images/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBack->setIcon(icon);
        actionForward = new QAction(MainWindow);
        actionForward->setObjectName(QString::fromUtf8("actionForward"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/MIPS/images/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionForward->setIcon(icon1);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/MIPS/images/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/MIPS/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionGauss_2 = new QAction(MainWindow);
        actionGauss_2->setObjectName(QString::fromUtf8("actionGauss_2"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/MIPS/images/gauss.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionGauss_2->setIcon(icon4);
        actionBox_2 = new QAction(MainWindow);
        actionBox_2->setObjectName(QString::fromUtf8("actionBox_2"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/MIPS/images/box.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionBox_2->setIcon(icon5);
        actionEight_2 = new QAction(MainWindow);
        actionEight_2->setObjectName(QString::fromUtf8("actionEight_2"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/MIPS/images/eight.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionEight_2->setIcon(icon6);
        actionTen_2 = new QAction(MainWindow);
        actionTen_2->setObjectName(QString::fromUtf8("actionTen_2"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/MIPS/images/ten.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionTen_2->setIcon(icon7);
        actionMF9 = new QAction(MainWindow);
        actionMF9->setObjectName(QString::fromUtf8("actionMF9"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/MIPS/images/m9.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionMF9->setIcon(icon8);
        actionMF5 = new QAction(MainWindow);
        actionMF5->setObjectName(QString::fromUtf8("actionMF5"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/MIPS/images/m5.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionMF5->setIcon(icon9);
        actionIdeal_Low_Pass_Filter = new QAction(MainWindow);
        actionIdeal_Low_Pass_Filter->setObjectName(QString::fromUtf8("actionIdeal_Low_Pass_Filter"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/MIPS/images/ideal lp.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionIdeal_Low_Pass_Filter->setIcon(icon10);
        actionButter_Worth_LP_Filter = new QAction(MainWindow);
        actionButter_Worth_LP_Filter->setObjectName(QString::fromUtf8("actionButter_Worth_LP_Filter"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/MIPS/images/BWLP.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionButter_Worth_LP_Filter->setIcon(icon11);
        actionIdeal_High_Pass_Filter = new QAction(MainWindow);
        actionIdeal_High_Pass_Filter->setObjectName(QString::fromUtf8("actionIdeal_High_Pass_Filter"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/MIPS/images/ideal hp.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionIdeal_High_Pass_Filter->setIcon(icon12);
        actionButter_Worth_HP_Filter = new QAction(MainWindow);
        actionButter_Worth_HP_Filter->setObjectName(QString::fromUtf8("actionButter_Worth_HP_Filter"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/MIPS/images/BW LP.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionButter_Worth_HP_Filter->setIcon(icon13);
        actionL4 = new QAction(MainWindow);
        actionL4->setObjectName(QString::fromUtf8("actionL4"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/MIPS/images/L4.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionL4->setIcon(icon14);
        actionL8 = new QAction(MainWindow);
        actionL8->setObjectName(QString::fromUtf8("actionL8"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/MIPS/images/L8.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionL8->setIcon(icon15);
        actionPrewitt = new QAction(MainWindow);
        actionPrewitt->setObjectName(QString::fromUtf8("actionPrewitt"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/MIPS/images/Pre.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrewitt->setIcon(icon16);
        actionIsotropic = new QAction(MainWindow);
        actionIsotropic->setObjectName(QString::fromUtf8("actionIsotropic"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/MIPS/images/Iso.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionIsotropic->setIcon(icon17);
        actionSobel = new QAction(MainWindow);
        actionSobel->setObjectName(QString::fromUtf8("actionSobel"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/MIPS/images/Sob.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSobel->setIcon(icon18);
        actionGradiant = new QAction(MainWindow);
        actionGradiant->setObjectName(QString::fromUtf8("actionGradiant"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/MIPS/images/gradiant.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionGradiant->setIcon(icon19);
        actionRoberts = new QAction(MainWindow);
        actionRoberts->setObjectName(QString::fromUtf8("actionRoberts"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/MIPS/images/roberts.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionRoberts->setIcon(icon20);
        actionSobel_In_ED = new QAction(MainWindow);
        actionSobel_In_ED->setObjectName(QString::fromUtf8("actionSobel_In_ED"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/MIPS/images/sobel in ed.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSobel_In_ED->setIcon(icon21);
        actionLaplace8 = new QAction(MainWindow);
        actionLaplace8->setObjectName(QString::fromUtf8("actionLaplace8"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/MIPS/images/L8 in ed.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionLaplace8->setIcon(icon22);
        actionLinearity = new QAction(MainWindow);
        actionLinearity->setObjectName(QString::fromUtf8("actionLinearity"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/MIPS/images/Line.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionLinearity->setIcon(icon23);
        actionLogTrans = new QAction(MainWindow);
        actionLogTrans->setObjectName(QString::fromUtf8("actionLogTrans"));
        actionPowerTrans = new QAction(MainWindow);
        actionPowerTrans->setObjectName(QString::fromUtf8("actionPowerTrans"));
        actionExpTrans = new QAction(MainWindow);
        actionExpTrans->setObjectName(QString::fromUtf8("actionExpTrans"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));

        verticalLayout_2->addWidget(tabWidget);

        imageInfo = new QLabel(centralWidget);
        imageInfo->setObjectName(QString::fromUtf8("imageInfo"));

        verticalLayout_2->addWidget(imageInfo);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 818, 23));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Preview = new QMenu(menuBar);
        menu_Preview->setObjectName(QString::fromUtf8("menu_Preview"));
        menu_Sharpening = new QMenu(menuBar);
        menu_Sharpening->setObjectName(QString::fromUtf8("menu_Sharpening"));
        menuLaplacian = new QMenu(menu_Sharpening);
        menuLaplacian->setObjectName(QString::fromUtf8("menuLaplacian"));
        menu_Smoothness = new QMenu(menuBar);
        menu_Smoothness->setObjectName(QString::fromUtf8("menu_Smoothness"));
        menuNeighbhAveraging = new QMenu(menu_Smoothness);
        menuNeighbhAveraging->setObjectName(QString::fromUtf8("menuNeighbhAveraging"));
        menuMedian_Filter = new QMenu(menu_Smoothness);
        menuMedian_Filter->setObjectName(QString::fromUtf8("menuMedian_Filter"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuEdge_Detecting = new QMenu(menuBar);
        menuEdge_Detecting->setObjectName(QString::fromUtf8("menuEdge_Detecting"));
        menuGrayLT = new QMenu(menuBar);
        menuGrayLT->setObjectName(QString::fromUtf8("menuGrayLT"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setFocusPolicy(Qt::NoFocus);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dockWidget->sizePolicy().hasHeightForWidth());
        dockWidget->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        dockWidget->setPalette(palette);
        dockWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        dockWidget->setAcceptDrops(true);
        dockWidget->setStyleSheet(QString::fromUtf8(""));
        dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeView = new QTreeView(dockWidgetContents);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy1);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush5(QColor(255, 170, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush5);
        QBrush brush6(QColor(255, 213, 127, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush7(QColor(255, 191, 63, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        QBrush brush8(QColor(127, 85, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush8);
        QBrush brush9(QColor(170, 113, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QLinearGradient gradient(0, 0, 1, 0);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(9, 41, 4, 255));
        gradient.setColorAt(0.085, QColor(2, 79, 0, 255));
        gradient.setColorAt(0.19, QColor(50, 147, 22, 255));
        gradient.setColorAt(0.275, QColor(236, 191, 49, 255));
        gradient.setColorAt(0.39, QColor(243, 61, 34, 255));
        gradient.setColorAt(0.555, QColor(135, 81, 60, 255));
        gradient.setColorAt(0.667, QColor(121, 75, 255, 255));
        gradient.setColorAt(0.825, QColor(164, 255, 244, 255));
        gradient.setColorAt(0.885, QColor(104, 222, 71, 255));
        gradient.setColorAt(1, QColor(93, 128, 0, 255));
        QBrush brush10(gradient);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        QLinearGradient gradient1(0, 0, 1, 0);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(9, 41, 4, 255));
        gradient1.setColorAt(0.085, QColor(2, 79, 0, 255));
        gradient1.setColorAt(0.19, QColor(50, 147, 22, 255));
        gradient1.setColorAt(0.275, QColor(236, 191, 49, 255));
        gradient1.setColorAt(0.39, QColor(243, 61, 34, 255));
        gradient1.setColorAt(0.555, QColor(135, 81, 60, 255));
        gradient1.setColorAt(0.667, QColor(121, 75, 255, 255));
        gradient1.setColorAt(0.825, QColor(164, 255, 244, 255));
        gradient1.setColorAt(0.885, QColor(104, 222, 71, 255));
        gradient1.setColorAt(1, QColor(93, 128, 0, 255));
        QBrush brush11(gradient1);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QLinearGradient gradient2(0, 0, 1, 0);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(9, 41, 4, 255));
        gradient2.setColorAt(0.085, QColor(2, 79, 0, 255));
        gradient2.setColorAt(0.19, QColor(50, 147, 22, 255));
        gradient2.setColorAt(0.275, QColor(236, 191, 49, 255));
        gradient2.setColorAt(0.39, QColor(243, 61, 34, 255));
        gradient2.setColorAt(0.555, QColor(135, 81, 60, 255));
        gradient2.setColorAt(0.667, QColor(121, 75, 255, 255));
        gradient2.setColorAt(0.825, QColor(164, 255, 244, 255));
        gradient2.setColorAt(0.885, QColor(104, 222, 71, 255));
        gradient2.setColorAt(1, QColor(93, 128, 0, 255));
        QBrush brush12(gradient2);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        treeView->setPalette(palette1);

        verticalLayout->addWidget(treeView);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Preview->menuAction());
        menuBar->addAction(menu_Smoothness->menuAction());
        menuBar->addAction(menu_Sharpening->menuAction());
        menuBar->addAction(menuEdge_Detecting->menuAction());
        menuBar->addAction(menuGrayLT->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menu_File->addAction(actionSave);
        menu_Preview->addAction(actionBack);
        menu_Preview->addAction(actionForward);
        menu_Sharpening->addAction(menuLaplacian->menuAction());
        menu_Sharpening->addAction(actionPrewitt);
        menu_Sharpening->addAction(actionIsotropic);
        menu_Sharpening->addAction(actionSobel);
        menu_Sharpening->addSeparator();
        menu_Sharpening->addAction(actionIdeal_High_Pass_Filter);
        menu_Sharpening->addAction(actionButter_Worth_HP_Filter);
        menuLaplacian->addAction(actionL4);
        menuLaplacian->addAction(actionL8);
        menu_Smoothness->addAction(menuNeighbhAveraging->menuAction());
        menu_Smoothness->addAction(menuMedian_Filter->menuAction());
        menu_Smoothness->addSeparator();
        menu_Smoothness->addAction(actionIdeal_Low_Pass_Filter);
        menu_Smoothness->addAction(actionButter_Worth_LP_Filter);
        menuNeighbhAveraging->addAction(actionGauss_2);
        menuNeighbhAveraging->addAction(actionBox_2);
        menuNeighbhAveraging->addAction(actionEight_2);
        menuNeighbhAveraging->addAction(actionTen_2);
        menuMedian_Filter->addAction(actionMF9);
        menuMedian_Filter->addAction(actionMF5);
        menuHelp->addAction(actionAbout);
        menuEdge_Detecting->addAction(actionGradiant);
        menuEdge_Detecting->addAction(actionRoberts);
        menuEdge_Detecting->addAction(actionSobel_In_ED);
        menuEdge_Detecting->addAction(actionLaplace8);
        menuGrayLT->addAction(actionLinearity);
        menuGrayLT->addAction(actionLogTrans);
        menuGrayLT->addAction(actionPowerTrans);
        menuGrayLT->addAction(actionExpTrans);
        mainToolBar->addAction(actionBack);
        mainToolBar->addAction(actionForward);
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionGauss_2);
        mainToolBar->addAction(actionBox_2);
        mainToolBar->addAction(actionEight_2);
        mainToolBar->addAction(actionTen_2);
        mainToolBar->addAction(actionMF5);
        mainToolBar->addAction(actionMF9);
        mainToolBar->addAction(actionIdeal_Low_Pass_Filter);
        mainToolBar->addAction(actionButter_Worth_LP_Filter);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionL4);
        mainToolBar->addAction(actionL8);
        mainToolBar->addAction(actionPrewitt);
        mainToolBar->addAction(actionIsotropic);
        mainToolBar->addAction(actionSobel);
        mainToolBar->addAction(actionButter_Worth_HP_Filter);
        mainToolBar->addAction(actionIdeal_High_Pass_Filter);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionGradiant);
        mainToolBar->addAction(actionRoberts);
        mainToolBar->addAction(actionSobel_In_ED);
        mainToolBar->addAction(actionLaplace8);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionLinearity);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAbout);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionBack->setText(QApplication::translate("MainWindow", "Back", 0, QApplication::UnicodeUTF8));
        actionBack->setShortcut(QApplication::translate("MainWindow", "Up", 0, QApplication::UnicodeUTF8));
        actionForward->setText(QApplication::translate("MainWindow", "Forward", 0, QApplication::UnicodeUTF8));
        actionForward->setShortcut(QApplication::translate("MainWindow", "Down", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionAbout->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionGauss_2->setText(QApplication::translate("MainWindow", "Gauss", 0, QApplication::UnicodeUTF8));
        actionBox_2->setText(QApplication::translate("MainWindow", "Box", 0, QApplication::UnicodeUTF8));
        actionEight_2->setText(QApplication::translate("MainWindow", "Eight", 0, QApplication::UnicodeUTF8));
        actionTen_2->setText(QApplication::translate("MainWindow", "Ten", 0, QApplication::UnicodeUTF8));
        actionMF9->setText(QApplication::translate("MainWindow", "MF9", 0, QApplication::UnicodeUTF8));
        actionMF5->setText(QApplication::translate("MainWindow", "MF5", 0, QApplication::UnicodeUTF8));
        actionIdeal_Low_Pass_Filter->setText(QApplication::translate("MainWindow", "Ideal Low Pass Filter", 0, QApplication::UnicodeUTF8));
        actionButter_Worth_LP_Filter->setText(QApplication::translate("MainWindow", "Butter Worth LP Filter", 0, QApplication::UnicodeUTF8));
        actionIdeal_High_Pass_Filter->setText(QApplication::translate("MainWindow", "Ideal High Pass Filter", 0, QApplication::UnicodeUTF8));
        actionButter_Worth_HP_Filter->setText(QApplication::translate("MainWindow", "Butter Worth HP Filter", 0, QApplication::UnicodeUTF8));
        actionL4->setText(QApplication::translate("MainWindow", "L4", 0, QApplication::UnicodeUTF8));
        actionL8->setText(QApplication::translate("MainWindow", "L8", 0, QApplication::UnicodeUTF8));
        actionPrewitt->setText(QApplication::translate("MainWindow", "Prewitt", 0, QApplication::UnicodeUTF8));
        actionIsotropic->setText(QApplication::translate("MainWindow", "Isotropic", 0, QApplication::UnicodeUTF8));
        actionSobel->setText(QApplication::translate("MainWindow", "Sobel", 0, QApplication::UnicodeUTF8));
        actionGradiant->setText(QApplication::translate("MainWindow", "Gradiant", 0, QApplication::UnicodeUTF8));
        actionRoberts->setText(QApplication::translate("MainWindow", "Roberts", 0, QApplication::UnicodeUTF8));
        actionSobel_In_ED->setText(QApplication::translate("MainWindow", "Sobel In ED", 0, QApplication::UnicodeUTF8));
        actionLaplace8->setText(QApplication::translate("MainWindow", "Laplace8", 0, QApplication::UnicodeUTF8));
        actionLinearity->setText(QApplication::translate("MainWindow", "Linearity", 0, QApplication::UnicodeUTF8));
        actionLogTrans->setText(QApplication::translate("MainWindow", "LogTrans", 0, QApplication::UnicodeUTF8));
        actionPowerTrans->setText(QApplication::translate("MainWindow", "PowerTrans", 0, QApplication::UnicodeUTF8));
        actionExpTrans->setText(QApplication::translate("MainWindow", "ExpTrans", 0, QApplication::UnicodeUTF8));
        imageInfo->setText(QString());
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menu_Preview->setTitle(QApplication::translate("MainWindow", "&Preview", 0, QApplication::UnicodeUTF8));
        menu_Sharpening->setTitle(QApplication::translate("MainWindow", "&Sharpening", 0, QApplication::UnicodeUTF8));
        menuLaplacian->setTitle(QApplication::translate("MainWindow", "Laplacian", 0, QApplication::UnicodeUTF8));
        menu_Smoothness->setTitle(QApplication::translate("MainWindow", "S&moothness", 0, QApplication::UnicodeUTF8));
        menuNeighbhAveraging->setTitle(QApplication::translate("MainWindow", "Neighbh Averaging", 0, QApplication::UnicodeUTF8));
        menuMedian_Filter->setTitle(QApplication::translate("MainWindow", "Median Filter", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuEdge_Detecting->setTitle(QApplication::translate("MainWindow", "Edge Detecting", 0, QApplication::UnicodeUTF8));
        menuGrayLT->setTitle(QApplication::translate("MainWindow", "GrayLT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
