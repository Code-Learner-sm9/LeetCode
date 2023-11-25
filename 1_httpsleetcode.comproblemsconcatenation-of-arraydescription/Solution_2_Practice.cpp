#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<int> getConcatenation(vector<int> &nums)
    {
      int n = nums.size();
      vector<int> a(2*n);
      for(int i=0;i<n;i++)
      {
        a[i] = nums[i];
        a[i+n] = nums[i];
      }
      return a;
    }
  
};
int main()
{
  Solution solution;
  vector<int> nums={1,2,3};
  vector<int> result = solution.getConcatenation(nums);

  cout<<"Concatenated Array: "<<endl;
  for(int num: result)
  {
    cout<<num<<" ";
  }
  cout<<endl;

  
  return 0;
}