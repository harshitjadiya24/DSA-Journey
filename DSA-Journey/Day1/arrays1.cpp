// find the index of largest and smallest element

#include <iostream>
using namespace std;

int main()
{
  int sizeOfArray;
  int index1;
  int index2;
  cin >> sizeOfArray;
  int arr[sizeOfArray];
  int smallest = INT_MAX;
  int largest = INT_MIN;

  for (int i = 0; i < sizeOfArray; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < sizeOfArray; i++)
  {
    if (arr[i] < smallest)
    {
      smallest = arr[i];
      index1 = i;
    }
    if (arr[i] > largest)
    {
      largest = arr[i];
      index2 = i;
    }
  }
  cout << "Index of smallest number is " << index1 << endl;
  cout << "Index of largest number is " << index2 << endl;
}
