

#include <iostream>
using namespace std;

void squarePattern()
{
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

void squarePattern2()
{
    int n = 5;
    for (int i = 0; i <= n - 1; i++)
    {
        char ch = 'a';
        for (int j = 0; j <= n - 1; j++)
        {
            cout << ch;
            ch += 1;
        }
        cout << endl;
    }
}

void squarePattern3()
{
    int n = 9;
    int col = 3;
    for (int i = 0; i < n; i += col)
    {
        for (int j = 0; j < col; j++)
        {
            cout << i + 1 + j;
            if (i + 1 + j == n)
            {
                break;
            }
        }
        cout << endl;
    }
}

int main()
{
    // square pattern print *
    squarePattern();

    // square pattern print abcde
    squarePattern2();

    // square pattern print to given numbers by n cols
    // 123
    // 456
    // 789
    squarePattern3();

    return 0;
}

// to run add below line in terminal
// g++ square.cpp && ./a.out