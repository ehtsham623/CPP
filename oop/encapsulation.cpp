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
};
int main()
{
    Account t1;

    return 0;
}
// to run add below line in terminal
// g++ encapsulation.cpp && ./a.out