#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  vector<int> getConcatenation(vector<int> &nums)
  {
    vector<int> a;
    for (int i = 0; i < nums.size(); i++)
    {
      a.push_back(nums[i]);
    }
    for (int i = 0; i < nums.size(); i++)
    {
      a.push_back(nums[i]);
    }
    return a;
  }
};
int main()
{
  cout << "Enter Size of Vector nums: " << endl;
  int size;
  cin >> size;

  vector<int> nums(size);
  cout << "Enter elements for Vector nums: " << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> nums[i];
  }

  Solution solu;
  vector<int> result = solu.getConcatenation(nums);

  cout << "Concatenated Array: ";
  for (int num : result)
  {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}