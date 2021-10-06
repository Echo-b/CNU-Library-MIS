#ifndef BOOK_H
#define BOOK_H


#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <fstream>
#include <QVector>
#define NOTFOUND -1
using namespace std;
class Book
{
protected:
    string ISBN;          //书编号
    string bookName;      //书名
    string bookWriter;     //作者
    string bookPress;     //出版社
    int bookTotalNum;     //书总数
    int bookBorrowOutNum; //已借出的数量
    string bookPubYear;   //出版年
    string bookPubMonth;  //出版月
    string bookPubDay;    //出版日
    vector<string> bookComment;//评论

public:
    Book() {}
    Book(string ISBNIn, string bookNameIn, string bookWriterIn, string bookPressIn, int bookTotalNumIn, int bookBorrowOutNumIn, string bookPubYearIn, string bookPubMonthIn, string bookPubDayIn)
    {
        this->ISBN = ISBNIn;
        this->bookName = bookNameIn;
        this->bookWriter = bookWriterIn;
        this->bookPress = bookPressIn;
        this->bookTotalNum = bookTotalNumIn;
        this->bookBorrowOutNum = bookBorrowOutNumIn;
        this->bookPubYear = bookPubYearIn;
        this->bookPubMonth = bookPubMonthIn;
        this->bookPubDay = bookPubDayIn;
    }
    friend ostream &operator<<(ostream &os, Book &book)
    { //ostream重载函数，给文件输出用的
        os << book.ISBN << " ";
        os << book.bookName << " ";
        os << book.bookWriter << " ";
        os << book.bookPress << " ";
        os << book.bookTotalNum << " ";
        os << book.bookBorrowOutNum << " ";
        os << book.bookPubYear << " ";
        os << book.bookPubMonth << " ";
        os << book.bookPubDay << endl;
        return os;
    }
    friend class BookTable;
    string getISBN()
    {
        return this->ISBN;
    }
    string getBookName()
    {
        return this->bookName;
    }
    string getbookWriterr()
    {
        return this->bookWriter;
    }
    string getBookPress()
    {
        return this->bookPress;
    }
    int getBookTotalNum()
    {
        return this->bookTotalNum;
    }
    int getBookBorrowOutNum()
    {
        return this->bookBorrowOutNum;
    }
    string getBookYear()
    {
        return this->bookPubYear;
    }
    string getBookMonth()
    {
        return this->bookPubMonth;
    }
    string getBookDay()
    {
        return this->bookPubDay;
    }
    inline void setISBN(string ISBNIn)
    {
        this->ISBN=ISBNIn;
    }
    inline void setBookName(string bookNameIn)
    {
        this->bookName=bookNameIn;
    }
    inline void setBookWriter(string bookWriterIn)
    {
        this->bookWriter=bookWriterIn;
    }
    inline void setBookPress(string bookPressIn)
    {
        this->bookPress=bookPressIn;
    }
    inline void setBookTotalNum(int bookTotalNumIn)
    {
        this->bookTotalNum=bookTotalNumIn;
    }
    inline void setBookBorrowOutNum(int bookBorrowOutNumIn)
    {
        this->bookBorrowOutNum=bookBorrowOutNumIn;
    }
    inline void setBookYear(string bookPubYearIn)
    {
        this->bookPubYear=bookPubYearIn;
    }
    inline void setBookMonth(string bookPubMonthIn)
    {
        this->bookPubMonth=bookPubMonthIn;
    }
    inline void setBookDay(string bookPubDayIn)
    {
        this->bookPubDay=bookPubDayIn;
    }
    void WriteComment(string Comment){
        this->bookComment.push_back(Comment);
    }
    vector<string> getComment(){
        return this->bookComment;
    }

};
class BookTable
{
private:
    vector<Book *> bookTable;

public:
    BookTable() {}
    ~BookTable(){
//        this->writeFile("book.txt");
    }
    int searchBookFromID(string IDIn)
    {
        for (unsigned int i = 0; i < bookTable.size(); i++)
        {
            if (bookTable[i]->ISBN == IDIn)
            {
                return i;
            }
        }
        return NOTFOUND;
    }
    bool addBook(Book bookIn)
    {
        Book *tempBook = new Book(bookIn);
        if (!tempBook)
        {
            return false;
        }
        bookTable.push_back(tempBook);
        return true;
    }
    bool deleteBook(string IDIn)
    {
        if (searchBookFromID(IDIn) == NOTFOUND)
        {
            return false;
        }
        bookTable.erase(bookTable.begin() + searchBookFromID(IDIn));
        return true;
    }
    bool modifyBook(Book bookIn) //修改
    {
        if (searchBookFromID(bookIn.ISBN) == NOTFOUND)
        {
            return false;
        }
        Book *tempbook = bookTable[searchBookFromID(bookIn.ISBN)];
        delete tempbook;
        tempbook = new Book(bookIn);
        bookTable[searchBookFromID(bookIn.ISBN)] = tempbook;
        return true;
    }
    vector<Book *> searchBook(Book bookIn)
    {
        vector<Book *> pBook;
        for (unsigned int i= 0; i < bookTable.size(); i++)
        {
            if ((bookTable[i]->ISBN == bookIn.ISBN) || bookIn.ISBN.empty())
            {
                if ((bookTable[i]->bookName == bookIn.bookName) || bookIn.bookName.empty())
                {
                    if ((bookTable[i]->bookWriter == bookIn.bookWriter) || bookIn.bookWriter.empty())
                    {
                        if ((bookTable[i]->bookPress == bookIn.bookPress) || bookIn.bookPress.empty())
                        {
                            if (1)
                            {
                                if ((bookTable[i]->bookPubYear == bookIn.bookPubYear) || bookIn.bookPubYear.empty())
                                {
                                    if ((bookTable[i]->bookPubMonth == bookIn.bookPubMonth) || bookIn.bookPubMonth.empty())
                                    {
                                        if ((bookTable[i]->bookPubDay == bookIn.bookPubDay) || bookIn.bookPubDay.empty())
                                        {
                                            pBook.push_back(bookTable[i]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return pBook;
    }
    vector<Book *> getBookTable()
    {
        return bookTable;
    }
    bool readFile(const string fileName)
    {
        ifstream fIn(fileName);
        if(!fIn)return false;
        string tempISBN;
        string tempName;
        string tempWriter;
        string tempPress;
        int tempTotalNum;
        int tempBorrowNum;
        string tempYear;
        string tempMonth;
        string tempDay;
        while(fIn){
            fIn>>tempISBN;
            fIn>>tempName;
            fIn>>tempWriter;
            fIn>>tempPress;
            fIn>>tempTotalNum;
            fIn>>tempBorrowNum;
            fIn>>tempYear;
            fIn>>tempMonth;
            fIn>>tempDay;
            if(!fIn)break;
            bookTable.push_back(new Book(tempISBN,tempName,tempWriter,tempPress,tempTotalNum,tempBorrowNum,tempYear,tempMonth,tempDay));
        }
        fIn.close();
        return true;
    }
    bool writeFile(const string fileName){
        ofstream fOut(fileName);
        if(!fOut){
            return false;
        }
        for(unsigned int i = 0;i<bookTable.size();i++){
            fOut<<bookTable[i]->ISBN;
            fOut<<" ";
            fOut<<bookTable[i]->bookName;
            fOut<<" ";
            fOut<<bookTable[i]->bookWriter;
            fOut<<" ";
            fOut<<bookTable[i]->bookPress;
            fOut<<" ";
            fOut<<bookTable[i]->bookTotalNum;
            fOut<<" ";
            fOut<<bookTable[i]->bookBorrowOutNum;
            fOut<<" ";
            fOut<<bookTable[i]->bookPubYear;
            fOut<<" ";
            fOut<<bookTable[i]->bookPubMonth;
            fOut<<" ";
            fOut<<bookTable[i]->bookPubDay;
//            fOut<<" ";
            fOut << endl;
        }
        return true;
    }
    void testDis(){
        for(unsigned int i = 0;i<bookTable.size();i++){
            cout<<bookTable[i]->bookTotalNum<<endl;
        }
    }
    bool replaceTable(vector<Book *> newTable)
      {
          this->bookTable.clear();
          this->bookTable = newTable;
          return true;
      }
      Book *getBookP(int locate)
      {
          return bookTable[locate];
      }
    QVector <Book*> sortBorrowTimes(){ // 根据书籍被借出数量排序返回前十名指针数组
          QVector<Book *> pBook;
          vector<Book *> tmp = bookTable;
          for(unsigned int i = 0;i < tmp.size(); i++){
              for(unsigned int j = i;j < tmp.size(); j++){
                  if(tmp[i]->getBookBorrowOutNum() < tmp[j]->getBookBorrowOutNum()){
                      Book *temp;
                      temp = tmp[j];
                      tmp[j] = tmp[i];
                      tmp[i] = temp;
                  }
              }
          }
          for(unsigned int i = 0;i < 10; i++){
              pBook.push_back(tmp[i]);
          }
          return pBook;
      }
    vector <Book*> sortPublishTime(){ // 根据出版日期按大到小排序
           vector<Book *> pBook; // 存放十本新书
           vector<Book *> tmp = bookTable;
           for(unsigned int i = 0;i < tmp.size(); i++){
               for(unsigned int j = i;j < tmp.size(); j++){
                   if(tmp[i]->getBookYear() < tmp[j]->getBookYear()){
                       Book *temp;
                       temp = tmp[j];
                       tmp[j] = tmp[i];
                       tmp[i] = temp;
                   }
                   else if(tmp[i]->getBookYear() == tmp[j]->getBookYear()){
                       if(tmp[i]->getBookMonth() < tmp[j]->getBookMonth()){
                           Book *temp;
                           temp = tmp[j];
                           tmp[j] = tmp[i];
                           tmp[i] = temp;
                       }
                       if(tmp[i]->getBookMonth() == tmp[j]->getBookMonth()){
                           if(tmp[i]->getBookDay() < tmp[j]->getBookDay()){
                               Book *temp;
                               temp = tmp[j];
                               tmp[j] = tmp[i];
                               tmp[i] = temp;
                           }
                       }
                   }

               }
           }
           for(unsigned int i = 0;i < 10; i++){
               pBook.push_back(tmp[i]);
           }
           return pBook;
       }
};


#endif // BOOK_H
