#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  void sortColors(vector<int> &nums)
  {
    int n = nums.size();
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
      if (nums[i] == 0)
      {
        count0++;
      }
      else if (nums[i] == 1)
      {
        count1++;
      }
      else
      {
        count2++;
      }
    }

    for (int i = 0; i < count0; i++)
    {
      nums[i] = 0;
    }
    for (int i = count0; i < count0 + count1; i++)
    {
      nums[i] = 1;
    }
    for (int i = count0 + count1; i < n; i++)
    {
      nums[i] = 2;
    }
  }
};

// can use bubble sort
// optimal approach Dutch National Flag Algorithm

// 0's - low to mid-1
// 1's - mid to high
// 2's - high+1 to end

class Solution
{
public:
  void sortColors(vector<int> &nums)
  {
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
      if (nums[mid] == 0)
      {
        swap(nums[low], nums[mid]);
        low++;
        mid++;
      }
      else if (nums[mid] == 1)
      {
        mid++;
      }
      else
      {
        swap(nums[mid], nums[high]);
        high--;
      }
    }
  }
};
