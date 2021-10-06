#include "adiminster.h"
#include "ui_adiminster.h"
#include "QMessageBox"


Adiminster::Adiminster(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Adiminster)
{
    ui->setupUi(this);
    QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
    this->setWindowIcon(*icon);
    this->setFixedSize(1273,900);
    this->setWindowTitle("管理员界面");
    init();
    showDateTable();

}
void Adiminster::init(){
    this->bookTable=new BookTable;
    if(bookTable->readFile("book.txt")){
        qDebug()<<"读取成功"<<endl;
        qDebug()<<bookTable->getBookTable().size();
        this->booklist= bookTable->getBookTable();
    }

    this->usertable=new UserTable();
    if(usertable->readFile("student.txt","teacher.txt")){
        if(usertable->getStudentTable().size()!=0){
            qDebug()<<"读取成功"<<endl;
            qDebug()<<usertable->getStudentTable().size();
            this->stulist= usertable->getStudentTable();
            this->tealist=usertable->getTeacherTable();
            }
    }

}
void Adiminster::layUserData(vector <Student*>userlist,QTableView *view){
    qDebug()<<"window size:"<<this->width()<<"****"<<this->height();
//    view->setFixedSize(1480,1000);
    QStandardItemModel *imodel=new QStandardItemModel(this);
    view->setModel(imodel);
    view->verticalHeader()->hide();
    view->horizontalHeader()->setStyleSheet("QHeaderView::section {"
                                            "color: black;padding-left: 4px;border: 1px solid #6c6c6c;}");
    QStringList headercontent;//设置表头
    headercontent<<"学号"<<"密码"<<"性别"<<"姓名"<<"院系"<<"班级编号"<<"手机号码"<<"数量"<<"借阅书籍"<<"数量"<<"借阅记录"<<"修改"<<"删除";
    imodel->setHorizontalHeaderLabels(headercontent);

    imodel->setColumnCount(13);

    imodel->setRowCount(userlist.size());
    for(unsigned int i =0;i<userlist.size();i++){//依次在相应位置放入数据
        imodel->setItem(i, 0, new QStandardItem(QString::fromUtf8(userlist[i]->getID().data())));
        imodel->setItem(i, 1, new QStandardItem(QString::fromUtf8(usertable->getStudentAccount()->getPassword(userlist[i]->getID()).data())));
        imodel->setItem(i, 2, new QStandardItem(QString::fromUtf8(userlist[i]->getGender().data())));
        imodel->setItem(i, 3, new QStandardItem(QString::fromUtf8(userlist[i]->getName().data())));
        imodel->setItem(i, 4, new QStandardItem(QString::fromUtf8(userlist[i]->getCollege().data())));
        imodel->setItem(i, 5, new QStandardItem(QString::fromUtf8(userlist[i]->getClassID().data())));
        imodel->setItem(i, 6, new QStandardItem(QString::fromUtf8(userlist[i]->getTel().data())));
        imodel->setItem(i, 7, new QStandardItem(QString::number(userlist[i]->getBorrowBook(*bookTable).size())));
        imodel->setItem(i, 9, new QStandardItem(QString::number(userlist[i]->getBorrowRecord(*bookTable).size())));

        QPushButton *showBrownBookBtn=new QPushButton(this);
        showBrownBookBtn->setText("查看");
        connect(showBrownBookBtn,&QPushButton::clicked,this,[=](){
            showBook(0);
        });

        QPushButton *showRecordBookBtn=new QPushButton(this);
        showRecordBookBtn->setText("查看");
        connect(showRecordBookBtn,&QPushButton::clicked,this,[=](){
//            showUserDataTable();
            showBook(1);//查看记录
        });

        QPushButton *modifyBtn=new QPushButton(this);
        modifyBtn->setText("修改");
        connect(modifyBtn,&QPushButton::clicked,this,[=](){
            if(modifyBtn->text()=="修改"){
                ui->bookDataTableView->setEditTriggers(QAbstractItemView::DoubleClicked);
                ReadOnlyDelegate* readOnlyDelegate = new ReadOnlyDelegate();
                view->setItemDelegateForColumn(7, readOnlyDelegate); //设置某列只读
//                view->setItemDelegateForColumn(8, readOnlyDelegate); //设置某列只读
                view->setItemDelegateForColumn(9, readOnlyDelegate); //设置某列只读
                modifyBtn->setText("确认修改");

            }
            else{
                modifyUser();
                QMessageBox::information(this,"修改","修改成功，已为你更新当前数据");
                showDateTable();
                modifyBtn->setText("修改");
            }
        });

        QPushButton *delBtn=new QPushButton("删除");
        connect(delBtn,&QPushButton::clicked,this,[=](){
             del(ui->tabWidget->currentIndex());
             showUserDataTable();
        });

        view->setIndexWidget(imodel->index(i, 8), showBrownBookBtn);
        view->setIndexWidget(imodel->index(i, 10), showRecordBookBtn);
        view->setIndexWidget(imodel->index(i, 11), modifyBtn);
        view->setIndexWidget(imodel->index(i, 12), delBtn);
    }
    view->setColumnWidth(1,60);
    view->setColumnWidth(2,70);
    view->setColumnWidth(3,130);
    view->setColumnWidth(6,60);
    view->setColumnWidth(8,60);
    view->setSortingEnabled(true);
}
void Adiminster::layUserData(vector <Teacher*>userlist,QTableView *view){
    qDebug()<<"window size:"<<this->width()<<"****"<<this->height();
//    view->setFixedSize(1480,1000);
    QStandardItemModel *imodel=new QStandardItemModel(this);
    view->setModel(imodel);
    view->verticalHeader()->hide();
    view->horizontalHeader()->setStyleSheet("QHeaderView::section {"
                                            "color: black;padding-left: 4px;border: 1px solid #6c6c6c;}");
    QStringList headercontent;//设置表头
    headercontent<<"学号"<<"密码"<<"性别"<<"姓名"<<"院系"<<"班级编号"<<"手机号码"<<"数量"<<"借阅书籍"<<"数量"<<"借阅记录"<<"修改"<<"删除";
    imodel->setHorizontalHeaderLabels(headercontent);

    imodel->setColumnCount(13);

    imodel->setRowCount(userlist.size());
    qDebug()<<usertable->getStudentAccount()->getGroups().size();
    for(unsigned int i =0;i<userlist.size();i++){//依次在相应位置放入数据
        imodel->setItem(i, 0, new QStandardItem(QString::fromUtf8(userlist[i]->getID().data())));
        imodel->setItem(i, 1, new QStandardItem(QString::fromUtf8(usertable->getStudentAccount()->getPassword(userlist[i]->getID()).data())));
        imodel->setItem(i, 2, new QStandardItem(QString::fromUtf8(userlist[i]->getGender().data())));
        imodel->setItem(i, 3, new QStandardItem(QString::fromUtf8(userlist[i]->getName().data())));
        imodel->setItem(i, 4, new QStandardItem(QString::fromUtf8(userlist[i]->getCollege().data())));
        imodel->setItem(i, 5, new QStandardItem(QString::fromUtf8(userlist[i]->getClassID().data())));
        imodel->setItem(i, 6, new QStandardItem(QString::fromUtf8(userlist[i]->getTel().data())));
        imodel->setItem(i, 7, new QStandardItem(QString::number(userlist[i]->getBorrowBook(*bookTable).size())));
        imodel->setItem(i, 9, new QStandardItem(QString::number(userlist[i]->getBorrowRecord(*bookTable).size())));

        QPushButton *showBrownBookBtn=new QPushButton(this);
        showBrownBookBtn->setText("查看");
        connect(showBrownBookBtn,&QPushButton::clicked,this,[=](){
            showBook(0);
        });

        QPushButton *showRecordBookBtn=new QPushButton(this);
        showRecordBookBtn->setText("查看");
        connect(showRecordBookBtn,&QPushButton::clicked,this,[=](){
//            showUserDataTable();
            showBook(1);//查看记录
        });

        QPushButton *modifyBtn=new QPushButton(this);
        modifyBtn->setText("修改");
        connect(modifyBtn,&QPushButton::clicked,this,[=](){
            if(modifyBtn->text()=="修改"){
                ui->bookDataTableView->setEditTriggers(QAbstractItemView::DoubleClicked);
                ReadOnlyDelegate* readOnlyDelegate = new ReadOnlyDelegate();
                view->setItemDelegateForColumn(7, readOnlyDelegate); //设置某列只读
//                view->setItemDelegateForColumn(8, readOnlyDelegate); //设置某列只读
                view->setItemDelegateForColumn(9, readOnlyDelegate); //设置某列只读
                modifyBtn->setText("确认修改");

            }
            else{
                modifyUser();
                QMessageBox::information(this,"修改","修改成功，已为你更新当前数据");
                showDateTable();
                modifyBtn->setText("修改");
            }
        });

        QPushButton *delBtn=new QPushButton("删除");
        connect(delBtn,&QPushButton::clicked,this,[=](){
             del(ui->tabWidget->currentIndex());
             showUserDataTable();
        });

        view->setIndexWidget(imodel->index(i, 8), showBrownBookBtn);
        view->setIndexWidget(imodel->index(i, 10), showRecordBookBtn);
        view->setIndexWidget(imodel->index(i, 11), modifyBtn);
        view->setIndexWidget(imodel->index(i, 12), delBtn);
    }
    view->setColumnWidth(1,60);
    view->setColumnWidth(2,70);
    view->setColumnWidth(3,130);
    view->setColumnWidth(6,60);
    view->setColumnWidth(8,60);
    view->setSortingEnabled(true);
}
void Adiminster::showBook(int flag){
    int index=ui->userDataTableView->currentIndex().row();
    QTableView *view =new QTableView;
    if(flag==0)
        layData(stulist[index]->getBorrowBook(*bookTable),view,1);
    else
        layData(stulist[index]->getBorrowRecord(*bookTable),view,1);

    view->resize(1013,640);
    view->setShowGrid(true);
    view->setSortingEnabled(true);
    view->show();
}

template<typename T>

void Adiminster::layData(vector <T*>booklist,QTableView *view,int flag){
    //    string ISBN;          //书编号
    //    string bookName;      //书名
    //    string bookWriter;     //作者
    //    string bookPress;     //出版社
    //    int bookTotalNum;     //书总数
    //    int bookBorrowOutNum; //已借出的数量
    //    string bookPubYear;   //出版年
    //    string bookPubMonth;  //出版月
    //    string bookPubDay;    //出版日

    QStandardItemModel *imodel=new QStandardItemModel(this);
    view->setModel(imodel);
    view->verticalHeader()->hide();
    view->horizontalHeader()->setStyleSheet("QHeaderView::section {"                                                        "color: black;padding-left: 4px;border: 1px solid #6c6c6c;}");
    QStringList headercontent;//设置表头
    if(flag!=1){
        headercontent<<"书编号"<<"书名"<<"作者"<<"出版社"<<"书总数"<<"已借出的数量"<<"出版日期"<<"修改"<<"删除";
        imodel->setColumnCount(9);
    }
    else{
        headercontent<<"书编号"<<"书名"<<"作者"<<"出版社"<<"书总数"<<"已借出的数量"<<"出版日期";
         imodel->setColumnCount(7);
    }
    imodel->setHorizontalHeaderLabels(headercontent);

    imodel->setRowCount(booklist.size());

    for(unsigned int i =0;i<booklist.size();i++){//依次在相应位置放入数据
        imodel->setItem(i, 0, new QStandardItem(QString::fromUtf8(booklist[i]->getISBN().data())));
        imodel->setItem(i, 1, new QStandardItem(QString::fromUtf8(booklist[i]->getBookName().data())));
        imodel->setItem(i, 2, new QStandardItem(QString::fromUtf8(booklist[i]->getbookWriterr().data())));
        imodel->setItem(i, 3, new QStandardItem(QString::fromUtf8(booklist[i]->getBookPress().data())));
        imodel->setItem(i, 4, new QStandardItem(QString::number(booklist[i]->getBookTotalNum())));
        imodel->setItem(i, 5, new QStandardItem(QString::number(booklist[i]->getBookBorrowOutNum())));
        imodel->setItem(i, 6, new QStandardItem(QString::fromUtf8(booklist[i]->getBookYear().data())
                                                +"-"+QString::fromUtf8(booklist[i]->getBookMonth().data())
                                                +"-"+QString::fromUtf8(booklist[i]->getBookDay().data())));

    if(flag!=1){
            QPushButton *modifyBtn=new QPushButton(this);
            modifyBtn->setText("修改");
            connect(modifyBtn,&QPushButton::clicked,this,[=](){
                if(modifyBtn->text()=="修改"){
                    ui->bookDataTableView->setEditTriggers(QAbstractItemView::DoubleClicked);
                    ReadOnlyDelegate* readOnlyDelegate = new ReadOnlyDelegate();
                    view->setItemDelegateForColumn(0, readOnlyDelegate); //设置某列只读

                    modifyBtn->setText("确认修改");

                }
                else{
                    modifyBook();
                    QMessageBox::information(this,"修改","修改成功，已为你更新当前数据");
                    showDateTable();
                    modifyBtn->setText("修改");
                }
            });

            QPushButton *delBtn=new QPushButton(this);
             delBtn->setText("删除");
            connect(delBtn,&QPushButton::clicked,this,[=](){
                del(ui->tabWidget->currentIndex());
                showDateTable();
            });

            view->setIndexWidget(imodel->index(i, 7), modifyBtn);
            view->setIndexWidget(imodel->index(i, 8), delBtn);
        }
    }
    view->setColumnWidth(1,180);
    view->setColumnWidth(3,180);
    view->setColumnWidth(6,148);
    view->setSortingEnabled(true);
}
void Adiminster::showDateTable(){
    qDebug()<<ui->tabWidget->currentIndex();
    layData(booklist,ui->bookDataTableView);
    qDebug()<<booklist.size();
    showUserDataTable();
}

void Adiminster::del(int viewIndex){
    unsigned int row;
    if(viewIndex==0){
        row=ui->userDataTableView->currentIndex().row();
        stulist.erase(stulist.begin()+row);
    }
    else {
        row=ui->bookDataTableView->currentIndex().row();//得到当前点击的行坐标
        booklist.erase(booklist.begin()+row);
    }
}
void Adiminster::addNewBook(){
    addBook *addbook=new addBook;
    this->book=new Book();
    addbook->show();
    addbook->exec();
    book=addbook->getBook();
    qDebug()<<book->getBookName().data();
    booklist.push_back(new Book(book->getISBN().data(),book->getBookName().data(),
                                book->getbookWriterr().data(),book->getBookPress().data(),
                                book->getBookTotalNum(),book->getBookBorrowOutNum(),
                                book->getBookYear().data(),book->getBookMonth().data(),book->getBookDay().data()));

}
void Adiminster::modifyBook(){

    unsigned int row=ui->bookDataTableView->currentIndex().row();//得到当前点击的行坐标
    unsigned int colum=ui->bookDataTableView->currentIndex().column();//得到当前点击的列坐标坐标
    if(colum==7){
        QAbstractItemModel *model = ui->bookDataTableView->model ();
        QModelIndex index = model->index(row,0);//选中的行第一列的内容
        QVariant data = model->data(index);//选中的第一列的值
        booklist[row]->setISBN(QString(model->data(model->index(row,0)).toString()).toStdString());
        booklist[row]->setBookName(QString(model->data(model->index(row,1)).toString()).toStdString());
        booklist[row]->setBookWriter(QString(model->data(model->index(row,2)).toString()).toStdString());
        booklist[row]->setBookPress(QString(model->data(model->index(row,3)).toString()).toStdString());
        booklist[row]->setBookTotalNum(QString(model->data(model->index(row,4)).toString()).toInt());
        booklist[row]->setBookBorrowOutNum(QString(model->data(model->index(row,5)).toString()).toInt());
        QString str=QString(model->data(model->index(row,6)).toString());
        if(str!=""){
            QStringList publishData = str.split("-");
            qDebug() << publishData;
            booklist[row]->setBookYear(QString(publishData[0]).toStdString()); //设置出版日期
            booklist[row]->setBookMonth(QString(publishData[1]).toStdString());
            booklist[row]->setBookDay(QString(publishData[2]).toStdString());
        }
        qDebug()<<index.data();
        bookTable->writeFile("book.txt");
    }
}
void Adiminster::modifyUser(){

    unsigned int row=ui->userDataTableView->currentIndex().row();//得到当前点击的行坐标
    unsigned int colum=ui->userDataTableView->currentIndex().column();//得到当前点击的列坐标坐标
    if(colum==11){
        QAbstractItemModel *model = ui->userDataTableView->model ();
        QModelIndex index = model->index(row,0);//选中的行第一列的内容
        QVariant data = model->data(index);//选中的第一列的值
        stulist[row]->setID(QString(model->data(model->index(row,0)).toString()).toStdString());
        usertable->getStudentAccount()->Modify(stulist[row]->getID(),(QString(model->data(model->index(row,1)).toString()).toStdString()));
        stulist[row]->setGender(QString(model->data(model->index(row,2)).toString()).toStdString());
        stulist[row]->setName(QString(model->data(model->index(row,3)).toString()).toStdString());
        stulist[row]->setCollege(QString(model->data(model->index(row,4)).toString()).toStdString());
        stulist[row]->setClassID(QString(model->data(model->index(row,5)).toString()).toStdString());
        stulist[row]->setTelphoneNum(QString(model->data(model->index(row,6)).toString()).toStdString());
        qDebug()<<index.data();
        usertable->getStudentAccount()->write_file("stuAccount.txt");
        usertable->writeFile("student.txt","teacher.txt");
    }
}
void Adiminster::searchBook(){
    SearchBook *searchbook=new SearchBook;
    searchbook->show();
    searchbook->exec();
    Book *bookget =new Book;
    bookget=searchbook->getBook();
    vector <Book*> findbook;
    book=new Book();
    book->setISBN(bookget->getISBN());
    book->setBookName(bookget->getBookName());
    book->setBookWriter(bookget->getbookWriterr());
    book->setBookPress(bookget->getBookPress());
//    book->setBookTotalNum(bookget->getBookTotalNum());
//    book->setBookBorrowOutNum(bookget->getBookBorrowOutNum());
    book->setBookYear(bookget->getBookYear());
    book->setBookMonth(bookget->getBookMonth());
    book->setBookDay(bookget->getBookDay());
    findbook=bookTable->searchBook(*book);
    if(findbook.size()!=0){
        qDebug()<<findbook.size();
        QTableView *view =new QTableView;
        layData(findbook,view);
        int width = this->width();
        int height = this->height();
    //调整tableView窗口大小和主窗口一致
        view->resize(width,height);
        view->setShowGrid(true);
        view->setSortingEnabled(true);


        view->show();
    }
    else{
        QMessageBox message(QMessageBox::Critical, "提示","<font color=' black'>未找到匹配项！</font>");
        QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
        message.setWindowIcon(*icon);
        message.exec();
    }
}
void Adiminster::searchStu(){
    Search *search=new Search;
    search->show();
    search->exec();
    userperson=search->getUser();
    stu=new Student();
    stu->setID(userperson->getID());
    stu->setName(userperson->getName());
    stu->setGender(userperson->getGender());
    stu->setCollege(userperson->getCollege());
    stu->setClassID(userperson->getClassID());
    stu->setTelphoneNum(userperson->getTel());

    vector <Student*> finduser;
    finduser=usertable->searchStudent(*stu);
    if(finduser.size()!=0){
        qDebug()<<finduser.size();
        QTableView *view =new QTableView;
        layUserData(finduser,view);
        int width = this->width();
        int height = this->height();
    //调整tableView窗口大小和主窗口一致
        view->resize(width,height);
        view->setShowGrid(true);
        view->setSortingEnabled(true);


        view->show();
    }
    else{
        QMessageBox message(QMessageBox::Critical, "提示","<font color=' black'>未找到匹配项！</font>");
        QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
        message.setWindowIcon(*icon);
        message.exec();
    }
}
void Adiminster::searchTea(){
    Search *search=new Search;
    search->show();
    search->exec();
    userperson=search->getUser();
    tea=new Teacher();
    tea->setID(userperson->getID());
    tea->setName(userperson->getName());
    tea->setGender(userperson->getGender());
    tea->setCollege(userperson->getCollege());
    tea->setClassID(userperson->getClassID());
    tea->setTelphoneNum(userperson->getTel());

    vector <Teacher*> finduser;
    finduser=usertable->searchTeacher(*tea);
    if(finduser.size()!=0){
        qDebug()<<finduser.size();
        QTableView *view =new QTableView;
        layUserData(finduser,view);
        int width = this->width();
        int height = this->height();
    //调整tableView窗口大小和主窗口一致
        view->resize(width,height);
        view->setShowGrid(true);
        view->setSortingEnabled(true);
        view->show();
    }
    else{
        QMessageBox message(QMessageBox::Critical, "提示","<font color=' black'>未找到匹配项！</font>");
        QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
        message.setWindowIcon(*icon);
        message.exec();
    }
}
void Adiminster::addNewUser(){
    AddUser *adduser=new AddUser;
    this->stu=new Student();
    adduser->show();
    adduser->exec();
    stu=adduser->getStu();
    //qDebug()<<book->getBookName().data();
    stulist.push_back(new Student(stu->getID(),stu->getName(),
                                      stu->getGender(), stu->getTel(),
                                      stu->getCollege(), stu->getClassID()));
}
Adiminster::~Adiminster()
{
    delete bookTable;
    delete book;
    delete usertable;
    delete stu;
    delete tea;
    for(unsigned i=0;i<booklist.size();i++){
        delete booklist[i];
    }
    for(unsigned i=0;i<stulist.size();i++){
        delete stulist[i];
    }
    for(unsigned i=0;i<tealist.size();i++){
        delete tealist[i];
    }
    delete ui;

}
void Adiminster::showUserDataTable(){
    layUserData(stulist,ui->userDataTableView);
}
void Adiminster::on_actionaddUser_triggered()
{
    addNewUser();
    showUserDataTable();
}

void Adiminster::on_actionaddBook_triggered()
{
    addNewBook();
    showDateTable();
}

void Adiminster::on_actionsearchBook_triggered()
{
    searchBook();
}

void Adiminster::on_actionsearchUser_triggered()
{
    searchStu();
}

void Adiminster::on_actionexit_triggered()
{
    this->close();
//    this->~Adiminster();
}

void Adiminster::on_drawBtn_clicked()//绘制统计结果或者展示统计数据
{

    QVector<double> fossilData, nuclearData;
    QVector<double>gender,topten;
    fossilData<<1.0<<2.3<<3.4<<6.7<<4.3<<4;
    nuclearData<<1.0<<3<<6.4<<6.5<<4.3<<8;
    topten=usertable->sortUserCollege();
    gender=usertable->sortGender();
    QVector<UserPerson*>user=usertable->sortUserBorrowNum();
    QVector<Book*>bookRecord=bookTable->sortBorrowTimes();
    qDebug()<<gender<<"*****"<<topten;
    qDebug()<<user[0]->getID().data();
    qDebug()<<bookRecord[0]->getISBN().data();
    Paint paint;
    paint.Draw(ui->drawPaint,topten);

}

void Adiminster::on_actionchangeAdmin_triggered()
{
    MainWindow *switchAcoount=new MainWindow;
    switchAcoount->show();
    switchAcoount->exec();
}
void Adiminster::clearPlot(QCustomPlot *cus){
    int plottableCount =cus->plottableCount();
        if (plottableCount != 0)
             ui->drawPaint->clearPlottables();
}
void Adiminster::on_actionborrowBookRanking_triggered()
{
    QVector<Book*>bookRecord=bookTable->sortBorrowTimes();

    qDebug()<<bookRecord[0]->getISBN().data();
    Paint paint;
    clearPlot(ui->drawPaint);
    paint.Draw(ui->drawPaint,bookRecord);

}

void Adiminster::on_actionuserBorrowRanking_triggered()
{
    QVector<UserPerson*>user=usertable->sortUserBorrowNum();

    qDebug()<<user[0]->getID().data();
    Paint paint;
    clearPlot(ui->drawPaint);
    paint.Draw(ui->drawPaint,user);
}

void Adiminster::on_actionuserCollegeRanking_triggered()
{
    QVector<double>topten;
    topten=usertable->sortUserCollege();
    qDebug()<<"*****"<<topten;
    Paint paint;
    clearPlot(ui->drawPaint);
    paint.Draw(ui->drawPaint,topten);


}

void Adiminster::on_actionGenderReadingComparation_triggered()
{
    QVector<double>gender;
    gender=usertable->sortGender();
    qDebug()<<gender;
    Paint paint;
    clearPlot(ui->drawPaint);
    paint.Draw(ui->drawPaint,gender);

}

void Adiminster::on_actionchangeUser_2_triggered()
{
    adminChangePassword *acp = new adminChangePassword;
    acp -> show();
    acp -> exec();
}

void Adiminster::on_action_triggered()
{
    searchTea();
}

void Adiminster::on_action_2_triggered()
{
    QString savePath = QFileDialog::getSaveFileName(this,tr("Save Image"),"",tr("Images (*.png *.bmp *.jpg)")); //选择路径
    if(ui->drawPaint->grab().save(QString(savePath))){
        QMessageBox::information(this,"导出图片","图片导出成功");
    }
    else{
        QMessageBox::information(this,"导出图片","图片导出失败");
    }
    qDebug()<<"output the picture success";
}

void Adiminster::on_batchAppendBook_action_triggered()
{
    QString openFileName = QFileDialog::getOpenFileName(this,tr("Open Data"),"",tr("TEXT (*.txt)")); //获取追加的文件名
    vector <Book*>appendBookList;
    if(bookTable->readFile(openFileName.toStdString())){
        appendBookList= bookTable->getBookTable();
    }
    booklist.insert(booklist.end(),appendBookList.begin(),appendBookList.end());
    if(booklist.size()>appendBookList.size()){
        QMessageBox::information(this,"图书追加","批量图书已追加到当前图书之后");
//        bookTable->writeFile("book.txt"); //将追加的图书写入源文件
        showDateTable();
    }
    else{
        QMessageBox::information(this,"图书追加","追加失败，请确认数据格式是否正确");
    }
}

void Adiminster::on_patchAppendUser_action_triggered()
{
    QString openFileName = QFileDialog::getOpenFileName(this,tr("Open Data"),"",tr("TEXT (*.txt)")); //获取追加的文件名
    vector<Student*>appendStulist;
    int tempnum = stulist.size();//用来暂时记录添加前的人数，
    int tempnum2 = 0;//读取后用来记录添加的人数


    //stulist.insert(stulist.end(),appendStulist.begin(),appendStulist.end());
    if(usertable->readFile(openFileName.toStdString(),"append_tea.txt")){
        stulist= usertable->getStudentTable();
        tempnum2 = stulist.size()-tempnum;
        for(int i = 0;i<tempnum2;i++){
            usertable ->getStudentAccount()->add(stulist[tempnum+i]->getID(),"000000");
        }
        QMessageBox::information(this,"学生追加","批量学生已追加到当前数据表中");
         usertable->writeFile("student.txt","teacher.txt");
        showUserDataTable();
    }
    else{
        QMessageBox::information(this,"学生追加","批量学生追加失败，请检查数据格式是否正确");
    }
}
