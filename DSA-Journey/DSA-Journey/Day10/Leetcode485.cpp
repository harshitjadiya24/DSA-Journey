#include <iostream>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int prevCount = 0;
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 1)
            {
                count++;
                prevCount = max(prevCount, count);
            }
            else
            {
                count = 0;
            }
        }
        return prevCount;
    }
};