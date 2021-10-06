#include "addbook.h"
#include "ui_addbook.h"
#include <QDebug>
#include <QString>
#include <QCloseEvent>
//#include <QAction>
addBook::addBook(QWidget *parent) : QDialog(parent),
                                    ui(new Ui::addBook)
{
    ui->setupUi(this);
    this->setWindowTitle("CNU图书借阅MIS");
    this->setWindowIcon(QIcon(":/image/CNUlibrary.jpg"));
    QPalette PAllbackground = this->palette();
    QPixmap ImgAllbackground(":/image/background.png");
    PAllbackground.setBrush(QPalette::Window, QBrush(ImgAllbackground));
    this->setPalette(PAllbackground);
}
Book *addBook::getBook()
{
    return book;
}
void addBook::initBookValue(int flag)
{
    this->book = new Book();
    if(flag==0){
        book->setISBN(QString(ui->ISBN->text()).toUtf8().toStdString());                   //设置书籍号
        book->setBookName(QString(ui->bookName->text()).toUtf8().toStdString());           //设置书名
        book->setBookWriter(QString(ui->bookWriter->text()).toUtf8().toStdString());       //设置书作者
        book->setBookPress(QString(ui->bookPress->text()).toUtf8().toStdString());         //设置出版社
        book->setBookTotalNum(QString(ui->bookTotalNum->text()).toInt());         //设置书籍数目
        book->setBookBorrowOutNum(QString(ui->bookBorrowOutNum->text()).toInt()); //设置借出数目
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
        book->setISBN("*");                   //设置书籍号
    }
}
addBook::~addBook()
{
    delete ui;
    delete book;
}

void addBook::closeEvent(QCloseEvent *event){
    this->initBookValue(1);
    event->accept();
}
void addBook::on_pushButton_2_clicked()
{
    this->initBookValue();
    QString str = QString(ui->bookPublishDate->text());
    QStringList publishData = str.split("/");
    qDebug() << publishData;
    addBook::reject();
}

void addBook::on_bookPublishDate_dateChanged(const QDate &date)
{
    qDebug()<<date;
    ui->bookPublishDate->setDate(QDate::currentDate());
    ui->bookPublishDate->setCalendarPopup(true);
}

void addBook::on_pushButton_3_clicked()
{
    this->initBookValue(1);
    this->close();
}
