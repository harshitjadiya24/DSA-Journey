class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r = 0, sum = 0, length = INT_MAX;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
            while(sum >= target)
            {   
                length = min(length, i - l + 1);
                sum -= nums[l];
                l++;
            }
        }
        return length == INT_MAX ? 0 : length;
    }
};