#ifndef SEARCHBOOK_H
#define SEARCHBOOK_H

#include "book.h"
#include <QDialog>
#include <QIcon>
namespace Ui
{
    class SearchBook;
}

class SearchBook : public QDialog
{
    Q_OBJECT

public:
    explicit SearchBook(QWidget *parent = nullptr);
    Book *getBook();
    void initBookValue();
    ~SearchBook();

private:
    Ui::SearchBook *ui;
    Book *book;
private slots:
    void on_pushButton_clicked();
};

#endif // SEARCHBOOK_H
