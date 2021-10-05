#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <adiminster.h>
#include <QMessageBox>
#include "accountPasswordClass.h"
#include "UserPerson.h"
#include "AdiminsterePerson.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow;}
QT_END_NAMESPACE

class MainWindow : public QDialog
{
    Q_OBJECT
private:
    Ui::MainWindow *ui;
    Account_Password *people;
    UserPerson *newpeople;
    Account_group adminGroup;
    AdiminTable adminlist;
    UserTable userlist;

public:
    MainWindow(QWidget *parent = nullptr);
    void initNewpeopleValue();
    void initPeopleValue();
    ~MainWindow();
private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};
#endif // MAINWINDOW_H
