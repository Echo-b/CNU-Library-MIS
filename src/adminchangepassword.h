#ifndef ADMINCHANGEPASSWORD_H
#define ADMINCHANGEPASSWORD_H

#include <QDialog>
#include "mainwindow.h"
#include "AdiminsterePerson.h"

namespace Ui {
class adminChangePassword;
}

class adminChangePassword : public QDialog
{
    Q_OBJECT

public:
    explicit adminChangePassword(QWidget *parent = nullptr);
    ~adminChangePassword();
    void initAccount();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::adminChangePassword *ui;
    Account_group adminGroup;
    Account_Password *account;
};

#endif // ADMINCHANGEPASSWORD_H
