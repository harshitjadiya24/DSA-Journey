// union of sorted arrays
#include <iostream>
using namespace std;

class Solution
{
public:
  vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
  {
    int m = nums1.size();
    int n = nums2.size();

    int i = 0, j = 0;
    vector<int> ans;

    while (i < m && j < n)
    {
      if (nums1[i] <= nums2[j])
      {
        if (ans.empty() || ans.back() != nums1[i])
        {
          ans.push_back(nums1[i]);
        }
        i++;
      }
      else
      {
        if (ans.empty() || ans.back() != nums2[j])
        {
          ans.push_back(nums2[j]);
        }
        j++;
      }
    }

    while (i < m)
    {
      if (ans.empty() || ans.back() != nums1[i])
      {
        ans.push_back(nums1[i]);
      }
      i++;
    }

    while (j < n)
    {
      if (ans.empty() || ans.back() != nums2[j])
      {
        ans.push_back(nums2[j]);
      }
      j++;
    }

    return ans;
  }
};