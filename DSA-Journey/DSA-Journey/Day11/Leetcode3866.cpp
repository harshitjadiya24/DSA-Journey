#include <iostream>
using namespace std;

class Solution
{
public:
  int firstUniqueEven(vector<int> &nums)
  {
    unordered_map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] % 2 == 0)
        mpp[nums[i]]++;
    }
    for (int num : nums)
    {
      if (mpp[num] == 1)
      {
        return num;
      }
    }
    return -1;
  }
};