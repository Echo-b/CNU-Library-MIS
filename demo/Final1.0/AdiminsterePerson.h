#ifndef ADIMINSTEREPERSON_H
#define ADIMINSTEREPERSON_H
#include "Person.h"
#include <fstream>
#include <vector>
using namespace std;
class AdiminsterPerson : public Person
{
protected:
    const string workplace = "图书馆";

public:
    AdiminsterPerson() {}
    AdiminsterPerson(string IDIn, string nameIn, string genderIn, string telphoneNumIn) : Person(IDIn, nameIn, genderIn, telphoneNumIn) {}
    string getID() {
        return ID;
    }

    void setID(string ID) {
        this->ID = ID;
    }

    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    string getGender() {
        return gender;
    }

    void setGender(bool gender) {
        this->gender = gender;
    }

    string getTelphoneNum() {
        return telphoneNum;
    }

    void setTelphoneNum(string telphoneNum) {
        this->telphoneNum = telphoneNum;
    }

    string getWorkplace(){
        return workplace;
    }

    friend ostream &operator<<(ostream &os, AdiminsterPerson &admin)
    { //ostream重载函数，给文件输出用的
        os << admin.ID << " ";
        os << admin.name << " ";
        os << admin.gender << " ";
        os << admin.telphoneNum << " ";
        os << admin.workplace << endl;
        return os;
    }
    friend class AdiminTable;
    void userManagement();
    void bookManagement();
    void statisticsManagement();

    bool changeSelfPassword(){
        cout << "管理员修改密码界面";

        return true;
    }

};
class AdiminTable
{private:
    vector<AdiminsterPerson *> AdiminTable;
public:
    bool readFile(const string fileName){ // 读入管理员数据文件
        ifstream fIn(fileName);
        if(!fIn)return false;
        string tempID;
        string tempName;
        string tempGender;
        string tempTelphoneNum;
        while(!fIn.eof()){
            fIn>>tempID;
            fIn>>tempName;
            fIn>>tempGender;
            fIn>>tempTelphoneNum;
            AdiminTable.push_back(new AdiminsterPerson(tempID,tempName,tempGender,tempTelphoneNum));
        }
        fIn.close();
        return true;
    }

    bool writeFile(const string fileName){ // 将管理员数据输出到文件
        ofstream fOut(fileName);
        if(!fOut){
            return false;
        }
        for(unsigned int i = 0;i<AdiminTable.size();i++){
            fOut<<AdiminTable[i]->ID;
            fOut<<" ";
            fOut<<AdiminTable[i]->name;
            fOut<<" ";
            fOut<<AdiminTable[i]->gender;
            fOut<<" ";
            fOut<<AdiminTable[i]->telphoneNum;
            fOut<<" ";
            fOut<<AdiminTable[i]->workplace;
            fOut<<" ";
            fOut<<endl;
        }
        fOut.close();
        return true;
    }

    void testDis(){ //  测试打印
        for(unsigned int i = 0;i<AdiminTable.size();i++){
            cout<<AdiminTable[i]->name<<endl;
        }
    }
    bool addAdmin(AdiminsterPerson newadmin) //增加管理员
    {
        AdiminTable.push_back(new AdiminsterPerson(newadmin));
        return true;
    }

};
#endif // ADIMINSTEREPERSON_H
