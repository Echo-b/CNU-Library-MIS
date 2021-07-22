#ifndef TEACHER_H
#define TEACHER_H
//该类为教师类
//继承用户类
//相较于用户类增加的数据成员为：
//teaEnableBorrowNum--教师可借书籍数量
#include "UserPerson.h"
#include <string>
class Teacher : public UserPerson
{
protected:
    static int teaEnableBorrowNum;

public:
    Teacher() {}
    Teacher(string IDIn, string nameIn, string genderIn, string telphoneNumIn, string collegeIn, string classIDIn) : UserPerson(IDIn, nameIn, genderIn, telphoneNumIn, collegeIn, classIDIn) {}
    int getEnableNum()
    {
        return teaEnableBorrowNum;
    }
    void setEnableNum(int newNum)
    {
        teaEnableBorrowNum = newNum;
    }
    friend class UserTable;
};

#endif // TEACHER_H
