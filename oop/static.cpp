#include <iostream>
#include <string>
using namespace std;

void fun()
{
    static int x = 0;
    cout << "fun " << x << endl;
    x++;
}
int main()
{
    fun();
    fun();
    return 0;
}

// to run add below line in terminal
// g++ static.cpp && ./a.out
// g++ -std=c++11 static.cpp && ./a.out