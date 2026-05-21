// find the index of largest and smallest element

#include <iostream>
using namespace std;

int main()
{
  int sizeOfArray;
  int target = 50;
  int index1;
  cin >> sizeOfArray;
  int arr[sizeOfArray];

  for (int i = 0; i < sizeOfArray; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < sizeOfArray; i++)
  {
    if (arr[i] == target)
    {
      index1 = i;
    }
    else
    {
      index1 = -1;
    }
  }
  cout << "Target number index is " << index1 << endl;
}
