/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_5;
    QAction *action_7;
    QAction *action_8;
    QAction *action_10;
    QAction *action_11;
    QAction *action_12;
    QAction *action_13;
    QAction *action_15;
    QAction *action_16;
    QAction *action_17;
    QAction *action_18;
    QAction *action_chinese;
    QAction *action_english;
    QAction *action_japanese;
    QAction *action_korean;
    QAction *action_deutsch;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QStringLiteral("action_7"));
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QStringLiteral("action_8"));
        action_10 = new QAction(MainWindow);
        action_10->setObjectName(QStringLiteral("action_10"));
        action_11 = new QAction(MainWindow);
        action_11->setObjectName(QStringLiteral("action_11"));
        action_12 = new QAction(MainWindow);
        action_12->setObjectName(QStringLiteral("action_12"));
        action_13 = new QAction(MainWindow);
        action_13->setObjectName(QStringLiteral("action_13"));
        action_15 = new QAction(MainWindow);
        action_15->setObjectName(QStringLiteral("action_15"));
        action_16 = new QAction(MainWindow);
        action_16->setObjectName(QStringLiteral("action_16"));
        action_17 = new QAction(MainWindow);
        action_17->setObjectName(QStringLiteral("action_17"));
        action_18 = new QAction(MainWindow);
        action_18->setObjectName(QStringLiteral("action_18"));
        action_chinese = new QAction(MainWindow);
        action_chinese->setObjectName(QStringLiteral("action_chinese"));
        action_chinese->setCheckable(true);
        action_english = new QAction(MainWindow);
        action_english->setObjectName(QStringLiteral("action_english"));
        action_english->setCheckable(true);
        action_japanese = new QAction(MainWindow);
        action_japanese->setObjectName(QStringLiteral("action_japanese"));
        action_japanese->setCheckable(true);
        action_korean = new QAction(MainWindow);
        action_korean->setObjectName(QStringLiteral("action_korean"));
        action_korean->setCheckable(true);
        action_deutsch = new QAction(MainWindow);
        action_deutsch->setObjectName(QStringLiteral("action_deutsch"));
        action_deutsch->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menu_3);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_3);
        menu->addSeparator();
        menu->addAction(action_5);
        menu->addSeparator();
        menu->addAction(action_7);
        menu->addAction(action_8);
        menu->addSeparator();
        menu->addAction(action_10);
        menu_2->addAction(action_11);
        menu_2->addAction(action_12);
        menu_2->addAction(action_13);
        menu_2->addSeparator();
        menu_2->addAction(action_15);
        menu_2->addAction(action_16);
        menu_3->addAction(action_17);
        menu_3->addAction(action_18);
        menu_3->addAction(menu_4->menuAction());
        menu_4->addAction(action_chinese);
        menu_4->addAction(action_english);
        menu_4->addAction(action_japanese);
        menu_4->addAction(action_korean);
        menu_4->addAction(action_deutsch);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", 0));
        action_2->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0));
        action_3->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", 0));
        action_5->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", 0));
        action_7->setText(QApplication::translate("MainWindow", "\345\257\274\345\205\245", 0));
        action_8->setText(QApplication::translate("MainWindow", "\345\257\274\345\207\272", 0));
        action_10->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
        action_11->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266", 0));
        action_12->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207", 0));
        action_13->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264", 0));
        action_15->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", 0));
        action_16->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200", 0));
        action_17->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276", 0));
        action_18->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", 0));
        action_chinese->setText(QApplication::translate("MainWindow", "\344\270\255\346\226\207", 0));
        action_english->setText(QApplication::translate("MainWindow", "English", 0));
        action_japanese->setText(QApplication::translate("MainWindow", "\346\227\245\346\234\254\350\252\236", 0));
        action_korean->setText(QApplication::translate("MainWindow", "\355\225\234\352\270\200", 0));
        action_deutsch->setText(QApplication::translate("MainWindow", "Deutsch", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", 0));
        menu_3->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0));
        menu_4->setTitle(QApplication::translate("MainWindow", "\350\257\255\350\250\200", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
