#include "userchangepassword.h"
#include "ui_userchangepassword.h"
#include <QMessageBox>

UserChangePassword::UserChangePassword(UserTable *PTable, QWidget *parent) : QDialog(parent),
                                                                             ui(new Ui::UserChangePassword)
{
    ui->setupUi(this);
    this->setWindowTitle("CNU图书借阅MIS");
    this->setWindowIcon(QIcon(":/image/CNUlibrary.jpg"));
    QPalette PAllbackground2 = this->palette();
    QPixmap ImgAllbackground2(":/image/background.png");
    PAllbackground2.setBrush(QPalette::Window, QBrush(ImgAllbackground2));
    this->setPalette(PAllbackground2);
    this->usertable = PTable;
}

UserChangePassword::~UserChangePassword()
{
    delete ui;
}

void UserChangePassword::on_pushButton_2_clicked()
{
    if (ui->newPassword->text() == ui->renewPassword->text())
    { //设置新密码
        usertable->modifyPassword(QString(ui->newPassword->text()).toUtf8().toStdString());
        QMessageBox message(QMessageBox::Information, "提示", "修改成功！");
        QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
        message.setWindowIcon(*icon);
        message.exec();
        usertable->getStudentAccount()->write_file("stuAccount.txt");
        usertable->getTeacherAccount()->write_file("teaAccount.txt");
    }
    else if (QString(ui->newPassword->text()).toUtf8().toStdString() == "")
    { // 未输入新密码
        QMessageBox message(QMessageBox::Critical, "提示", "未输入新密码！");
        QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
        message.setWindowIcon(*icon);
        message.exec();
    }
    else if (QString(ui->renewPassword->text()).toUtf8().toStdString() == "")
    { // 未输入确认密码
        QMessageBox message(QMessageBox::Critical, "提示", "未再次输入密码确认！");
        QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
        message.setWindowIcon(*icon);
        message.exec();
    }
    else
    { // 新密码与确认密码不匹配
        QMessageBox message(QMessageBox::Critical, "提示", "两次输入密码不匹配！");
        QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
        message.setWindowIcon(*icon);
        message.exec();
    }
}
