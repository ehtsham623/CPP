#include <iostream>
#include <string>
using namespace std;

class Account
{

public:
    string userName;
    double *ptrSallery;

public:
    Account(string userName, double sallery)
    {
        this->userName = userName;
        ptrSallery = new double;
        *ptrSallery = sallery;
    }

    Account(Account &obj)
    {
        this->userName = obj.userName;
        ptrSallery = new double;
        *ptrSallery = *obj.ptrSallery;
    }
};

int main()
{

    Account a1("Ehtsham", 1000);
    Account a2(a1);
    cout << "account details: " << a1.userName << " " << *a1.ptrSallery << endl;
    cout << "account details: " << a2.userName << " " << *a2.ptrSallery << endl;

    *(a2.ptrSallery) = 2000;
    cout << "account details: " << a1.userName << " " << *a1.ptrSallery << endl;
    cout << "account details: " << a2.userName << " " << *a2.ptrSallery << endl;
    return 0;
}

// to run add below line in terminal
// g++ deepCopy.cpp && ./a.out