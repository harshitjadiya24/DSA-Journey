#include <iostream>
using namespace std;

class Solution
{
public:
  vector<int> rearrangeArray(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> negative;
    vector<int> positive;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
      if (nums[i] >= 0)
      {
        positive.push_back(nums[i]);
      }
      else
        negative.push_back(nums[i]);
    }
    int p = 0;
    int ng = 0;
    for (int i = 0; i < n; i++)
    {
      if (i % 2 == 0)
      {
        ans.push_back(positive[p++]);
      }
      else
        ans.push_back(negative[ng++]);
    }
    return ans;
  }
};

// optimal

class Solution
{
public:
  vector<int> rearrangeArray(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> ans(n, 0);
    int posIndex = 0;
    int negIndex = 1;
    for (int i = 0; i < n; i++)
    {
      if (nums[i] < 0)
      {
        ans[negIndex] = nums[i];
        negIndex += 2;
      }
      else
      {
        ans[posIndex] = nums[i];
        posIndex += 2;
      }
    }
    return ans;
  }
};