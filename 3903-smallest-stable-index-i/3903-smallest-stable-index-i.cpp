class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int ans;
        for(int i = 0; i < n; i++)
        {
            int maxItem = INT_MIN;
            int minItem = INT_MAX;
            for(int j = 0; j <= i; j++)
            {
                maxItem = max(maxItem, nums[j]);
            }
            for(int k = i; k < n; k++)
            {
                minItem = min(minItem, nums[k]);
            }
            ans = maxItem - minItem;
            if(ans <= k) return i;
        }
        return -1;
    }
};