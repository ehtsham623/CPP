#include <iostream>
using namespace std;

void method()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        cout << i << endl;
    }
}

int main()
{

    method();

    return 0;
}

// to run add below line in terminal
// g++ butterfly.cpp && ./a.out