#include "mainwindow.h"
#include "search.h"
#include <QApplication>
#include "adduser.h"
#include "user.h"
#include "addbook.h"
#include "searchbook.h"
#include "adminchangepassword.h"
int Student::stuEnableBorrowNum=12;
int Teacher::teaEnableBorrowNum=20;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //主登录界面
    MainWindow w;

    w.show();

    qDebug()<<"main()test alloc";
    //管理员登录界面
//    Adiminster *ad = new Adiminster();

//    ad->show();

//    adminChangePassword *adminchangePassword=new adminChangePassword();
//    adminchangePassword->show();
//    //用户登录界面
//    User *user = new User();
//    user->show();

//    //查找用户界面
//    Search *search = new Search();
//    search->show();

//    //增加用户界面
//    AddUser *add = new AddUser();
//    add->show();

//    //删除用户界面
//    deleteUser *del=new deleteUser();
//    del->show();

    //添加书籍界面
//    addBook *book = new addBook();
//    book->show();

    //查找书籍界面
//    SearchBook *sb = new SearchBook();
//    sb->show();
    //查找书籍界面
    return a.exec();
}
