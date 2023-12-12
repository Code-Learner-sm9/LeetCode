#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
  vector<int> getConcatenation(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> a(2*n);
    for(int i =0;i<n;i++)
    {
      a[i] = nums[i];
      a[i+n] = nums[i];
    }
    return a;
  }

};
int main()
{
  cout<<"Enter Size of Vector nums: "<<endl;
  int size;
  cin>>size;

  vector<int> nums(size);
  cout<<"Enter elements for Vector nums: "<<endl;
  for(int i=0;i<size;i++)
  {
    cin>>nums[i];
  }

  Solution solu;
  vector<int> result = solu.getConcatenation(nums);

  cout<<"Concatenated Array: ";
  for(int num: result)
  {
    cout<<num<<" ";
  }
  cout<<endl;

  return 0;
}