#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
using namespace std;

#define min_balance 500
class insuficient{};

class account{
    string firstname;
    string lastname;
    long accnumber;
    float balance;
    static long nextaccnumber;
    public:
    account(){};
    account(string fn,string ln,float bal);
    string getfn(){return firstname;}
    string getln(){return lastname;}
    long getaccno(){return accnumber;}
    flaot getbal(){return balance;}
    void deposit(float amount);
    void withdraw(float amount);
    static void setlastaccno(long accnumber);
    stactic long getlastaccno();
    friend ofstream & operator<<(ofstream &ofs,account &acc);
    friend ifstream & operator>>(ofstream &ifs,account &acc);
    friend ostream & operator<<(ostream &os,account &acc);
};
long account::nextaccnumber=13320803120;

class bank{
    map<long,account> accounts;
    public:
    bank(){};
    Account OpenAccount(string fname,string lname,float balance);
    Account BalanceEnquiry(long accountNumber);
    Account Deposit(long accountNumber,float amount);
    Account Withdraw(long accountNumber,float amount);
    void CloseAccount(long accountNumber);
    void ShowAllAccounts();
    ~Bank();
};
