#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(int i = 0; i < n; i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it : mpp)
        {
            if(it.second > n/3)
            ans.push_back(it.first);
        }
        return ans;
    }
};

//optimal

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int el1 = 0, el2 = 0;

        for(int num : nums) {
            if(cnt1 == 0 && num != el2) {
                el1 = num;
                cnt1 = 1;
            }
            else if(cnt2 == 0 && num != el1) {
                el2 = num;
                cnt2 = 1;
            }
            else if(num == el1) {
                cnt1++;
            }
            else if(num == el2) {
                cnt2++;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }

        cnt1 = 0;
        cnt2 = 0;

        for(int num : nums) {
            if(num == el1) cnt1++;
            else if(num == el2) cnt2++;
        }

        vector<int> ans;
        if(cnt1 > nums.size() / 3) ans.push_back(el1);
        if(cnt2 > nums.size() / 3) ans.push_back(el2);

        return ans;
    }
};