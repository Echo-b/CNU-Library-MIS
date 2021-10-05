#ifndef STUDENT_H
#define STUDENT_H
//该类为学生类
//继承用户类
//相较于用户类增加的数据成员：
//class--班级
#include "UserPerson.h"
//#include "Book.h"
#include <string>
using namespace std;
class Student : public UserPerson
{
protected:
    static int stuEnableBorrowNum;

public:
    Student() {}
    Student(string IDIn, string nameIn, string genderIn, string telphoneNumIn, string collegeIn, string classIDIn) : UserPerson(IDIn, nameIn, genderIn, telphoneNumIn, collegeIn, classIDIn) {}

    int getEnableNum()
    {
        return stuEnableBorrowNum;
    }
    void setEnableNum(int newNum)
    {
        stuEnableBorrowNum = newNum;
    }
    friend class UserTable;
};

#endif // STUDENT_H
