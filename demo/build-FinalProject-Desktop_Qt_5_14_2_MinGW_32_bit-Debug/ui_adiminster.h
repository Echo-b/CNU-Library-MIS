/********************************************************************************
** Form generated from reading UI file 'adiminster.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADIMINSTER_H
#define UI_ADIMINSTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Adiminster
{
public:
    QAction *actionaddUser;
    QAction *actionsearchUser;
    QAction *actionaddBook;
    QAction *actionsearchBook;
    QAction *actionborrowBookRanking;
    QAction *actionuserBorrowRanking;
    QAction *actionuserCollegeRanking;
    QAction *actionchangeAdmin;
    QAction *actionchangeUser_2;
    QAction *actionexit;
    QAction *actionGenderReadingComparation;
    QAction *action;
    QAction *action_2;
    QAction *batchAppendBook_action;
    QAction *patchAppendUser_action;
    QWidget *centralwidget;
    QWidget *widget_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *userDataTableView;
    QWidget *tab_2;
    QTableView *bookDataTableView;
    QWidget *tab_3;
    QTableView *countTableView;
    QCustomPlot *drawPaint;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Adiminster)
    {
        if (Adiminster->objectName().isEmpty())
            Adiminster->setObjectName(QString::fromUtf8("Adiminster"));
        Adiminster->resize(1420, 826);
        actionaddUser = new QAction(Adiminster);
        actionaddUser->setObjectName(QString::fromUtf8("actionaddUser"));
        actionsearchUser = new QAction(Adiminster);
        actionsearchUser->setObjectName(QString::fromUtf8("actionsearchUser"));
        actionaddBook = new QAction(Adiminster);
        actionaddBook->setObjectName(QString::fromUtf8("actionaddBook"));
        actionsearchBook = new QAction(Adiminster);
        actionsearchBook->setObjectName(QString::fromUtf8("actionsearchBook"));
        actionborrowBookRanking = new QAction(Adiminster);
        actionborrowBookRanking->setObjectName(QString::fromUtf8("actionborrowBookRanking"));
        actionuserBorrowRanking = new QAction(Adiminster);
        actionuserBorrowRanking->setObjectName(QString::fromUtf8("actionuserBorrowRanking"));
        actionuserCollegeRanking = new QAction(Adiminster);
        actionuserCollegeRanking->setObjectName(QString::fromUtf8("actionuserCollegeRanking"));
        actionchangeAdmin = new QAction(Adiminster);
        actionchangeAdmin->setObjectName(QString::fromUtf8("actionchangeAdmin"));
        actionchangeUser_2 = new QAction(Adiminster);
        actionchangeUser_2->setObjectName(QString::fromUtf8("actionchangeUser_2"));
        actionexit = new QAction(Adiminster);
        actionexit->setObjectName(QString::fromUtf8("actionexit"));
        actionGenderReadingComparation = new QAction(Adiminster);
        actionGenderReadingComparation->setObjectName(QString::fromUtf8("actionGenderReadingComparation"));
        action = new QAction(Adiminster);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(Adiminster);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        batchAppendBook_action = new QAction(Adiminster);
        batchAppendBook_action->setObjectName(QString::fromUtf8("batchAppendBook_action"));
        patchAppendUser_action = new QAction(Adiminster);
        patchAppendUser_action->setObjectName(QString::fromUtf8("patchAppendUser_action"));
        centralwidget = new QWidget(Adiminster);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(10, 10, 1511, 881));
        tabWidget = new QTabWidget(widget_4);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1651, 891));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        userDataTableView = new QTableView(tab);
        userDataTableView->setObjectName(QString::fromUtf8("userDataTableView"));
        userDataTableView->setGeometry(QRect(0, 0, 1451, 771));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        bookDataTableView = new QTableView(tab_2);
        bookDataTableView->setObjectName(QString::fromUtf8("bookDataTableView"));
        bookDataTableView->setGeometry(QRect(0, 0, 1371, 781));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        countTableView = new QTableView(tab_3);
        countTableView->setObjectName(QString::fromUtf8("countTableView"));
        countTableView->setGeometry(QRect(0, 0, 1511, 841));
        drawPaint = new QCustomPlot(tab_3);
        drawPaint->setObjectName(QString::fromUtf8("drawPaint"));
        drawPaint->setGeometry(QRect(110, 10, 1011, 661));
        tabWidget->addTab(tab_3, QString());
        Adiminster->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Adiminster);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1420, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        Adiminster->setMenuBar(menubar);
        statusbar = new QStatusBar(Adiminster);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Adiminster->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menu->addAction(actionaddUser);
        menu->addAction(actionsearchUser);
        menu->addAction(action);
        menu->addAction(patchAppendUser_action);
        menu_2->addAction(actionaddBook);
        menu_2->addAction(actionsearchBook);
        menu_2->addAction(batchAppendBook_action);
        menu_3->addAction(actionborrowBookRanking);
        menu_3->addAction(actionuserBorrowRanking);
        menu_3->addAction(actionuserCollegeRanking);
        menu_3->addAction(actionGenderReadingComparation);
        menu_3->addAction(action_2);
        menu_4->addAction(actionchangeAdmin);
        menu_4->addAction(actionchangeUser_2);
        menu_4->addAction(actionexit);

        retranslateUi(Adiminster);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Adiminster);
    } // setupUi

    void retranslateUi(QMainWindow *Adiminster)
    {
        Adiminster->setWindowTitle(QCoreApplication::translate("Adiminster", "MainWindow", nullptr));
        actionaddUser->setText(QCoreApplication::translate("Adiminster", "\345\242\236\345\212\240\347\224\250\346\210\267", nullptr));
        actionsearchUser->setText(QCoreApplication::translate("Adiminster", "\346\237\245\346\211\276\345\255\246\347\224\237", nullptr));
#if QT_CONFIG(tooltip)
        actionsearchUser->setToolTip(QCoreApplication::translate("Adiminster", "\346\237\245\346\211\276\345\255\246\347\224\237", nullptr));
#endif // QT_CONFIG(tooltip)
        actionaddBook->setText(QCoreApplication::translate("Adiminster", "\346\267\273\345\212\240\344\271\246\347\261\215", nullptr));
        actionsearchBook->setText(QCoreApplication::translate("Adiminster", "\346\237\245\346\211\276\344\271\246\347\261\215", nullptr));
        actionborrowBookRanking->setText(QCoreApplication::translate("Adiminster", "\345\200\237\351\230\205\346\200\273\346\216\222\350\241\214\346\246\234", nullptr));
        actionuserBorrowRanking->setText(QCoreApplication::translate("Adiminster", "\347\224\250\346\210\267\345\200\237\351\230\205\346\216\222\350\241\214\346\246\234", nullptr));
        actionuserCollegeRanking->setText(QCoreApplication::translate("Adiminster", "\345\255\246\351\231\242\345\200\237\351\230\205\346\216\222\350\241\214\346\246\234", nullptr));
        actionchangeAdmin->setText(QCoreApplication::translate("Adiminster", "\345\210\207\346\215\242\350\264\246\345\217\267", nullptr));
        actionchangeUser_2->setText(QCoreApplication::translate("Adiminster", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        actionexit->setText(QCoreApplication::translate("Adiminster", "\351\200\200\345\207\272", nullptr));
        actionGenderReadingComparation->setText(QCoreApplication::translate("Adiminster", "\347\224\267\345\245\263\351\230\205\350\257\273\351\207\217\345\257\271\346\257\224", nullptr));
        action->setText(QCoreApplication::translate("Adiminster", "\346\237\245\346\211\276\350\200\201\345\270\210", nullptr));
        action_2->setText(QCoreApplication::translate("Adiminster", "\345\233\276\347\211\207\345\257\274\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_2->setToolTip(QCoreApplication::translate("Adiminster", "image_output", nullptr));
#endif // QT_CONFIG(tooltip)
        batchAppendBook_action->setText(QCoreApplication::translate("Adiminster", "\346\211\271\351\207\217\350\277\275\345\212\240\344\271\246\347\261\215", nullptr));
        patchAppendUser_action->setText(QCoreApplication::translate("Adiminster", "\346\211\271\351\207\217\350\277\275\345\212\240\347\224\250\346\210\267", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Adiminster", "\347\224\250\346\210\267\347\225\214\351\235\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Adiminster", "\345\233\276\344\271\246\347\225\214\351\235\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Adiminster", "\347\273\237\350\256\241\347\225\214\351\235\242", nullptr));
        menu->setTitle(QCoreApplication::translate("Adiminster", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        menu_2->setTitle(QCoreApplication::translate("Adiminster", "\345\233\276\344\271\246\347\256\241\347\220\206", nullptr));
        menu_3->setTitle(QCoreApplication::translate("Adiminster", "\347\273\237\350\256\241", nullptr));
        menu_4->setTitle(QCoreApplication::translate("Adiminster", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adiminster: public Ui_Adiminster {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADIMINSTER_H
