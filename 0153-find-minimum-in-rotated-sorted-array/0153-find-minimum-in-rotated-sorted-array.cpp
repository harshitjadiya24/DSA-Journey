class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int small = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] < small) small = nums[i];
        }
        return small;
    }
};