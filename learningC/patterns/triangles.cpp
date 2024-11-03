

#include <iostream>
using namespace std;

void trianglePattern()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
            // cout << i + 1;
        }
        cout << endl;
    }
}

void trianglePattern2()
{
    int n = 9;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void trianglePattern3()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}

void reverseTriangles()
{
    int n = 5;
    for (int i = n; i > 0; i--)
    {
        cout << i;
    }
    cout << endl;
}

void reverseTriangles2()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void floydTriangle()
{
    int n = 4;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}

void invertedTriangle()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}

int main()
{

    //*
    //**
    //***
    trianglePattern();

    // a
    // bb
    // ccc
    trianglePattern2();

    // 1
    // 12
    // 123
    // 1234
    trianglePattern3();

    // reverse triangles
    // 54321
    reverseTriangles();

    // 1
    // 21
    // 321
    // 4321
    reverseTriangles2();

    // 1
    // 23
    // 456
    floydTriangle();

    // 1111
    //  222
    //   33
    //    4
    invertedTriangle();

    return 0;
}

// to run add below line in terminal
// g++ triangles.cpp && ./a.out