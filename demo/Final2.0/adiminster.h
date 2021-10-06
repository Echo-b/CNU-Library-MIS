#ifndef ADIMINSTER_H
#define ADIMINSTER_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QString>
#include <QPushButton>
#include "book.h"
#include <vector>
#include "addbook.h"
#include <QDialog>
#include <QAction>
#include <QInputDialog>
#include <QTableView>
#include <QFileDialog>
#include <QDebug>
#include "searchbook.h"
#include "adduser.h"
#include "UserTable.h"
#include "Student.h"
#include "Teacher.h"
#include "search.h"
#include "UserPerson.h"
#include "ReadOnlyDelegate.h"
#include "paint.h"
#include "adminchangepassword.h"
namespace Ui {
class Adiminster;
}

class Adiminster : public QMainWindow
{
    Q_OBJECT

public:
    explicit Adiminster(QWidget *parent = nullptr);
    void showDateTable();
    void showUserDataTable();
    void del(int viewIndex);
    void addNewBook();
    void addNewUser();
    void modifyBook();
    void modifyUser();
    void searchBook();
    void searchStu();
    void searchTea();
    void init();
    void clearPlot(QCustomPlot *cus);
    template<typename T>
    void layData(vector<T*> booklist,QTableView *view,int flag=0);
    void layUserData(vector <Student*>userlist,QTableView *view);
    void layUserData(vector <Teacher*>userlist,QTableView *view);
    void showBook(int flag);

    ~Adiminster();

private slots:
    void on_actionaddUser_triggered();

    void on_actionaddBook_triggered();

    void on_actionsearchBook_triggered();

    void on_actionsearchUser_triggered();

    void on_actionexit_triggered();

    void on_drawBtn_clicked();

    void on_actionchangeAdmin_triggered();

    void on_actionborrowBookRanking_triggered();

    void on_actionuserBorrowRanking_triggered();

    void on_actionuserCollegeRanking_triggered();

    void on_actionGenderReadingComparation_triggered();

    void on_actionchangeUser_2_triggered();

    void on_action_triggered();

    void on_action_2_triggered();

    void on_batchAppendBook_action_triggered();

    void on_patchAppendUser_action_triggered();

private:
    Ui::Adiminster *ui;
    BookTable *bookTable;
    vector <Book*>booklist;
    Book *book;
    UserTable *usertable;
    UserPerson *userperson;
    Student *stu;
    Teacher *tea;
    vector <Student*>stulist;
    vector <Teacher*>tealist;

                                                                                                                                                                                                                                                                                                                                                                Adiminster *admin;    //使用的变量定义
};

#endif // ADIMINSTER_H
