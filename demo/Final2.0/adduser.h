#ifndef ADDUSER_H
#define ADDUSER_H

#include <QDialog>
#include <QIcon>
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
    void initStuValue();
    Teacher *getTea();
    void initTeaValue();
    ~AddUser();
private slots:
    void on_pushButton_2_clicked();

private:
    Ui::AddUser *ui;
    Student *stu;
    Teacher* tea;
};

#endif // ADDUSER_H
