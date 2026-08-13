class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        int maxDiff = INT_MIN;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n - 1; i++)
        {
            if(nums[i] <= nums[i + 1]) maxDiff = max(maxDiff, abs(nums[i] - nums[i + 1]));
        }
        return maxDiff;
    }
};