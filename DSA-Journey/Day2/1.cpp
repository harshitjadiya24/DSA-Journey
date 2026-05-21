#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> ans;
  ans.push_back(9);
  int x = ans.size();
  ans[x - 1] = ans[x - 1] + 1;
}
