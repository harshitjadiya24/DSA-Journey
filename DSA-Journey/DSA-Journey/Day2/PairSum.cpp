#include <iostream>
#include <vector>
using namespace std;

// vector<pair<int, int>> pairSum(vector<int> nums, int target)
// {
//   vector<pair<int, int>> ans;
//   int count = 0;
//   for (int i = 0; i < nums.size(); i++)
//   {
//     for (int j = i + 1; j < nums.size(); j++)
//     {
//       if (nums[i] + nums[j] == target)
//       {
//         ans.push_back({nums[i], nums[j]});
//       }
//     }
//   }
//   return ans;
// }

// int main()
// {
//   vector<int> nums = {2, 7, 5, 8};
//   int target = 9;
//   vector<pair<int, int>> ans = pairSum(nums, target);
//   for (int i = 0; i < ans.size(); i++)
//   {
//     cout << ans[i].first << " " << ans[i].second << endl;
//   }
// }

// optimized approach
// 2 pointer approach

vector<pair<int, int>> pairSum(vector<int> nums, int target)
{
  vector<pair<int, int>> ans;
  int start = 0;
  int end = nums.size() - 1;
  sort(nums.begin(), nums.end());
  while (start < end)
  {
    if (nums[start] + nums[end] > target)
    {
      end--;
    }
    else if (nums[start] + nums[end] < target)
    {
      start++;
    }
    else
    {
      ans.push_back({nums[start], nums[end]});
      start++;
      end--;
    }
  }
  return ans;
}

int main()
{
  vector<int> nums = {8, 6, 4, 5};
  int target = 9;
  vector<pair<int, int>> ans = pairSum(nums, target);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i].first << " " << ans[i].second << endl;
  }
}
