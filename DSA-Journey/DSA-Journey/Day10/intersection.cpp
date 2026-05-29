#include <iostream>
using namespace std;

class Solution
{
public:
  vector<int> intersection(vector<int> &arr1, vector<int> &arr2)
  {
    int n = arr1.size();
    int m = arr2.size();

    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m)
    {
      if (arr1[i] < arr2[j])
      {
        i++;
      }
      else if (arr1[i] > arr2[j])
      {
        j++;
      }
      else
      {
        ans.push_back(arr1[i]);
        i++;
        j++;
      }
    }

    return ans;
  }
};
