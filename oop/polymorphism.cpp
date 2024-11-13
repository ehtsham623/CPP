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

    virtual void hello()
    {
        cout << "hello from parent" << endl;
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "Child class" << endl;
    }
    void hello()
    {
        cout << "hello from child" << endl;
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
    // runtime // virtual
    c.hello();
    return 0;
}

// to run add below line in terminal
// g++ polymorphism.cpp && ./a.out