class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());

        int n = 0;

        for (int i = nums[0]; i <= nums[nums.size() - 1]; i++) {
            if (n < nums.size() && nums[n] == i) {
                n++;
            } else {
                ans.push_back(i);
            }
        }

        return ans;
    }
};