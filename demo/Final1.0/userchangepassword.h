#ifndef USERCHANGEPASSWORD_H
#define USERCHANGEPASSWORD_H

#include <QDialog>
#include "UserTable.h"
#include "accountPasswordClass.h"

namespace Ui {
class UserChangePassword;
}

class UserChangePassword : public QDialog
{
    Q_OBJECT

public:
    explicit UserChangePassword(UserTable *PTable = NULL,QWidget *parent = nullptr);
    ~UserChangePassword();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::UserChangePassword *ui;
    UserTable *usertable;
};

#endif // USERCHANGEPASSWORD_H
