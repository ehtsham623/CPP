#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Student : public Person
{
public:
        int rollNo;

    Student(string name, int age, int rollNo) : Person(name, age)
    {
        this->rollNo = rollNo;
        cout << name << endl
             << age << endl
             << rollNo << endl;
    }
};

int main()
{
    Student s1("eht", 27, 123);

    return 0;
}

// to run add below line in terminal
// g++ inheritance.cpp && ./a.out