#include<iostream>
using namespace std;

// count of digits in a number
// sum of digits in a number
// same logic
// o(log10n) time complexity

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Digits in the number: ";
    while(n != 0)
    {
        int digit = n % 10;
        cout << digit << " ";
        n /= 10;
    }
    cout << endl;

    return 0;
}