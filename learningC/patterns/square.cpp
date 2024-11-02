

#include <iostream>
using namespace std;

int main()
{
    // square pattern

    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// to run add below line in terminal
// g++ square.cpp && ./a.out