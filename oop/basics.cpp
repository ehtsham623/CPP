#include <iostream>
#include <string>
using namespace std;

class Teacher
{
    // properties,attributes
private:
    double sallery;

public:
    string name;
    string dpt;
    string subject;

    // methods,member functions
    void changeDpt(string newDpt)
    {
        dpt = newDpt;
    }

    // setters
    void setSallery(double s)
    {
        sallery = s;
    }
    // getters
    double getSallery()
    {
        return sallery;
    }
};
int main()
{
    // object for teachers eg t1,t2
    Teacher t1;
    Teacher t2;

    t2.name = "ehtsham";
    cout << t2.name << endl;
    t2.setSallery(2000);
    cout << t2.getSallery() << endl;
    return 0;
}
// to run add below line in terminal
// g++ basics.cpp && ./a.out