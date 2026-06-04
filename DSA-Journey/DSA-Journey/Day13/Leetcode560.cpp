#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        for(int i = 0; i < n; i++) {
            int sum = 0;

            for(int j = i; j < n; j++) {
                sum += nums[j];

                if(sum == k) {
                    count++;
                }
            }
        }

        return count;
    }
};

// optimal

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> mpp;
        mpp[0] = 1;
        int prefixSum = 0; int count = 0;
        for(int i = 0; i < n; i++)
        {
            prefixSum += nums[i];
            int remove = prefixSum - k;
            count += mpp[remove];
            mpp[prefixSum] += 1; 
        }
        return count;
    }
};