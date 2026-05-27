#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    int original = n;

    cout << "Digits in the number: ";
    while(n != 0)
    {
        int digit = n % 10;
        sum += digit * digit * digit; 
        cout << digit << " ";
        n /= 10;
    }
    if(sum == original)
    {
        cout << "\nThe number is an armstrong number." << endl;
    }
    else
    {
        cout << "\nThe number is not an armstrong number." << endl;
    }
    cout << endl;

    return 0;
}