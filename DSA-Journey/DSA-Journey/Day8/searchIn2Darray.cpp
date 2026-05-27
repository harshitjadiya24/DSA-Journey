#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();
        int n = matrix[0].size();

        int startRow = 0;
        int endRow = m - 1;
        int midRow = 0;

        while(startRow <= endRow)
        {
            midRow = startRow + (endRow - startRow) / 2;

            if(target >= matrix[midRow][0] &&
               target <= matrix[midRow][n - 1])
            {
                break;
            }
            else if(target < matrix[midRow][0])
            {
                endRow = midRow - 1;
            }
            else
            {
                startRow = midRow + 1;
            }
        }

        if(startRow > endRow)
        {
            return false;
        }

        int st = 0;
        int end = n - 1;

        while(st <= end)
        {
            int mid = st + (end - st) / 2;

            if(matrix[midRow][mid] == target)
            {
                return true;
            }
            else if(matrix[midRow][mid] < target)
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return false;
    }
};