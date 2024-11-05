#include <iostream>
using namespace std;

void method1()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        for (int j = i; j > 0; j--)
        {
            if (j == 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            if (j == 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        for (int j = i - 1; j > 0; j--)
        {
            if (j == 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}

void method2()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0)
        {
            for (int j = 0; j < i * 2 - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != n - 2)
        {
            for (int j = 0; j < 2 * (n - i) - 5; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{

    method1();
    method2();

    return 0;
}

// to run add below line in terminal
// g++ hollowDiamond.cpp && ./a.out