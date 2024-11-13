#include <iostream>
#include <string>
using namespace std;

class A
{
private:
    int v;

public:
    A()
    {
        v = 10;
    }

    friend class B;
};

class B
{
public:
    void method(A &a)
    {
        cout << a.v << " -> it is friend v value" << endl;
    }
};

int main()
{
    A a;
    B b;

    b.method(a);
    return 0;
}

// to run add below line in terminal
// g++ friendClass.cpp && ./a.out
