#include <iostream>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int prod;
        sort(nums.begin(), nums.end());
        prod = (nums[n-1]-1) * (nums[n-2]-1);
        return prod;
    }
};