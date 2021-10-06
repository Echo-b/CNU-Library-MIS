#ifndef ADDUSER_H
#define ADDUSER_H

#include <QDialog>
#include <QIcon>
#include <QCloseEvent>
#include "user.h"
#include "UserPerson.h"
#include "Student.h"
#include "Teacher.h"
namespace Ui
{
    class AddUser;
}

class AddUser : public QDialog
{
    Q_OBJECT

public:
    explicit AddUser(QWidget *parent = nullptr);
    Student *getStu();
    void initStuValue(int flag=0);
    Teacher *getTea();
    void initTeaValue(int flag=0);
    void closeEvent(QCloseEvent *event);
    ~AddUser();
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddUser *ui;
    Student *stu;
    Teacher* tea;
};

#endif // ADDUSER_H
