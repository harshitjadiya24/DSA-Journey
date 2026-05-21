// reverse the array

#include <iostream>
using namespace std;

int main()
{
  int sizeOfArray;
  cout << "Write the size: ";
  cin >> sizeOfArray;

  int arr[sizeOfArray];

  for (int i = 0; i < sizeOfArray; i++)
  {
    cin >> arr[i];
  }

  int start = 0;
  int end = sizeOfArray - 1;

  while (start < end)
  {
    swap(arr[start], arr[end]);

    start++;
    end--;
  }

  for (int i = 0; i < sizeOfArray; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}