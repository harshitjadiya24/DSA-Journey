#include <iostream>
using namespace std;

int sum(int size, int arr[])
{
  int sum = 0;
  int b;
  for (b = 0; b < size; b++)
  {
    sum += arr[b];
  }
  return sum;
}
int product(int size, int arr[])
{
  int product = 1;
  int p;
  for (p = 0; p < size; p++)
  {
    product *= arr[p];
  }
  return product;
}

int main()
{
  int size;
  cin >> size;
  int arr[size];
  int totalSum;
  int totalProduct;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  totalSum = sum(size, arr);
  totalProduct = product(size, arr);
  cout << "Sum is " << totalSum << endl;
  cout << "Product is " << totalProduct << endl;
}