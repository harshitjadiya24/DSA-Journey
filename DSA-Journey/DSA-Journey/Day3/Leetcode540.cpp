#include <iostream>
#include <vector>
using namespace std;

// class Solution
// {
// public:
//   int singleNonDuplicate(vector<int> &nums)
//   {
//     int n = nums.size();
//     for (int i = 0; i < n; i++)
//     {
//       int count = 0;
//       for (int j = 0; j < n; j++)
//       {
//         if (nums[i] == nums[j])
//         {
//           count++;
//         }
//       }
//       if (count == 1)
//       {
//         return nums[i];
//       }
//     }
//   }
// };


//optimized

class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int n = nums.size();

        int st = 0;
        int end = n - 1;

        while (st < end)
        {
            int mid = st + (end - st) / 2;

            if (mid % 2 == 1)
            {
                mid--;
            }

            if (nums[mid] == nums[mid + 1])
            {
                st = mid + 2;
            }
            else
            {
                end = mid;
            }
        }

        return nums[st];
    }
};