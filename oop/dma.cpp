#include <iostream>
#include <string>
using namespace std;

int main()
{
    //////// dynamic memory allocation ///////////

    int *ptr;      // pointer created
    ptr = new int; // allocating memory for integer
    *ptr = 10;     // pointer has value //*ptr is derefernce
    cout << "Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;

    delete ptr;
    return 0;
}

// to run add below line in terminal
// g++ dma.cpp && ./a.out