#include <iostream>
using namespace std;

class Solution
{
public:
  vector<int> leftRightDifference(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> rightSum;
    vector<int> leftSum;
    vector<int> ans;
    int rightsum = 0;
    int leftsum = 0;
    for (int i = 0; i < n; i++)
    {
      if (i == 0)
      {
        leftSum.push_back(0);
      }
      else
      {
        leftsum += nums[i - 1];
        leftSum.push_back(leftsum);
      }
    }
    for (int i = n - 1; i >= 0; i--)
    {
      if (i == n - 1)
      {
        rightSum.push_back(0);
      }
      else
      {
        rightsum += nums[i + 1];
        rightSum.push_back(rightsum);
      }
    }
    reverse(rightSum.begin(), rightSum.end());
    for (int i = 0; i < n; i++)
    {
      ans.push_back(abs(leftSum[i] - rightSum[i]));
    }
    return ans;
  }
};