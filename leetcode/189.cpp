#include <iostream>
#include<vector>
using namespace std;

int main(){
vector<int> nums={1,2,3,4,5};
int n;
cout<<"Enter the value of n\n";
cin>>n;
vector<int> temp(nums.size());
for (int i = 0; i <nums.size(); i++)
{
    temp[(i+n)%nums.size()]=nums[i];
}
  nums=temp;
  for (int i = 0; i < nums.size(); i++)
  {
    cout<<nums[i]<<" ";
  }
  
    return 0;
}