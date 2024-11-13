#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "draw circle" << endl;
    };
};

int main()
{
    Circle c;
    c.draw();
    return 0;
}

// to run add below line in terminal
// g++ abstract.cpp && ./a.out