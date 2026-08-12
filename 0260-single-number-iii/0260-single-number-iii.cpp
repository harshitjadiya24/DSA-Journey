class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;
        unordered_map<int, int> mpp;
        for(int i = 0; i < n; i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it : mpp)
        {
            if(it.second == 1) arr.push_back(it.first);
        }
        return arr;
    }
};