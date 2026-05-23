#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
  int selectionSort(vector<int> &nums)
  {
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
      int smallestIdx = i;
      for (int j = i + 1; j < n; j++)
      {
        if (nums[j] < smallestIdx)
        {
          smallestIdx = j;
        }
      }
      swap(nums[i], nums[smallestIdx]);
    }
    return nums[n-1];
  }
};