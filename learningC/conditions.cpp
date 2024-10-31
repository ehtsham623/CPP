

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter age" << endl;
    cin >> age;

    // if else
    if (age >= 20)
    {
        cout << "adult" << endl;
    }
    else if (age > 12 && age < 20)
    {
        cout << "teen" << endl;
    }
    else
    {
        cout << "child" << endl;
    }

    // ternary operator
    cout << (age > 100 ? "old" : "not old") << endl;
}

// to run add below line in terminal
// g++ conditions.cpp && ./a.out