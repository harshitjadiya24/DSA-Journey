class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> arr;
        unordered_map<int, int> mpp;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it : mpp)
        {
            if(it.second > 1)
            {
                arr.emplace_back(it.first);
            }
        }
        return arr;
    }
};