#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int maximumProduct(vector<int> &nums)
  {
    int n = nums.size();
    int product = 1;
    int count = 0;
    int i = n - 1;
    sort(nums.begin(), nums.end());
    while (count != 3)
    {
      product *= nums[i];
      count++;
    }
    return product;
  }
};