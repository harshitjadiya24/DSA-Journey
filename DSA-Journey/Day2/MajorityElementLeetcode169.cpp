#include <iostream>
#include <vector>
using namespace std;

int freq(vector<int> &nums)
{
  for (int i = 0; i < nums.size(); i++)
  {
    int count = 0;
    for (int j = 0; j < nums.size(); j++)
    {
      if (nums[i] == nums[j])
        count++;
      if (count > nums.size() / 2)
      {
        return nums[i];
      }
    }
  }
  return -1;
}

int main()
{
  vector<int> nums = {2, 1, 1, 1, 2};
  int ans = freq(nums);
  cout << ans << endl;
}

// Moore's Algo
// int main()
// {
//   int freq = 0;
//   int ans = 0;
//   for (int i = 0; i < nums.size(); i++)
//   {
//     if (freq == 0)
//     {
//       ans = nums[i];
//     }
//     if (ans == nums[i])
//     {
//       freq++;
//     }
//     else
//     {
//       freq--;
//     }
//   }
//   return ans;
// }