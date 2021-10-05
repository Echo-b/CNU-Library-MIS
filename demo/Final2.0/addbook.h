#ifndef ADDBOOK_H
#define ADDBOOK_H

#include "book.h"
#include <QDialog>
namespace Ui
{
    class addBook;
}

class addBook : public QDialog
{
    Q_OBJECT

public:
    explicit addBook(QWidget *parent = nullptr);
    Book *getBook();
    void initBookValue();
    ~addBook();

private slots:
    void on_pushButton_2_clicked();

    void on_bookPublishDate_dateChanged(const QDate &date);

private:
    Ui::addBook *ui;
    Book *book;
};

#endif // ADDBOOK_H
