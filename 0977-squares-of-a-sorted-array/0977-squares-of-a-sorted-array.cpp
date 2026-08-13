#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n); // Create a result array of the same size
        
        int left = 0;
        int right = n - 1;
        
        // Fill the result array from back to front
        for (int i = n - 1; i >= 0; i--) {
            // Compare the absolute values of the numbers at both pointers
            if (abs(nums[left]) > abs(nums[right])) {
                result[i] = nums[left] * nums[left];
                left++; // Move the left pointer inwards
            } else {
                result[i] = nums[right] * nums[right];
                right--; // Move the right pointer inwards
            }
        }
        
        return result;
    }
};