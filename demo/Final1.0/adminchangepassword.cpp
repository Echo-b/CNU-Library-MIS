#include "adminchangepassword.h"
#include "ui_adminchangepassword.h"

adminChangePassword::adminChangePassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminChangePassword)
{
    ui->setupUi(this);
    this->setWindowTitle("CNU图书借阅MIS");
    this->setWindowIcon(QIcon(":/image/CNUlibrary.jpg"));
    QPalette PAllbackground = this->palette();
    QPixmap ImgAllbackground(":/image/background.png");
    PAllbackground.setBrush(QPalette::Window, QBrush(ImgAllbackground));
    this->setPalette(PAllbackground);
}

adminChangePassword::~adminChangePassword()
{
    delete ui;
}

void adminChangePassword::initAccount(){
    this->account = new Account_Password();
    account->setAccount(QString(ui->ID->text()).toUtf8().toStdString());                  //设置账号
    account->setPassword(QString(ui->newPassword->text()).toUtf8().toStdString());        //设置新密码
}

void adminChangePassword::on_pushButton_2_clicked()
{
    initAccount();
    adminGroup.read_file("adminAccount.txt");
    if(adminGroup.Modify(account->getAccount(),account->getPassword())){
        adminGroup.write_file("adminAccount.txt");
        QMessageBox message(QMessageBox::Information, "提示","<font color=' black'>修改成功！</font>");
        QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
        message.setWindowIcon(*icon);
        message.exec();
    }
    else{
        QMessageBox message(QMessageBox::Critical, "提示","<font color=' black'>账号错误！</font>");
        QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
        message.setWindowIcon(*icon);
        message.exec();
    }

}
