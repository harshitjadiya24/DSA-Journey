#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int area;
        int maxArea = 0;
        int length, breadth;
        for(int i=0; i<height.size(); i++)
        {
            for(int j=i+1; j<height.size(); j++)
            {
                length = min(height[i], height[j]);
                breadth = j-i;
                area = length * breadth;
                if (area > maxArea)
                {
                    maxArea = area;
                }
            }
        }
        return maxArea;
    }
};

// optimized 

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int start = 0;
        int area;
        int end = height.size() - 1;
        while(start < end)
        {
            area = min(height[start], height[end]) * (end-start);
            if(area > maxArea)
            {
                maxArea = area;
            }
            if(height[start] < height[end])
            {
                start++;
            }
            else if(height[start] > height[end])
            {
                end--;
            }

        }
        return maxArea;
    }
};