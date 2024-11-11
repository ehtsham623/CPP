#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    double balance;
    int accountId;
    string password;

public:
    string userName;
    string subject;

public:
    // non parameterized constructor
    Account()
    {
        cout << "non parameterized constructor of account class" << endl;
        balance = 0;
        subject = "abc";
    }
    // parameterized constructor
    Account(string userName, string s)
    {
        cout << "parameterized constructor of account class" << endl;
        this->userName = userName; // this pointer example
        subject = s;
    }

    // copy custom construtor
    Account(Account &obj) // pass by refernce
    {
        this->userName = obj.userName;
    }
};

int main()
{
    // method overloading example in a1 and a2
    Account a1;
    cout << a1.subject << endl;
    Account a2("Ehtsham", "Bank Account");
    cout << "account details: " << a2.userName << " " << a2.subject << endl;
    Account a3(a2); // copy constructor by default or create custom copy constructor
    cout << "a3 account details: " << a3.userName << " " << a3.subject << endl;

    return 0;
}

// to run add below line in terminal
// g++ constructor.cpp && ./a.out