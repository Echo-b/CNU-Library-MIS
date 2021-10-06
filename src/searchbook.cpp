#include "searchbook.h"
#include "ui_searchbook.h"
#include <QDebug>
#include <QString>

SearchBook::SearchBook(QWidget *parent) : QDialog(parent),
                                          ui(new Ui::SearchBook)
{
    ui->setupUi(this);
    this->setWindowTitle("CNU图书借阅MIS");
    this->setWindowIcon(QIcon(":/image/CNUlibrary.jpg"));
    QPalette PAllbackground = this->palette();
    QPixmap ImgAllbackground(":/image/background.png");
    PAllbackground.setBrush(QPalette::Window, QBrush(ImgAllbackground));
    this->setPalette(PAllbackground);
}

Book *SearchBook::getBook()
{
    return book;
}
void SearchBook::initBookValue(int flag)
{
    this->book = new Book();
    if(flag==0){
        book->setISBN(QString(ui->ISBN->text()).toUtf8().toStdString());                   //设置书籍号
        book->setBookName(QString(ui->bookName->text()).toStdString());           //设置书名
        book->setBookWriter(QString(ui->bookWriter->text()).toUtf8().toStdString());       //设置书作者
        book->setBookPress(QString(ui->bookPress->text()).toUtf8().toStdString());         //设置出版社
        //book->setBookType(QString(ui->bookType->text()).toStdString());         //设置出版社
        QString str = QString(ui->bookPublishDate->text());
        if(str!=""){
            QStringList publishData = str.split("/");
            qDebug() << publishData;
            book->setBookYear(QString(publishData[0]).toStdString()); //设置出版日期
            book->setBookMonth(QString(publishData[1]).toStdString());
            book->setBookDay(QString(publishData[2]).toStdString());
        }
    }
    else{
         book->setISBN("*");
    }
}


SearchBook::~SearchBook()
{
    delete ui;
}

void SearchBook::closeEvent(QCloseEvent *event){
    this->initBookValue(1);
    event->accept();
}
void SearchBook::on_pushButton_clicked()
{
    this->initBookValue();
    QString str = QString(ui->bookPublishDate->text());
    QStringList publishData = str.split("/");
    qDebug() << publishData;
    SearchBook::reject();
}

void SearchBook::on_pushButton_2_clicked()
{
    this->initBookValue(1);
    this->close();
}
