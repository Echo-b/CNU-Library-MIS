#ifndef USER_H
#define USER_H

#include <QMainWindow>
#include "book.h"
#include <QTableView>
#include <QDebug>
#include <QPushButton>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QMessageBox>
#include "UserTable.h"
#include "UserPerson.h"
#include "mainwindow.h"
#include <QDateTime>
#include "userchangepassword.h"

namespace Ui {
class User;
}

class User : public QMainWindow
{
    Q_OBJECT

public:
    explicit User(UserTable *PTable = NULL, QWidget *parent = NULL);
    void init();
    void showDateTable();
    void layData(vector <Book*>booklist,QTableView *view,int flag=0);
    void layReservationData(vector <Book*>booklist,QTableView *view,int flag=0);
    void borrowBook(QTableView *view);
    void giveBackBook(QTableView *view);
    void reserveBook(QTableView *view);
    void delReserveBook(QTableView *view);
    void searchRestart(vector <Book*>currentBorrowBook,QTableView *view);
    ~User();

private slots:
    void on_actionBorrowTotalBook_triggered();

    void on_actionchangeID_triggered();

    void on_actionexit_triggered();

    void on_actionNewReading_triggered();

    void on_actionTotalBorrowBookRecord_triggered();

    void on_actionchangePassword_triggered();

    void on_reservation_triggered();

//    void on_reservationList_triggered();

private:
    Ui::User *ui;
    BookTable *bookTable;
    vector <Book*>booklist;
    Book *book;
    UserTable *usertable;
    UserPerson *userperson;

//    vector <Student*>stulist;

};

#endif // USER_H
