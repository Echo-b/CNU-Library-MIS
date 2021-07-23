#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    string ID;
    string name;
    string gender;
    string telphoneNum;

public:
    Person() {}
    Person(string IDIn, string nameIn, string genderIn, string telphoneIn)
    {
        this->ID = IDIn;
        this->name = nameIn;
        this->gender = genderIn;
        this->telphoneNum = telphoneIn;
    }
};
#endif // PERSON_H
