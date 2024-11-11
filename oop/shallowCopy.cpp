#include <iostream>
#include <string>
using namespace std;

class Account
{

public:
    string userName;
    double sallery;

public:
    Account(string userName, double sallery)
    {
        this->userName = userName;
        this->sallery = sallery;
    }

    // copy custom construtor
    Account(Account &obj) // pass by refernce
    {
        this->userName = obj.userName;
        this->sallery = obj.sallery;
    }
};

int main()
{

    Account a1("Ehtsham", 1000);
    cout << "account details: " << a1.userName << " " << a1.sallery << endl;
    Account a2(a1); // shallow copy
    cout << "account details: " << a2.userName << " " << a2.sallery << endl;

    return 0;
}

// to run add below line in terminal
// g++ shallowCopy.cpp && ./a.out