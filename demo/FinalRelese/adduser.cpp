#include "adduser.h"
#include "ui_adduser.h"
AddUser::AddUser(QWidget *parent) : QDialog(parent),
                                    ui(new Ui::AddUser)
{
    ui->setupUi(this);
    this->setWindowTitle("CNU图书借阅MIS");
    this->setWindowIcon(QIcon(":/image/CNUlibrary.jpg"));
    QPalette PAllbackground1 = this->palette();
    QPixmap ImgAllbackground1(":/image/background.png");
    PAllbackground1.setBrush(QPalette::Window, QBrush(ImgAllbackground1));
    this->setPalette(PAllbackground1);
}
Student *AddUser::getStu()
{
    return stu;
}
void AddUser::initStuValue(int flag)
{
    this->stu = new Student();
    if(flag==0){
        stu->setID(QString(ui->ID->text()).toUtf8().toStdString());                   //设置账号
        stu->setName(QString(ui->name->text()).toUtf8().toStdString());           //设置姓名
        stu->setGender(QString(ui->gender->text()).toUtf8().toStdString());       //设置性别
        stu->setCollege(QString(ui->college->text()).toUtf8().toStdString());         //设置学院
        stu->setTelphoneNum(QString(ui->telphoneNum->text()).toStdString());         //设置手机号码
        stu->setClassID(ui->classID->text().toUtf8().toStdString());
    }
    else{
        stu->setID("*");
    }
}
Teacher *AddUser::getTea()
{
    return tea;
}
void AddUser::initTeaValue(int flag)
{
    this->tea = new Teacher();
    if(flag==0){
        tea->setID(QString(ui->ID->text()).toUtf8().toStdString());                   //设置账号
        tea->setName(QString(ui->name->text()).toUtf8().toStdString());           //设置姓名
        tea->setGender(QString(ui->gender->text()).toUtf8().toStdString());       //设置性别
        tea->setCollege(QString(ui->college->text()).toUtf8().toStdString());         //设置学院
        tea->setTelphoneNum(QString(ui->telphoneNum->text()).toStdString());         //设置手机号码
        tea->setClassID(ui->classID->text().toUtf8().toStdString());
    }
    else{
        tea->setID("*");
    }
}

AddUser::~AddUser()
{
    delete ui;
    delete stu;
    delete tea;
}

void AddUser::closeEvent(QCloseEvent *event){
    this->initStuValue(1);
    this->initTeaValue(1);
    event->accept();
}
void AddUser::on_pushButton_2_clicked()
{
    this->initStuValue();
    this->initTeaValue();
    AddUser::reject();
}

void AddUser::on_pushButton_clicked()
{
    this->initStuValue(1);
    this->initTeaValue(1);
    this->close();
}
