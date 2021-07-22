#ifndef USERTABLE_H
#define USERTABLE_H
#include "Student.h"
#include "Teacher.h"
#include "UserPerson.h"
#include "accountPasswordClass.h"
#include <string>
#include <QVector>
#ifndef NOTFOUND
#define NOTFOUND -1
#endif

using namespace std;
class UserTable
{
private:
    vector<Student *> studentTable;
    vector<Teacher *> teacherTable;
    UserPerson *pUser = NULL;
    int id_flag = -1;
    Account_group teaAccount;
    Account_group stuAccount;

public:
    UserTable() {
        stuAccount.read_file("stuAccount.txt");
        teaAccount.read_file("teaAccount.txt");
        readFile("student.txt", "teacher.txt");
    }
    ~UserTable() {
        stuAccount.write_file("stuAccount.txt");
        teaAccount.write_file("teaAccount.txt");
        writeFile("student.txt", "teacher.txt");
    }
    int searchUserFromID(string IDIn, int flag)
    { //根据ID搜索用户，flag : 1为学生，2为教师
        if (flag == 1)
        {
            for (unsigned int i = 0; i < studentTable.size(); i++)
            {
                if (studentTable[i]->ID == IDIn)
                    return i;
            }
        }
        else if (flag == 2)
        {
            for (unsigned int i = 0; i < teacherTable.size(); i++)
            {
                if (teacherTable[i]->ID == IDIn)
                    return i;
            }

        }
        return NOTFOUND;
    }
    bool addStudent(Student newStudent) //增加学生
    {
        if(this->searchUserFromID(newStudent.getID(),1)!=-1)return false;
        studentTable.push_back(new Student(newStudent));
        return true;
    }
    bool addTeacher(Teacher newTeacher)//增加教师
    {
        if(this->searchUserFromID(newTeacher.getID(),2)!=-1)return false;
        teacherTable.push_back(new Teacher(newTeacher));
        return true;
    }

    bool deleteUser(string IDIn, int flag)//删除一个用户，使用名字和类型区别 1为学生，2为教师
    {
        if (searchUserFromID(IDIn, flag) == NOTFOUND)
            return false;
        else if (flag == 1)
        {
            studentTable.erase(studentTable.begin() + searchUserFromID(IDIn, flag));
            return true;
        }
        else if (flag == 2)
        {
            teacherTable.erase(teacherTable.begin() + searchUserFromID(IDIn, flag));
            return true;
        }
        else
            return false;
    }
    vector<Student *> getStudentTable()//获得学生表
    {
        return studentTable;
    }
    vector<Teacher *> getTeacherTable()//获得教师表
    {
        return teacherTable;
    }
    int readFile(const string stuFileName, const string teaFileName) //返回值：0表示两个文件都找不到，1表示只有学生的文件，2表示只有教师的文件，3都找到且成功读取
    {
        ifstream stuFile(stuFileName);
        ifstream teaFile(teaFileName);
        string tempID;
        string tempGender;
        string tempName;
        string tempCollege;
        string tempClassID;
        string tempPhoneNum;
        string tempBookID;
        int tempNum;
        int flag = 0;
        int tempTimeNum;
        int tempTimeNum2;
        //int testNum;
        if (stuFile)
        {
            while (stuFile)
            {

                stuFile >> tempID;
                stuFile >> tempGender;
                stuFile >> tempName;
                stuFile >> tempCollege;
                stuFile >> tempClassID;
                stuFile >> tempPhoneNum;
                stuFile >> tempNum;
                if(!stuFile)break;
                Student tempStu(tempID, tempName, tempGender, tempPhoneNum, tempCollege, tempClassID);

                studentTable.push_back(new Student(tempStu));
                for (int i = 0; i < tempNum; i++)
                {
                    stuFile >> tempBookID;
                    stuFile>>tempTimeNum;
                    stuFile>>tempTimeNum2;
                    BookAndBorrowTime tempInfor(tempBookID,QDateTime::fromTime_t(tempTimeNum),QDateTime::fromTime_t(tempTimeNum2));
                    studentTable[studentTable.size() - 1]->borrowInfor.push_back(tempInfor); //读取现在在借的书
                }
                stuFile >> tempNum;
                for (int i = 0; i < tempNum; i++)
                {
                    stuFile >> tempBookID;
                    stuFile>>tempTimeNum;
                    stuFile>>tempTimeNum2;
                    BookAndBorrowTime tempInfor(tempBookID,QDateTime::fromTime_t(tempTimeNum),QDateTime::fromTime_t(tempTimeNum2));
                    studentTable[studentTable.size()-1]->borrowRecord.push_back(tempInfor); //读取曾经借过书的记录
                }

            }
            flag += 1;
        }
        if (teaFile)
        {
            while (teaFile)
            {
                teaFile >> tempID;
                teaFile >> tempGender;
                teaFile >> tempName;
                teaFile >> tempCollege;
                teaFile >> tempClassID;
                teaFile >> tempPhoneNum;
                teaFile >> tempNum;
                if(!teaFile)break;
                teacherTable.push_back(new Teacher(tempID, tempName, tempGender, tempPhoneNum, tempCollege, tempClassID));
                for (int i = 0; i < tempNum; i++) //读取现在在借的书籍
                {
                    teaFile >> tempBookID;
                    teaFile>>tempTimeNum;
                    teaFile>>tempTimeNum2;
                    BookAndBorrowTime tempInfor(tempBookID,QDateTime::fromTime_t(tempTimeNum),QDateTime::fromTime_t(tempTimeNum2));
                    teacherTable[teacherTable.size() - 1]->borrowInfor.push_back(tempInfor);
                }
                teaFile >> tempNum;
                for (int i = 0; i < tempNum; i++)
                { //读取已经借的记录
                    teaFile >> tempBookID;
                    teaFile>>tempTimeNum;
                    teaFile>>tempTimeNum2;
                    BookAndBorrowTime tempInfor(tempBookID,QDateTime::fromTime_t(tempTimeNum),QDateTime::fromTime_t(tempTimeNum2));
                    studentTable[studentTable.size()]->borrowRecord.push_back(tempInfor);
                }
            }
            flag += 2;
        }
        stuFile.close();
        teaFile.close();
        return flag;
    }
    bool writeFile(const string stuFileName, const string teaFileName)//写文件
    {
        ofstream stuFile(stuFileName);
        ofstream teaFile(teaFileName);
        for (unsigned int i = 0; i < studentTable.size(); i++)
        {
            stuFile << studentTable[i]->ID;
            stuFile << " ";
            stuFile << studentTable[i]->gender;
            stuFile << " ";
            stuFile << studentTable[i]->name;
            stuFile << " ";
            stuFile << studentTable[i]->college;
            stuFile << " ";
            stuFile << studentTable[i]->classID;
            stuFile << " ";
            stuFile << studentTable[i]->telphoneNum;
            stuFile << " ";
            stuFile << studentTable[i]->borrowInfor.size();
            stuFile << " ";
            for (unsigned int j = 0; j < studentTable[i]->borrowInfor.size(); j++)
            {
                stuFile << studentTable[i]->borrowInfor[j].getBookID();
                stuFile << " ";
                stuFile << studentTable[i]->borrowInfor[j].getBorrowTime().toTime_t();
                stuFile << " ";
                stuFile << studentTable[i]->borrowInfor[j].getReturnTime().toTime_t();
                stuFile << " ";

            }
            stuFile << studentTable[i]->borrowRecord.size();
            stuFile << " ";
            for (unsigned int j = 0; j < studentTable[i]->borrowRecord.size(); j++)
            {
                stuFile << studentTable[i]->borrowRecord[j].getBookID();
                stuFile << " ";
                stuFile << studentTable[i]->borrowRecord[j].getBorrowTime().toTime_t();
                stuFile << " ";
                stuFile << studentTable[i]->borrowRecord[j].getReturnTime().toTime_t();
                stuFile << " ";
            }
            stuFile << endl;
        }
        for (unsigned int i = 0; i < teacherTable.size(); i++)
        {
            teaFile << teacherTable[i]->ID;
            teaFile << " ";
            teaFile << teacherTable[i]->gender;
            teaFile << " ";
            teaFile << teacherTable[i]->name;
            teaFile << " ";
            teaFile << teacherTable[i]->college;
            teaFile << " ";
            teaFile << teacherTable[i]->classID;
            teaFile << " ";
            teaFile << teacherTable[i]->telphoneNum;
            teaFile << " ";
            teaFile << teacherTable[i]->borrowInfor.size();
            teaFile << " ";
            for (unsigned int j = 0; j < teacherTable[i]->borrowInfor.size(); j++)
            {
                teaFile << teacherTable[i]->borrowInfor[j].getBookID();
                teaFile << " ";
                teaFile << teacherTable[i]->borrowInfor[j].getBorrowTime().toTime_t();
                teaFile << " ";
                teaFile << teacherTable[i]->borrowInfor[j].getReturnTime().toTime_t();
                teaFile << " ";
            }
            teaFile << teacherTable[i]->borrowRecord.size();
            teaFile << " ";
            for (unsigned int j = 0; j < teacherTable[i]->borrowRecord.size(); j++)
            {
                teaFile << teacherTable[i]->borrowRecord[j].getBookID();
                teaFile << " ";
                teaFile << teacherTable[i]->borrowRecord[j].getBorrowTime().toTime_t();
                teaFile << " ";
                teaFile << teacherTable[i]->borrowRecord[j].getReturnTime().toTime_t();
                teaFile << " ";
            }
            teaFile << endl;
        }
        stuFile.close();
        teaFile.close();
        return true;
    }
    vector<Student *> searchStudent(Student SearStu) //学生查找，给一个学生对象（注意不是学生对象指针）
    {
        vector<Student *> StuResult;
        for (unsigned int i = 0; i < studentTable.size(); i++)
        {
            if ((SearStu.ID == studentTable[i]->ID) || SearStu.ID.empty())
            {
                if ((SearStu.gender == studentTable[i]->gender) || SearStu.gender.empty())
                {
                    if ((SearStu.name == studentTable[i]->name) || SearStu.name.empty())
                    {
                        if ((SearStu.college == studentTable[i]->college) || SearStu.college.empty())
                        {
                            if ((SearStu.telphoneNum == studentTable[i]->telphoneNum) || SearStu.telphoneNum.empty())
                            {
                                StuResult.push_back(studentTable[i]);
                            }
                        }
                    }
                }
            }
        }
        return StuResult;
    }
    vector<Teacher *> searchTeacher(Teacher SearTea) //教师查找，给个教师对象（注意不是指针）
    {
        vector<Teacher *> TeaResult;
        for (unsigned int i = 0; i < teacherTable.size(); i++)
        {
            if ((SearTea.ID == teacherTable[i]->ID) || SearTea.ID.empty())
            {
                if ((SearTea.gender == teacherTable[i]->gender) || SearTea.gender.empty())
                {
                    if ((SearTea.name == teacherTable[i]->name) || SearTea.name.empty())
                    {
                        if ((SearTea.college == teacherTable[i]->college) || SearTea.college.empty())
                        {
                            if ((SearTea.telphoneNum == teacherTable[i]->telphoneNum) || SearTea.telphoneNum.empty())
                            {
                                TeaResult.push_back(teacherTable[i]);
                            }
                        }
                    }
                }
            }
        }
        return TeaResult;
    }
    bool logIn(string account, string password, int flag) //flag:1为登录学生，2为登录教师（该函数为登录函数
    {
        if (flag == 1)
        {


            if (!stuAccount.logIn(account, password))
            {
                return false;
            }
            else
            {
                pUser = studentTable[searchUserFromID(account, flag)];
                id_flag = 1;
                return true;
            }
        }
        else if (flag == 2)
        {

            if (!teaAccount.logIn(account, password))
            {
                return false;
            }
            else
            {
                pUser = teacherTable[searchUserFromID(account, flag)];
                id_flag = 2;
                return true;
            }
        }
        else
            return false;
    }
    bool modifyPassword(string newPassword)//修改密码
    {
        if (id_flag == 1)
        {
            stuAccount.Modify(pUser->getID(), newPassword);
            return true;
        }
        else if (id_flag == 2)
        {
            teaAccount.Modify(pUser->getID(), newPassword);
            return true;
        }
        return false;
    }
    bool addAccount(string account, string password, int flag)//增加用户的账号密码（因为账号密码和学生列表分开，所以增加用户的时候也记得调用一下）
    {
        if (flag == 1)
        {
            stuAccount.add(account, password);
            return true;
        }
        else if (flag == 2)
        {
            teaAccount.add(account, password);
            return true;
        }
        else
            return false;
    }
    bool delAccount(string ID,int userType) {//删除账号，记得在删除用户的时候也调用一下呀！
        if (userType == 1) {
            return stuAccount.del(ID);
        }
        else if (userType == 2) {
            return teaAccount.del(ID);
        }
        else return false;
    }
    void testDis(){}
    bool borrowBook(string bookID, BookTable bookTable)
        {
            return pUser->borrowBook(bookID, bookTable);
        }
    UserPerson *getUserP(){
        return pUser;
    }
    // 统计函数

    QVector <double> sortGender(){ // 返回男女生借书比例
            QVector <double> ratio;
            double male = 0.0,female = 0.0;
            for(unsigned int i = 0;i < studentTable.size(); i++){
                if(studentTable[i]->getGender()=="男"){
                    male++;
                }
                else female++;
            }
            for(unsigned int i = 0;i < teacherTable.size(); i++){
                if(teacherTable[i]->getGender()=="男"){
                    male++;
                }
                else female++;
            }
            ratio.push_back(male/(male+female));
            ratio.push_back(female/(male+female));
            return ratio;
            cout<<ratio[0];
    }

    QVector <double> sortUserCollege(){ // 学院总借阅量，返回十个数
    //分别是计算机科学与技术、美术、物理、教育学院、心理、化学、数科、文学、马院、历史
        QVector <double> collegeReadNum;//学院阅读量
        double computer = 0,art = 0,physics = 0,education = 0,psychology = 0,chemistry = 0,math = 0,literature = 0,thought = 0,history = 0;
        for(unsigned int i = 0;i < studentTable.size(); i++){
            if(studentTable[i]->getCollege()=="计算机科学与技术") computer++;
            else if(studentTable[i]->getCollege()=="美术") art++;
            else if(studentTable[i]->getCollege()=="物理") physics++;
            else if(studentTable[i]->getCollege() == "教育学院") education++;
            else if(studentTable[i]->getCollege() == "心理") psychology++;
            else if(studentTable[i]->getCollege() == "化学") chemistry++;
            else if(studentTable[i]->getCollege() == "数科") math++;
            else if(studentTable[i]->getCollege() == "文学") literature++;
            else if(studentTable[i]->getCollege() == "马院") thought++;
            else if(studentTable[i]->getCollege() == "历史") history++;
        }
        collegeReadNum.push_back(computer);
        collegeReadNum.push_back(art);
        collegeReadNum.push_back(physics);
        collegeReadNum.push_back(education);
        collegeReadNum.push_back(psychology);
        collegeReadNum.push_back(chemistry);
        collegeReadNum.push_back(math);
        collegeReadNum.push_back(literature);
        collegeReadNum.push_back(thought);
        collegeReadNum.push_back(history);
        return collegeReadNum;
    }
    QVector <UserPerson*> sortUserBorrowNum(){ // 根据用户借书数量排名，返回前十名
        QVector <UserPerson*> topten;
        QVector <UserPerson*> tmp;
        for(unsigned int i = 0;i < studentTable.size(); i++){
            tmp.push_back(studentTable[i]);
        }
        for(unsigned int i = 0;i < teacherTable.size(); i++){
            tmp.push_back(teacherTable[i]);
        }
        for(int i = 0;i < tmp.size(); i++){
            for( int j = i;j < tmp.size(); j++){
                if(tmp[i]->getBorrowIDsize() < tmp[j]->getBorrowIDsize()){
                    UserPerson *temp;
                    temp = tmp[j];
                    tmp[j] = tmp[i];
                    tmp[i] = temp;
                }
            }
        }
        for(unsigned int i = 0;i < 10; i++){
            topten.push_back(tmp[i]);
        }
        return topten;
    }
    bool tempAssignPUser(){
        pUser=studentTable[0];
        return true;
    }
    Account_group* getStudentAccount(){
        return &stuAccount;
    }
    Account_group* getTeacherAccount(){
        return &teaAccount;
    }

};

#endif // USERTABLE_H
