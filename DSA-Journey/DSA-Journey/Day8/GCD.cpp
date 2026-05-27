#include<iostream>
using namespace std;

// euclid's algorithm for finding gcd of two numbers

int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

int main()
{
    int a = 24, b = 18;

    cout << "GCD = " << gcd(a, b);

    return 0;
}