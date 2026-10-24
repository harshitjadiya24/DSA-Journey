class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            elementSum += nums[i];
        }
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            int r;
            while(nums[i] > 0)
            {
                r = nums[i] % 10;
                nums[i] /= 10;
                sum += r;
            }
        }
        return abs(sum - elementSum);
    }
};