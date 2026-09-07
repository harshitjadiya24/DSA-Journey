class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int n1, n2;
        for(int i = 2; i < n; i++)
        {
            n1 = arr1.size();
            n2 = arr2.size();
            if(arr1[n1 - 1] > arr2[n2 - 1])
            {
                arr1.push_back(nums[i]);
            }else arr2.push_back(nums[i]);
        }
        n1 = arr1.size();
        n2 = arr2.size();
        for(int i = 0; i < n1; i++)
        {
            nums[i] = arr1[i];
        }
        for(int i = 0; i < n2; i++)
        {
            nums[i + n1] = arr2[i];
        }
        return nums;
    }
};