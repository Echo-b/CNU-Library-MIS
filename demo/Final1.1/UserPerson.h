#ifndef USERPERSON_H
#define USERPERSON_H

//该头文件为用户（UserPerson）类
//继承于“Person”类
//相较于“Person”类增加的数据成员有：
//college--学院
//borrowNum--在借书籍数量（数量）
//borrowBook--在借书籍（具体书名称）
//borrowRecord--借阅记录
#include "Person.h"
#include <vector>
#include "book.h"
#include "QDateTime"
class BookAndBorrowTime{
private:
    string bookID;
    QDateTime borrowTime;
    QDateTime returnTime;
public:
    BookAndBorrowTime(string bookID,QDateTime borrowTime,QDateTime returnTime){
        this->bookID = bookID;
        this->borrowTime = borrowTime;
        this->returnTime = returnTime;
    }
    QDateTime getBorrowTime(){
        return borrowTime;
    }
    QDateTime getReturnTime(){
        return returnTime;
    }
    string getBookID(){
        return bookID;
    }
    void setBorrowTime(QDateTime newTime){
        this->getBorrowTime() = newTime;
    }
    void setReturnTime(QDateTime newTime){
        this->returnTime = newTime;
    }


};

class UserPerson : public Person
{
protected:
    string college;
    string classID;


    vector<BookAndBorrowTime> borrowInfor;
    vector<BookAndBorrowTime> borrowRecord;

public:
    UserPerson() {}
    UserPerson(string IDIn, string nameIn, string genderIn, string telphoneNumIn, string collegeIn, string classIDIn) : Person(IDIn, nameIn, genderIn, telphoneNumIn)
    {
        this->classID = classIDIn;
        this->college = collegeIn;
    }
    string getID()
    {
        return this->ID;
    }
    string getName()
    {
        return this->name;
    }
    string getGender()
    {
        return this->gender;
    }
    string getTel()
    {
        return this->telphoneNum;
    }
    string getCollege()
    {
        return this->college;
    }
    string getClassID()
    {
        return this->classID;
    }
    vector<Book *> getBorrowBook(BookTable bookTable)
    {
        vector<Book *> tempTable;
        for (unsigned int i = 0; i < borrowInfor.size(); i++)
        {
            tempTable.push_back(bookTable.getBookP(bookTable.searchBookFromID(borrowInfor[i].getBookID())));
        }
        return tempTable;
    }
    vector<Book *> getBorrowRecord(BookTable bookTable)
    {
        vector<Book *> tempTable;
        for (unsigned int i = 0; i < borrowRecord.size(); i++)
        {
            tempTable.push_back(bookTable.getBookP(bookTable.searchBookFromID(borrowRecord[i].getBookID())));
        }
        return tempTable;
    }
    vector<BookAndBorrowTime > getBorrowInfor(){
        return this->borrowInfor;
    }
    vector<BookAndBorrowTime > getBorrowRecord(){
        return this->borrowRecord;
    }
//    int searchBorrowFromID(string IDIn){
//        for(unsigned int i = 0;i<borrowInfor.size();i++){
//            if(IDIn==borrowInfor[i].getBookID()){
//                return i;
//            }
//        }
//        return -1;
//    }
//    int searchRecordFromID(string IDIn){
//        for(unsigned int i = 0;i<borrowRecord.size();i++){
//            if(IDIn ==borrowRecord[i].getBookID())
//                return i;
//        }
//        return -1;
//    }
    bool modifyReturnTime(string bookID,int flag,int day = 0){//flag==1为还书，flag==2为续借
        if(flag ==1){
            //borrowInfor[searchBorrowBookFromID(bookID)].setReturnTime(QDateTime::currentDateTime());
            //borrowInfor.erase(borrowInfor.begin()+searchBorrowFromID(bookID));
            for(std::vector<BookAndBorrowTime>::iterator it = borrowInfor.begin(); it != borrowInfor.end(); ++it) {
                if(it->getBookID() == bookID) {
                    borrowInfor.erase(it);
                    break;
                }
            }
            for(unsigned int i = 0;i<borrowRecord.size();i++){
                if(bookID ==borrowRecord[i].getBookID())
                    borrowRecord[i].setReturnTime(QDateTime::currentDateTime());
            }


            return true;
        }
        else if(flag ==2){
            for(unsigned int i = 0;i<borrowRecord.size();i++){
                if(bookID ==borrowRecord[i].getBookID())
                    borrowRecord[i].setReturnTime(borrowRecord[i].getReturnTime().addDays(day));
            }
            for(unsigned int i = 0;i<borrowInfor.size();i++){
                if(bookID ==borrowInfor[i].getBookID())
                    borrowInfor[i].setReturnTime(borrowInfor[i].getReturnTime().addDays(day));
            }
            //borrowInfor[searchBorrowFromID(bookID)].setReturnTime(borrowInfor[searchBorrowFromID(bookID)].getReturnTime().addDays(day));
            return true;
        }
        return false;
    }
    void setID(string ID)
    {
        this->ID = ID;
    }
    void setClassID(string classID)
    {
        this->classID = classID;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setGender(string gender)
    {
        this->gender = gender;
    }

    void setTelphoneNum(string telphoneNum)
    {
        this->telphoneNum = telphoneNum;
    }

    void setCollege(string college)
    {
        this->college = college;
    }
    void setborrowBook(BookAndBorrowTime infor)
    {
        borrowInfor.push_back(infor);
    }

    void setborrowRecord(BookAndBorrowTime infor)
    {
        borrowRecord.push_back(infor);
    }
  int borrowBook(string bookID, BookTable bookTable,int maxBorrowDay = 30)
  {
      for(unsigned int i = 0; i < borrowInfor.size(); i++){
          if(borrowInfor[i].getBorrowTime().daysTo(QDateTime::currentDateTime()) > maxBorrowDay){
              return 4; // 逾期未还不可借
          }
      }
      int index=bookTable.searchBookFromID(bookID);
      if (index != -1)
      {
          int currentNum=bookTable.getBookTable()[index]->getBookBorrowOutNum();
          int totalNum=bookTable.getBookTable()[index]->getBookTotalNum();
          int myBorrowNum=borrowInfor.size();
          if(currentNum==totalNum&&myBorrowNum<12)
                return 0;//没有可借的书
          if(currentNum<totalNum&&myBorrowNum==12)
                return 1;//达到用户借书上限
          else{
                BookAndBorrowTime tempInfor(bookID,QDateTime::currentDateTime(),QDateTime::currentDateTime().addDays(maxBorrowDay));
                borrowInfor.push_back(tempInfor);
                borrowRecord.push_back(tempInfor);
//                bookTable.getBookTable()[index]->setBookBorrowOutNum(currentNum++);
                return 2;//借书成功
          }

      }
      return 3;//书本不存在
  }
  bool giveBackBook(string bookID, BookTable bookTable){
      int index=bookTable.searchBookFromID(bookID);
      if (bookTable.searchBookFromID(bookID) != -1)
      {
//          int currentNum=bookTable.getBookTable()[index]->getBookBorrowOutNum();
          borrowInfor.erase(borrowInfor.begin()+index);


          return true;

      }
      return false;
  }
  UserPerson *getUser()
  {
      return this;
  }

    int getBorrowIDsize()
      {
          return borrowInfor.size();
      }


    bool ifDueSoon() // 判断是否有书籍即将到期未还，如有，在用户登录时弹窗提醒
    {
        for(unsigned int i = 0; i < borrowInfor.size(); i++){
            if(borrowInfor[i].getBorrowTime().daysTo(QDateTime::currentDateTime()) > 26){
                return true;
            }
        }
        return false;
    }
};

#endif // USERPERSON_H
