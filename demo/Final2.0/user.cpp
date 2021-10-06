#include "user.h"
#include "ui_user.h"

User::User(UserTable *PTable, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::User)
{
    ui->setupUi(this);
    //用户界面
    this->setWindowTitle("CNU图书借阅MIS");
    this->setWindowIcon(QIcon(":/image/CNUlibrary.jpg"));
    QPalette PAllbackground2 = this->palette();
    QPixmap ImgAllbackground2(":/image/background.png");
    PAllbackground2.setBrush(QPalette::Window, QBrush(ImgAllbackground2));
    this->setPalette(PAllbackground2);
    this->usertable = PTable;
    init();
    showDateTable();
    if(userperson->ifDueSoon())
    {
        QMessageBox::information(this,"到期提醒","您有书籍即将到期，请您注意归还！");
    }
}
void User::init(){
    bookTable=new BookTable;
    if(bookTable->readFile("book.txt")){
        qDebug()<<"读取成功"<<endl;
        qDebug()<<bookTable->getBookTable().size();
    }
    this->booklist= bookTable->getBookTable();
    userperson=usertable->getUserP();
    if(userperson->checkReservation(*bookTable)) {
        QMessageBox::information(this,"预约","您有预约的书籍到货，快去看看吧！");
    }
}
void User::layReservationData(vector <Book*>booklist,QTableView *view,int flag){
    //    string ISBN;          //书编号
    //    string bookName;      //书名
    //    string bookWriter;     //作者
    //    string bookPress;     //出版社
    //    int bookTotalNum;     //书总数
    //    int bookBorrowOutNum; //已借出的数量
    //    string bookPubYear;   //出版年
    //    string bookPubMonth;  //出版月
    //    string bookPubDay;    //出版日
    vector<Book*>currentBorrowBook=userperson->getBorrowBook(*bookTable);
    vector<int> currentBookIndex;
    for(unsigned int i=0;i<currentBorrowBook.size();i++){
        currentBookIndex.push_back(bookTable->searchBookFromID(currentBorrowBook[i]->getISBN().data()));
    }
    qDebug()<<currentBookIndex;
    view->setEditTriggers(QAbstractItemView::NoEditTriggers);
    QStandardItemModel *imodel=new QStandardItemModel(this);
    view->verticalHeader()->hide();
    view->horizontalHeader()->setStyleSheet("QHeaderView::section {""color: black;padding-left: 4px;border: 1px solid #6c6c6c;}");
    QStringList headercontent;//设置表头
   // 预约列表
    headercontent<<"书编号"<<"书名"<<"作者"<<"出版社"<<"书总数"<<"已借出的数量"<<"出版日期"<<"借书"<<"取消预约";
    imodel->setColumnCount(9);
    imodel->setRowCount(booklist.size());
    view->setModel(imodel);
    int tempCountNum = 0;
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
        QPushButton *borrowBookBtn=new QPushButton(this);

        if(flag==0&&currentBookIndex.size()!=0){
            if(i != unsigned(currentBookIndex[tempCountNum]))borrowBookBtn->setText("借书");
            else {
                borrowBookBtn->setText("已借");
                tempCountNum++;
            }
        }

        else if(flag==1||flag==4){
             borrowBookBtn->setText("续借");
        }
        else
            borrowBookBtn->setText("借书");
        connect(borrowBookBtn,&QPushButton::clicked,this,[=](){
            if(borrowBookBtn->text()=="借书"){
                borrowBook(view);
                if(flag==4||flag==2)
                    view->close();
                showDateTable();
                borrowBookBtn->setText("已借");
            }
            else{
                QMessageBox::information(this,"借书","已借");
            }

        });


        QPushButton *delReserveBookBtn=new QPushButton(this);
        delReserveBookBtn->setText("取消预约");
        connect(delReserveBookBtn,&QPushButton::clicked,this,[=](){
            delReserveBook(view);
            if(flag==5)
                view->close();
            showDateTable();
//            borrowBookBtn->setText("借书");
        });

            view->setIndexWidget(imodel->index(i, 7), borrowBookBtn);
            view->setIndexWidget(imodel->index(i, 8), delReserveBookBtn);

    }
    view->setColumnWidth(1,145);
    view->setColumnWidth(3,145);
    view->setSortingEnabled(true);
}
void User::layData(vector <Book*>booklist,QTableView *view,int flag){
    //    string ISBN;          //书编号
    //    string bookName;      //书名
    //    string bookWriter;     //作者
    //    string bookPress;     //出版社
    //    int bookTotalNum;     //书总数
    //    int bookBorrowOutNum; //已借出的数量
    //    string bookPubYear;   //出版年
    //    string bookPubMonth;  //出版月
    //    string bookPubDay;    //出版日
    vector<Book*>currentBorrowBook=userperson->getBorrowBook(*bookTable);
    vector<int> currentBookIndex;
    vector <string> reservationIsbn = userperson->getReservation();//预约书籍的编号
    vector <int> reservationBookIndex;
    for(unsigned int i = 0;i < reservationIsbn.size(); i ++){
        reservationBookIndex.push_back(bookTable->searchBookFromID(reservationIsbn[i]));
    }
    for(unsigned int i=0;i<currentBorrowBook.size();i++){
        currentBookIndex.push_back(bookTable->searchBookFromID(currentBorrowBook[i]->getISBN().data()));
    }
    qDebug()<<currentBookIndex;
    view->setEditTriggers(QAbstractItemView::NoEditTriggers);
    QStandardItemModel *imodel=new QStandardItemModel(this);
    view->setModel(imodel);
    view->verticalHeader()->hide();
    view->horizontalHeader()->setStyleSheet("QHeaderView::section {""color: black;padding-left: 4px;border: 1px solid #6c6c6c;}");
    QStringList headercontent;//设置表头
    if(flag==1){ // 借书记录
        headercontent<<"书编号"<<"书名"<<"作者"<<"出版社"<<"书总数"<<"已借出的数量"<<"出版日期"<<"续借"<<"还书";
    }
    else if(flag==4) // 当前借书记录
    {
         headercontent<<"书编号"<<"书名"<<"作者"<<"出版社"<<"书总数"<<"已借出的数量"<<"出版日期"<<"续借"<<"还书"<<"借书时间"<<"应还时间";
    }
    else if(flag==3){ // 总的借书记录
        headercontent<<"书编号"<<"书名"<<"作者"<<"出版社"<<"书总数"<<"已借出的数量"<<"出版日期"<<"借书时间"<<"还书时间";
    }
//    else if(flag==5){ // 预约列表
//        headercontent<<"书编号"<<"书名"<<"作者"<<"出版社"<<"书总数"<<"已借出的数量"<<"出版日期"<<"借书"<<"取消预约";
//    }
    else{ // 新书导读 & 所有书单
         headercontent<<"书编号"<<"书名"<<"作者"<<"出版社"<<"书总数"<<"已借出的数量"<<"出版日期"<<"借书"<<"还书"<<"预约"<<"查看评价";
    }

    imodel->setHorizontalHeaderLabels(headercontent);
    if(flag==1||flag==3){
         imodel->setColumnCount(9);
    }
    else if(flag==4){
        imodel->setColumnCount(11);
    }
    else{
        imodel->setColumnCount(11);
    }
    imodel->setRowCount(booklist.size());
    int tempCountNum = 0;
    int reservationCountNum=0;
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
        QPushButton *borrowBookBtn=new QPushButton(this);

        if(flag==0&&currentBookIndex.size()!=0){
            if(i != unsigned(currentBookIndex[tempCountNum]))borrowBookBtn->setText("借书");
            else {
                borrowBookBtn->setText("已借");
                tempCountNum++;
            }
        }
        else if(flag==1||flag==4){
             borrowBookBtn->setText("续借");
        }
        else
            borrowBookBtn->setText("借书");

        QPushButton *reserveBookBtn=new QPushButton(this);
        if(flag==0&&reservationBookIndex.size()!=0){
            if(i != unsigned(reservationBookIndex[reservationCountNum]))reserveBookBtn->setText("预约");
            else {
                reserveBookBtn->setText("已预约");
                reservationCountNum++;
            }
        }
        else
             reserveBookBtn->setText("预约");
        connect(borrowBookBtn,&QPushButton::clicked,this,[=](){
            if(borrowBookBtn->text()=="借书"){
                borrowBook(view);
                if(flag==4||flag==2)
                    view->close();
                showDateTable();
                borrowBookBtn->setText("已借");
            }
            else{
                QMessageBox::information(this,"借书","已借");
            }

        });

        connect(reserveBookBtn,&QPushButton::clicked,this,[=](){
            if(reserveBookBtn->text()=="预约") {
                reserveBook(view);
                showDateTable();
                reserveBookBtn->setText("已预约");
            }
            else{
                QMessageBox::information(this,"预约" ,"已预约");
            }

        });

        QPushButton *giveBackBookBtn=new QPushButton(this);
        giveBackBookBtn->setText("还书");
        connect(giveBackBookBtn,&QPushButton::clicked,this,[=](){
            giveBackBook(view);
            if(flag==4)
                view->close();
            showDateTable();
            borrowBookBtn->setText("借书");
        });

        QPushButton *showCommentBtn=new QPushButton(this);
        showCommentBtn->setText("查看评价");
        connect(showCommentBtn,&QPushButton::clicked,this,[=](){
            showComment();
        });

        if(flag==1||flag==4){
            view->setIndexWidget(imodel->index(i, 7), borrowBookBtn);
            view->setIndexWidget(imodel->index(i, 8), giveBackBookBtn);
        }
        else if(flag==0||flag==2){
            view->setIndexWidget(imodel->index(i, 7), borrowBookBtn);
            view->setIndexWidget(imodel->index(i, 8), giveBackBookBtn);
            view->setIndexWidget(imodel->index(i, 9), reserveBookBtn);
            view->setIndexWidget(imodel->index(i, 10), showCommentBtn);
        }
        else {
            imodel->setItem(i, 7, new QStandardItem(QString(userperson->getBorrowInfor()[i].getBorrowTime().toString("yyyy-MM-dd"))));
            imodel->setItem(i, 8, new QStandardItem(QString(userperson->getBorrowInfor()[i].getReturnTime().toString("yyyy-MM-dd"))));
        }
        if(flag==4){
            imodel->setItem(i, 9, new QStandardItem(QString(userperson->getBorrowInfor()[i].getBorrowTime().toString("yyyy-MM-dd"))));
            imodel->setItem(i, 10, new QStandardItem(QString(userperson->getBorrowInfor()[i].getReturnTime().toString("yyyy-MM-dd"))));
        }
    }
    view->setColumnWidth(1,145);
    view->setColumnWidth(3,145);
    view->setSortingEnabled(true);
}
void User::showDateTable(){

    layData(booklist,ui->bookDataView,0);
}

void User::commentBook(){
    QString info = QInputDialog::getMultiLineText(this, " 评价", "说点什么吧！");
    int index=ui->bookDataView->currentIndex().row();
    booklist[index]->WriteComment(info.toStdString());
}

void User::showComment(){
//    QString comment = "haohaohaoaa";
//    QMessageBox::information(this,"评价",""+comment);
    QTextEdit *test = new QTextEdit;
    test->setWindowTitle("评价");
    int index=ui->bookDataView->currentIndex().row();
    test->append("----------------------------------");
    for(unsigned int i = 0;i<booklist[index]->getComment().size();i++){
        QString str;
        str = "评论"+QString::number(i+1)+":"+booklist[index]->getComment()[i].data();
        test->append(str);
        test->append("----------------------------------");
    }
    test->show();
}

void User::borrowBook(QTableView *view){
    int flag=0;
    int index=view->currentIndex().row();
    QAbstractItemModel *model = ui->bookDataView->model ();
    QString borrowBookID=model->data(model->index(index,0)).toString();
    qDebug()<<borrowBookID;
    vector<Book*>currentBorrowBook=userperson->getBorrowBook(*bookTable);
    for(unsigned int i=0;i<currentBorrowBook.size();i++){
        if(currentBorrowBook[i]->getISBN().data()==borrowBookID){
            flag=1;
        }
    }
    int borrowflag=userperson->borrowBook(borrowBookID.toStdString(),*bookTable);
    if(flag==1){
        QMessageBox::information(this,"借书","已借该书");
    }
    else if(flag==0&&borrowflag==0){
        QMessageBox::information(this,"借书","没有可借库存");
    }
    else if(flag==0&&borrowflag==1){
        QMessageBox::information(this,"借书","借书已达上限");
    }
    else if(flag==0&&borrowflag==2){
        int locate=bookTable->searchBookFromID(borrowBookID.toStdString());
        int currentNum=bookTable->getBookTable()[locate]->getBookBorrowOutNum();
        bookTable->getBookTable()[locate]->setBookBorrowOutNum(++currentNum);
        QMessageBox::information(this,"借书","借书成功");
    }
    else if(flag==0&&borrowflag==3){
        QMessageBox::information(this,"借书","该书不存在");
    }
    else if(flag==0&&borrowflag==4){
        QMessageBox::information(this,"借书","您有逾期未还的书籍，不能借书！");
    }
      bookTable->writeFile("book.txt");
}

void User::reserveBook(QTableView *view){
    int flag=0;
    int index=view->currentIndex().row();
    QAbstractItemModel *model = ui->bookDataView->model ();
    QString borrowBookID=model->data(model->index(index,0)).toString();
    vector<Book*>currentBorrowBook=userperson->getBorrowBook(*bookTable);
    for(unsigned int i=0;i<currentBorrowBook.size();i++){
        if(currentBorrowBook[i]->getISBN().data()==borrowBookID){
            flag=1;
        }
    }
    int borrowflag=userperson->borrowBook(borrowBookID.toStdString(),*bookTable);
    if(flag==1){
        QMessageBox::information(this,"预约","您已借该书，请不要重复预约！");
    }
    else if(flag==0&&borrowflag==0){
        int locate=bookTable->searchBookFromID(borrowBookID.toStdString());
        if(userperson->addReservation(bookTable->getBookTable()[locate]->getISBN())){
            QMessageBox::information(this,"预约","已为您预约，到货将通知您！");
        }
        else QMessageBox::information(this,"预约","您已预约，请不要重复预约！");
    }
    else if(flag==0&&borrowflag==1){
        QMessageBox::information(this,"预约","借书数量已达上限，请您归还部分后再预约！");
    }
    else if(flag==0&&borrowflag==2){
        int locate=bookTable->searchBookFromID(borrowBookID.toStdString());
        int currentNum=bookTable->getBookTable()[locate]->getBookBorrowOutNum();
        bookTable->getBookTable()[locate]->setBookBorrowOutNum(++currentNum);
        QMessageBox::information(this,"预约","当前书有库存，已为您借阅！");
    }
    else if(flag==0&&borrowflag==3){
        QMessageBox::information(this,"预约","该书不存在");
    }
    else if(flag==0&&borrowflag==4){
        QMessageBox::information(this,"预约","您有逾期未还的书籍，不能预约书！");
    }
//    view->update();
}

void User::delReserveBook(QTableView *view){
    int index=view->currentIndex().row();
    QAbstractItemModel *model = view->model ();
    QString borrowBookID=model->data(model->index(index,0)).toString();
    userperson->delReservation(borrowBookID.toStdString());
    QMessageBox::information(this,"预约","已取消预约！");
//    view->update();
}

void User::giveBackBook(QTableView *view){
    int flag=0;
    int index=view->currentIndex().row();
    QAbstractItemModel *model = view->model ();
    QString givebackBookID=model->data(model->index(index,0)).toString();
    vector<Book*>currentBorrowBook=userperson->getBorrowBook(*bookTable);
    for(unsigned int i=0;i<currentBorrowBook.size();i++){
        if(currentBorrowBook[i]->getISBN().data()==givebackBookID){
            flag=1;
            break;
        }
    }
    if(flag==0){
        QMessageBox::information(this,"还书","请先借书");
    }
    else{
        int locate=bookTable->searchBookFromID(givebackBookID.toStdString());
        int currentNum=bookTable->getBookTable()[locate]->getBookBorrowOutNum();
        bookTable->getBookTable()[locate]->setBookBorrowOutNum(--currentNum);
        userperson->giveBackBook(givebackBookID.toStdString(),*bookTable);
        QMessageBox::information(this,"还书","还书成功");
        commentBook();
    }
    bookTable->writeFile("book.txt");
}
void User::searchRestart(vector <Book*>currentBorrowBook,QTableView *view){
    view->resize(1415,760);
    view->setShowGrid(true);
    view->setSortingEnabled(true);
    layData(currentBorrowBook,view,4);
    view->show();
}
User::~User()
{

    delete bookTable;
    delete book;
    delete userperson;
    delete usertable;
    for(unsigned int i=0;i<booklist.size();i++){
        delete booklist[i];
    }

     delete ui;
}

void User::on_actionBorrowTotalBook_triggered()
{
    QTableView *view =new QTableView;
    searchRestart(userperson->getBorrowBook(*bookTable),view);
    view->show();
}

void User::on_actionchangeID_triggered()
{
    MainWindow *switchAcoount=new MainWindow(this);
    switchAcoount->show();
    switchAcoount->exec();
}

void User::on_actionexit_triggered()
{
    QMessageBox::information(this,"退出","确认退出");
    this->close();
}

void User::on_actionNewReading_triggered()
{
    QTableView *view =new QTableView;
    vector <Book*> tennewbook = bookTable->sortPublishTime();
    layData(tennewbook,view,2);
    QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
    view->setWindowIcon(*icon);
    view->resize(1040,472);
    view->show();

}

void User::on_actionTotalBorrowBookRecord_triggered()
{
    QTableView *view =new QTableView;
    vector<Book*> bookRecord=userperson->getBorrowRecord(*bookTable);
    layData(bookRecord,view,3);
    QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
    view->setWindowIcon(*icon);
    view->resize(1171,600);
    view->show();
}


void User::on_actionchangePassword_triggered()
{
    UserChangePassword *ucp = new UserChangePassword(usertable);
    ucp->show();
    ucp->exec();
}


void User::on_reservation_triggered()
{
    //userperson->checkReservation(*bookTable);
    QTableView *view =new QTableView;
    vector <string> reservationIsbn = userperson->getReservation();//预约书籍的编号
    vector <Book*> reservation;
    for(unsigned int i = 0;i < reservationIsbn.size(); i ++){
        int index = bookTable->searchBookFromID(reservationIsbn[i]); // 获取每个预约书的序号
        if(index != -1){
           reservation.push_back(bookTable->getBookTable()[index]);
        }
    }
    layReservationData(reservation,view,5);
    QIcon *icon = new QIcon(":/image/CNUlibrary.jpg");
    view->setWindowIcon(*icon);
    view->resize(1040,472);
    view->show();
}


