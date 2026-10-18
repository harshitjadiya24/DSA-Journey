class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
        {
            int sum = 0, r;
            while(nums[i] > 0)
            {
                r = nums[i] % 10;
                nums[i] = nums[i] / 10;
                sum += r;
            }
            nums[i] = sum;
        }
        sort(nums.begin(), nums.end());
        return nums[0];
    }
};