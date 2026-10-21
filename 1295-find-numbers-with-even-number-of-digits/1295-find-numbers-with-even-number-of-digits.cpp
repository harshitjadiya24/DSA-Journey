class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            int count = 0, r;
            while(nums[i] > 0)
            {
                r = nums[i] % 10;
                count++;
                nums[i] /= 10;
            }
            if(count % 2 == 0) ans++;
        }
        return ans;
    }
};