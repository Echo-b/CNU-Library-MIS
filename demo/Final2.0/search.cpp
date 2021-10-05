#include "search.h"
#include "ui_search.h"

Search::Search(QWidget *parent) : QDialog(parent),
                                  ui(new Ui::Search)
{
    ui->setupUi(this);
    this->setWindowTitle("CNU图书借阅MIS");
    this->setWindowIcon(QIcon(":/image/CNUlibrary.jpg"));
    QPalette PAllbackground1 = this->palette();
    QPixmap ImgAllbackground1(":/image/background.png");
    PAllbackground1.setBrush(QPalette::Window, QBrush(ImgAllbackground1));
    this->setPalette(PAllbackground1);
}

UserPerson *Search::getUser()
{
    return user;
}
void Search::initUserValue()
{
    this->user = new UserPerson();
    user->setID(QString(ui->ID->text()).toUtf8().toStdString());  //设置ID
    user->setName(QString(ui->name->text()).toStdString());     //设置姓名
    user->setGender(QString(ui->gender->text()).toUtf8().toStdString());    //设置性别
    user->setCollege(QString(ui->college->text()).toUtf8().toStdString());         //设置学院
    user->setTelphoneNum(QString(ui->telphoneNum->text()).toUtf8().toStdString());     //设置电话号码
//    user->setborrowBook(QString(ui->borrowedBook->text()).toUtf8().toStdString());     //设置借出书籍
//    user->setborrowRecord(QString(ui->borrowRecord->text()).toUtf8().toStdString());   //设置借阅记录

}

Search::~Search()
{
    delete ui;
}


void Search::on_pushButton_2_clicked()
{
    this->initUserValue();
    //qDebug() << publishData;
    Search::reject();
}


