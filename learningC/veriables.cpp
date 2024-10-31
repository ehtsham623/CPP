

#include <iostream>
using namespace std;

int main()
{
    // veriables
    int age = 10;
    char character = 'H';
    float PI = 3.14;
    bool isPass = false;
    double largeNum = 10.99;

    // type casting
    // implicit(conversion)
    int a = 10;
    double b = a;

    // explicit(casting)
    double x = 100.90;
    int y = (int)x;

    cout << y << endl;

    // operators
    cout << 1 + 2 << endl;
    cout << 2 / 2 << endl;
    cout << 5 / 2 << endl;         // int
    cout << 5 / (double)2 << endl; // double // done by type casting
    cout << 5 % 2 << endl;
    cout << (5 < 2) << endl;
    cout << (5 > 2) << endl;
    cout << (5 == 2) << endl;
    cout << !(5 == 2) << endl;
    cout << ((5 == 2) || (2 == 2)) << endl;
    cout << ((5 == 2) && (2 == 2)) << endl;
    int value = 10;
    int valueTwo = 10;
    cout << value++ << endl;
    cout << value-- << endl;

    int updatedValue = value++;
    int updatedValueTwo = ++valueTwo;

    cout << updatedValue << endl;
    cout << updatedValueTwo << endl;
}

// to run add below line in terminal
// g++ verialbes.cpp && ./a.out