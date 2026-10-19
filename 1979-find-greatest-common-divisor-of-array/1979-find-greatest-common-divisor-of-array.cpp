class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxi = INT_MIN;
        for(int i = 1; i <= nums[nums.size() - 1]; i++)
        {
            if(nums[0] % i == 0 && nums[nums.size() - 1] % i == 0){
                maxi = max(maxi, i);
            }
        }
        return maxi;
    }
};