

#include <iostream>
using namespace std;

int main()
{
    // while loop
    // exp
    int i = 1;
    while (i <= 10)
    {
        cout << i;
        i++;
    }
    cout << " end exp" << endl;
    // exp
    int s = 0;
    int v = 5;
    int j = 1;
    while (j <= v)
    {
        s += j;
        j++;
    }
    cout << s << " end exp" << endl;
    // exp
    // sum of odd and even num from range 1 to y

    int y = 10;
    int odd_Sum = 0;
    int even_Sum = 0;
    int z = 1;
    while (z < y)
    {
        if (z % 2 != 0)
        {
            odd_Sum += z;
        }
        else
        {
            even_Sum += z;
        }
        z++;
    }
    cout << "oddsum: " << odd_Sum << " even sum: " << even_Sum << " end exp" << endl;

    // for loop
    // exp
    for (int i = 1; i <= 5; i++)
    {
        cout << i;
    }
    cout << " end exp" << endl;
    // exp
    int sum = 0;
    int n = 5;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << " end exp" << endl;
    // exp
    // sum of odd and even num from range 1 to x
    int x = 10;
    int oddSum = 0;
    int evenSum = 0;
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 != 0)
        {
            oddSum += i;
        }
        else
        {
            evenSum += i;
        }
    }
    cout << "oddsum: " << oddSum << " even sum: " << evenSum << " end exp" << endl;

    // do while
    // exp
    int k = 1;
    int l = 10;
    do
    {
        cout << k;
        k++;
    } while (k <= l);
    cout << " end exp" << endl;

    // exp
    // number n is prime or not
    int num = 47;
    bool isPrime = true;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    cout << (isPrime == 1 ? "prime number" : "not prime number") << endl;

    // exp
    // print stars
    int line = 5;
    int stars = 5;
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// to run add below line in terminal
// g++ loops.cpp && ./a.out