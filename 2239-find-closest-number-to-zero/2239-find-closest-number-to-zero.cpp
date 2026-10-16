class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int minD = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (abs(nums[i]) < abs(minD) ||
                (abs(nums[i]) == abs(minD) && nums[i] > minD)) {
                minD = nums[i];
            }
        }

        return minD;
    }
};