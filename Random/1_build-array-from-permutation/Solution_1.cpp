#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
  vector<int> buildArray(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> a(n);
    for(int i=0;i<nums.size();i++)
    {
      a[i] = nums[nums[i]];
    }
    return a;
  }

};
int main()
{
  cout<<"Enter Size: ";
  int size;
  cin>>size;

  cout<<"Enter Elements: ";
  vector<int> nums(size);
  for(int i=0;i<size;i++)
  {
    cin>>nums[i];
  }
  Solution solu;
  vector<int> result = solu.buildArray(nums);

  cout<<"Build Array: "<<endl;
  for(int num: result)
  {
    cout<<num<<" ";
  }
  cout<<endl;
  
  return 0;
}