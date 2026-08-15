class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int l = 0, length = 0;
        int n = nums.size();
        unordered_map<int, int> mpp;
        for(int i = 0; i < n; i++)
        {
            mpp[nums[i]]++;
            while(mpp[nums[i]] > k)
            {
                mpp[nums[l]]--;
                l++;
            }
            length = max(length, i - l + 1);
        }
        return length;
    }
};