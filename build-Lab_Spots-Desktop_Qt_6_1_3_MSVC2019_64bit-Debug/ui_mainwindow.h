/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *mnuNewGame;
    QAction *mnuRestart;
    QAction *mnuExit;
    QWidget *centralwidget;
    QTableWidget *twSpots;
    QLabel *timeLabel;
    QLabel *movesLabel;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(282, 345);
        mnuNewGame = new QAction(MainWindow);
        mnuNewGame->setObjectName(QString::fromUtf8("mnuNewGame"));
        mnuRestart = new QAction(MainWindow);
        mnuRestart->setObjectName(QString::fromUtf8("mnuRestart"));
        mnuExit = new QAction(MainWindow);
        mnuExit->setObjectName(QString::fromUtf8("mnuExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        twSpots = new QTableWidget(centralwidget);
        if (twSpots->columnCount() < 4)
            twSpots->setColumnCount(4);
        if (twSpots->rowCount() < 4)
            twSpots->setRowCount(4);
        twSpots->setObjectName(QString::fromUtf8("twSpots"));
        twSpots->setGeometry(QRect(0, 0, 282, 282));
        twSpots->setShowGrid(true);
        twSpots->setGridStyle(Qt::SolidLine);
        twSpots->setRowCount(4);
        twSpots->setColumnCount(4);
        twSpots->horizontalHeader()->setVisible(false);
        twSpots->verticalHeader()->setVisible(false);
        timeLabel = new QLabel(centralwidget);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(0, 280, 65, 20));
        QFont font;
        font.setBold(true);
        timeLabel->setFont(font);
        movesLabel = new QLabel(centralwidget);
        movesLabel->setObjectName(QString::fromUtf8("movesLabel"));
        movesLabel->setGeometry(QRect(200, 280, 81, 20));
        movesLabel->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 282, 17));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(mnuNewGame);
        menu->addAction(mnuRestart);
        menu->addAction(mnuExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\237\321\217\321\202\320\275\320\260\321\210\320\272\320\270", nullptr));
        mnuNewGame->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \320\270\320\263\321\200\320\260", nullptr));
        mnuRestart->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
        mnuExit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        timeLabel->setText(QString());
        movesLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
