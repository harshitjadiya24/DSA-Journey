class Solution {
public:
    int findLucky(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int maximum = INT_MIN;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it : mpp)
        {
            if(it.second == it.first)
            {
                maximum = max(maximum, it.first);
            }
        }
        if(maximum == INT_MIN)
        return -1;
        else return maximum;
    }
};