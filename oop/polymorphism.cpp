#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;

    Student(string name, int rollNo)
    {
        cout << name << endl
             << rollNo << endl;
    }
    Student()
    {
        cout << "constructor" << endl;
    }
};

class Parent
{
public:
    void getInfo()
    {
        cout << "Parent class" << endl;
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "Child class" << endl;
    }
};
int main()
{
    // compile time // method overloading
    Student s1("eht", 123);
    Student s2;
    // runtime // method overriding
    Child c;
    c.getInfo();
    return 0;
}

// to run add below line in terminal
// g++ polymorphism.cpp && ./a.out