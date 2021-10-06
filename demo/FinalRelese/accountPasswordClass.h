#ifndef ACCOUNTPASSWORDCLASS_H
#define ACCOUNTPASSWORDCLASS_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#define MAXSIZE 40
using namespace std;
class Account_Password
{
protected:
    string account;
    string password;

public:
    Account_Password() {}
    Account_Password(string account_in, string password_in)
    {
        this->account = account_in;
        this->password = password_in;
    }
    Account_Password(const Account_Password &in)
    {
        this->account = in.account;
        this->password = in.password;
    }
    bool Judge_exist(Account_Password account_exist)
    {
        bool is_correct;
        if ((account_exist.account == (this->account)) && (account_exist.password == (this->password)))
        {
            is_correct = true;
            return is_correct;
        }
        is_correct = false;
        return is_correct;
    }
    int Modify(string password_in)
    {
        this->password = password_in;
        return 0;
    }
    void setAccount(string account)
    {
        this->account = account;
    }
    void setPassword(string password)
    {
        this->password = password;
    }
    string getAccount()
    {
        return this->account;
    }
    string getPassword()
    {
        return this->password;
    }

    friend class Account_group;
};

class Account_group
{
private:
    vector<Account_Password> groups;

public:
    Account_group() {}
    int SearchAccountFromAccount(string Account)
    {
        for (unsigned int i = 0; i < groups.size(); i++)
        {
            if (groups[i].account == Account)
                return i;
        }
        return -1;
    }

    bool Modify(string IDIn, string newPassword) //
    {
        if (SearchAccountFromAccount(IDIn) == -1)
            return false;
        groups[SearchAccountFromAccount(IDIn)].password = newPassword;
        return true;
    }
    int write_file(const string file_name)
    {
        ofstream w_file(file_name);
        if (!w_file)
        {
            cout << "404 not fount" << endl;
            return 0;
        }
        w_file << groups.size();
        w_file << " ";
        for (unsigned int i = 0; i < groups.size(); i++)
        {
            w_file << groups[i].getAccount();
            w_file << " ";
            w_file << groups[i].getPassword();
            w_file << endl;
        }
        w_file.close();
        return 0;
    }
    int read_file(const string file_name)
    {
        ifstream r_file(file_name);
        int num = 0;
        if (!r_file)
        {
            cout << "404 not fount" << endl;
            return 0;
        }
        string tempAccount;
        string tempPassword;
        r_file >> num;
        for (int i = 0; i < num; i++)
        {
            r_file >> tempAccount;
            r_file >> tempPassword;
            Account_Password tempA(tempAccount, tempPassword);
            groups.push_back(tempA);
        }
        r_file.close();
        return 1;
    }
    void display()
    {
        for (unsigned int i = 0; i < this->groups.size(); i++)
        {
            cout << " 账户:" << this->groups[i].account;
            cout << " 密码:" << this->groups[i].password << endl;
        }
    }
    bool del(string ID)
    {
        if (SearchAccountFromAccount(ID) == -1)
            return false;
        groups.erase(groups.begin() + SearchAccountFromAccount(ID));
        return true;
    }
    bool add(string account, string password)
    {
        Account_Password tempAccount(account, password);
        groups.push_back(tempAccount);
        return true;
    }
    bool logIn(string account_in, string password_in)
    {
        Account_Password tempAccount(account_in, password_in);
        for (unsigned int i = 0; i < groups.size(); i++)
        {
            if (tempAccount.Judge_exist(groups[i]))
            {
                return true;
            }
        }
        return false;
    }
    string getPassword(string id)
    {
        return groups[SearchAccountFromAccount(id)].getPassword();
    }
    vector<Account_Password> getGroups(){
        return this->groups;
    }
};
#endif // ACCOUNTPASSWORDCLASS_H
