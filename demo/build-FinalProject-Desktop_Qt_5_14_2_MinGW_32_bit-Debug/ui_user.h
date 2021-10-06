/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QAction *actionborrowBook;
    QAction *actionchangeID;
    QAction *actionchangePassword;
    QAction *actionexit;
    QAction *actionBorrowTotalBook;
    QAction *actionTotalBorrowBookRecord;
    QAction *actionNewReading;
    QAction *reservationList;
    QAction *reservation;
    QWidget *centralwidget;
    QTableView *bookDataView;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName(QString::fromUtf8("User"));
        User->resize(1177, 783);
        actionborrowBook = new QAction(User);
        actionborrowBook->setObjectName(QString::fromUtf8("actionborrowBook"));
        actionchangeID = new QAction(User);
        actionchangeID->setObjectName(QString::fromUtf8("actionchangeID"));
        actionchangePassword = new QAction(User);
        actionchangePassword->setObjectName(QString::fromUtf8("actionchangePassword"));
        actionexit = new QAction(User);
        actionexit->setObjectName(QString::fromUtf8("actionexit"));
        actionBorrowTotalBook = new QAction(User);
        actionBorrowTotalBook->setObjectName(QString::fromUtf8("actionBorrowTotalBook"));
        actionTotalBorrowBookRecord = new QAction(User);
        actionTotalBorrowBookRecord->setObjectName(QString::fromUtf8("actionTotalBorrowBookRecord"));
        actionNewReading = new QAction(User);
        actionNewReading->setObjectName(QString::fromUtf8("actionNewReading"));
        reservationList = new QAction(User);
        reservationList->setObjectName(QString::fromUtf8("reservationList"));
        reservation = new QAction(User);
        reservation->setObjectName(QString::fromUtf8("reservation"));
        centralwidget = new QWidget(User);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        bookDataView = new QTableView(centralwidget);
        bookDataView->setObjectName(QString::fromUtf8("bookDataView"));
        bookDataView->setGeometry(QRect(10, 0, 1311, 761));
        User->setCentralWidget(centralwidget);
        menubar = new QMenuBar(User);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1177, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        User->setMenuBar(menubar);
        statusbar = new QStatusBar(User);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        User->setStatusBar(statusbar);

        menubar->addAction(menu_5->menuAction());
        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menu->addAction(actionborrowBook);
        menu->addSeparator();
        menu->addAction(reservation);
        menu_3->addAction(actionBorrowTotalBook);
        menu_3->addAction(actionTotalBorrowBookRecord);
        menu_4->addAction(actionchangeID);
        menu_4->addAction(actionchangePassword);
        menu_4->addAction(actionexit);
        menu_5->addAction(actionNewReading);

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QMainWindow *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "MainWindow", nullptr));
        actionborrowBook->setText(QCoreApplication::translate("User", "\345\200\237\344\271\246", nullptr));
        actionchangeID->setText(QCoreApplication::translate("User", "\345\210\207\346\215\242\350\264\246\345\217\267", nullptr));
        actionchangePassword->setText(QCoreApplication::translate("User", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        actionexit->setText(QCoreApplication::translate("User", "\351\200\200\345\207\272", nullptr));
        actionBorrowTotalBook->setText(QCoreApplication::translate("User", "\345\275\223\345\211\215\345\267\262\345\200\237", nullptr));
        actionTotalBorrowBookRecord->setText(QCoreApplication::translate("User", "\345\205\250\351\203\250\350\256\260\345\275\225", nullptr));
        actionNewReading->setText(QCoreApplication::translate("User", "\346\226\260\344\271\246\345\257\274\350\257\273", nullptr));
        reservationList->setText(QCoreApplication::translate("User", "\351\242\204\347\272\246\345\210\227\350\241\250", nullptr));
        reservation->setText(QCoreApplication::translate("User", "\351\242\204\347\272\246", nullptr));
        menu->setTitle(QCoreApplication::translate("User", "\345\200\237\344\271\246", nullptr));
        menu_3->setTitle(QCoreApplication::translate("User", "\345\200\237\344\271\246\350\256\260\345\275\225", nullptr));
        menu_4->setTitle(QCoreApplication::translate("User", "\350\256\276\347\275\256", nullptr));
        menu_5->setTitle(QCoreApplication::translate("User", "\346\226\260\344\271\246\345\257\274\350\257\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
