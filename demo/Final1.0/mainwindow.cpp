#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "user.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QDialog(parent), ui(new Ui::MainWindow)
{
    //登录界面
    ui->setupUi(this);
    this->setWindowTitle("CNU图书借阅MIS");
    this->setWindowIcon(QIcon(":/image/CNUlibrary.jpg"));

    QPalette PAllbackground = this->palette();
    QPixmap ImgAllbackground(":/image/background.png");
    PAllbackground.setBrush(QPalette::Window, QBrush(ImgAllbackground));
    this->setPalette(PAllbackground);
    QStringList QList;
    QList.clear();
    QList << tr("计算机科学与技术") << tr("文学") << tr("美术") << tr("马院") << tr("数科") << tr("物理") << tr("化学") << tr("历史") << tr("教育学院") << tr("心理");
    ui->comboBox->clear();
    ui->comboBox->addItems(QList);
}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::initPeopleValue()
{
    this->people = new Account_Password();
    people->setAccount(QString(ui->ID->text()).toUtf8().toStdString());        //设置账号
    people->setPassword(QString(ui->password->text()).toUtf8().toStdString()); //设置密码
}

void MainWindow::initNewpeopleValue()
{
    this->people = new Account_Password();
    people->setAccount(QString(ui->ID_2->text()).toUtf8().toStdString());        //设置账号
    people->setPassword(QString(ui->password_2->text()).toUtf8().toStdString()); //设置密码
    this->newpeople = new UserPerson();
    newpeople->setID(QString(ui->ID_2->text()).toUtf8().toStdString());
    newpeople->setName(QString(ui->name->text()).toUtf8().toStdString());
    if (ui->radioButtonmale->isChecked() == true)
        newpeople->setGender("男");
    if (ui->radioButtonfemale->isChecked() == true)
        newpeople->setGender("女");
    newpeople->setCollege(ui->comboBox->currentText().toUtf8().toStdString());
    newpeople->setClassID(QString(ui->classID->text()).toUtf8().toStdString());
    //    newpeople->setborrowBook("");
    newpeople->setTelphoneNum(QString(ui->telphoneNum->text()).toUtf8().toStdString());
    //    newpeople->setborrowRecord("");
}
void MainWindow::on_pushButton_2_clicked() //注册
{
    initNewpeopleValue();
    qDebug() << people->getAccount().data();
    qDebug() << people->getPassword().data();
    qDebug() << newpeople->getID().data();
    qDebug() << newpeople->getTel().data();
    qDebug() << newpeople->getName().data();
    qDebug() << newpeople->getGender().data();
    qDebug() << newpeople->getCollege().data();
    qDebug() << newpeople->getClassID().data();
    if (newpeople->getID() != "" && people->getPassword() != "" && newpeople->getTel() != "" && newpeople->getName() != "" && newpeople->getGender() != "" && newpeople->getCollege() != "" && newpeople->getClassID() != "")
    {
        //        if(ui->checkBoxAdmin_2->isChecked()==true){
        //            adminGroup.add(people->getAccount(),people->getPassword());
        //            AdiminsterPerson admin(newpeople->getID(), newpeople->getName(), newpeople->getGender(), newpeople->getTel());
        //            adminlist.addAdmin(admin);
        //            QMessageBox message(QMessageBox::Information, "提示","<font color=' black'>注册成功！</font>");
        //            QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
        //            message.setWindowIcon(*icon);
        //            message.exec();
        //            adminlist.writeFile("admin.txt");
        //        }
        if (ui->checkBoxTea_2->isChecked() == true)
        {
            Teacher t;
            t.setID(newpeople->getID());
            t.setName(newpeople->getName());
            t.setGender(newpeople->getGender());
            t.setCollege(newpeople->getCollege());
            t.setClassID(newpeople->getClassID());
            t.setTelphoneNum(newpeople->getTel());

            if (userlist.addTeacher(t))
            {
                //                QMessageBox::information(this,"注册","注册成功");
                qDebug() << "teacherTable[167] addr: ";
                qDebug() << userlist.getStudentTable()[167];
                userlist.getTeacherAccount()->add(people->getAccount(), people->getPassword());
                QMessageBox message(QMessageBox::Information, "提示", "<font color=' black'>注册成功！</font>");
                QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
                message.setWindowIcon(*icon);
                message.exec();
                userlist.writeFile("student.txt", "teacher.txt");
            }
            else
            {
                QMessageBox message(QMessageBox::Critical, "提示", "<font color=' black'>该用户已存在！</font>");
                QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
                message.setWindowIcon(*icon);
                message.exec();
            }
        }
        else if (ui->checkBoxStu_2->isChecked() == true)
        {
            Student s;
            s.setID(newpeople->getID());
            s.setName(newpeople->getName());
            s.setGender(newpeople->getGender());
            s.setCollege(newpeople->getCollege());
            s.setClassID(newpeople->getClassID());
            s.setTelphoneNum(newpeople->getTel());
            //            qDebug()<<userlist.addStudent(s);
            if (userlist.addStudent(s))
            {
                userlist.getStudentAccount()->add(people->getAccount(), people->getPassword());
                QMessageBox message(QMessageBox::Information, "提示", "<font color=' black'>注册成功！</font>");
                QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
                message.setWindowIcon(*icon);
                message.exec();
                userlist.writeFile("student.txt", "teacher.txt");
            }
            else
            {
                QMessageBox message(QMessageBox::Critical, "提示", "<font color=' black'>该用户已存在！</font>");
                QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
                message.setWindowIcon(*icon);
                message.exec();
            }
        }
    }
    else if (people->getAccount() == "" || people->getPassword() == "" || newpeople->getTel() == "" || newpeople->getName() == "" || newpeople->getGender() == "" || newpeople->getCollege() == "" || newpeople->getClassID() == "")
    {
        QMessageBox message(QMessageBox::Critical, "提示", "<font color=' black'>未完整填写信息！</font>");
        QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
        message.setWindowIcon(*icon);
        message.exec();
    }
    else
    {
        QMessageBox message(QMessageBox::Critical, "提示", "<font color=' black'>未勾选身份！</font>");
        QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
        message.setWindowIcon(*icon);
        message.exec();
    }
}

void MainWindow::on_pushButton_clicked() //登录
{
    initPeopleValue();
    if (ui->checkBoxAdmin->isChecked() == true)
    {
        adminGroup.read_file("adminAccount.txt");
        if (adminGroup.logIn(people->getAccount(), people->getPassword()))
        {
            QMessageBox message(QMessageBox::Information, "提示", "<font color=' black'>登录成功！</font>");
            QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
            message.setWindowIcon(*icon);
            message.exec();
            MainWindow::reject();
            Adiminster *ad = new Adiminster();
            ad->show();
            //            ad->~Adiminster();
        }
        else
        {
            QMessageBox message(QMessageBox::Critical, "提示", "<font color=' black'>账号或密码错误！</font>");
            QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
            message.setWindowIcon(*icon);
            message.exec();
        }
    }

    else if (ui->checkBoxTea->isChecked() == true)
    {
        if (userlist.logIn(people->getAccount(), people->getPassword(), 2))
        {
            QMessageBox message(QMessageBox::Information, "提示", "<font color=' black'>登录成功！</font>");
            QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
            message.setWindowIcon(*icon);
            message.exec();
            MainWindow::reject();
            this->~MainWindow();
            User *user = new User(&this->userlist);
            user->show();
        }
        else
        {
            QMessageBox message(QMessageBox::Critical, "提示", "<font color=' black'>账号或密码错误！</font>");
            QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
            message.setWindowIcon(*icon);
            message.exec();
        }
    }
    else if (ui->checkBoxStu->isChecked() == true)
    {
        if (userlist.logIn(people->getAccount(), people->getPassword(), 1))
        {
            QMessageBox message(QMessageBox::Information, "提示", "<font color=' black'>登录成功！</font>");
            QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
            message.setWindowIcon(*icon);
            message.exec();
            MainWindow::reject();
            User *user = new User(&this->userlist);
            user->show();
        }
        else
        {
            QMessageBox message(QMessageBox::Critical, "提示", "<font color=' black'>账号或密码错误！</font>");
            QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
            message.setWindowIcon(*icon);
            message.exec();
        }
    }
    else if (people->getAccount() == "" || people->getPassword() == "")
    {
        QMessageBox message(QMessageBox::Critical, "提示", "<font color=' black'>未完整填写信息！</font>");
        QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
        message.setWindowIcon(*icon);
        message.exec();
    }
    else
    {
        QMessageBox message(QMessageBox::Critical, "提示", "<font color=' black'>未勾选身份！</font>");
        QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
        message.setWindowIcon(*icon);
        message.exec();
    }
}
