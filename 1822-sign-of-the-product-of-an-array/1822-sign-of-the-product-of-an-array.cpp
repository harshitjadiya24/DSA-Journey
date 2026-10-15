class Solution {
public:
    int signFunc(int x) {
        if (x > 0) return 1;
        else if (x < 0) return -1;
        else return 0;
    }

    int arraySign(vector<int>& nums) {
        int product = 1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) return 0;

            if (nums[i] < 0)
                product *= -1;
        }

        return signFunc(product);
    }
};