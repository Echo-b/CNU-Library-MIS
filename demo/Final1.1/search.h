#ifndef SEARCH_H
#define SEARCH_H

#include <QDialog>
#include <QIcon>
#include "UserPerson.h"
namespace Ui
{
    class Search;
}

class Search : public QDialog
{
    Q_OBJECT

public:
    explicit Search(QWidget *parent = nullptr);
    UserPerson *getUser();
       void initUserValue();
    ~Search();

private:
    Ui::Search *ui;
    UserPerson *user;
  private slots:
    void on_pushButton_2_clicked();
};

#endif // SEARCH_H
