#include <iostream>
#include<vector>
using namespace std;
void solve(vector<char>num,vector<vector<char>>&ans,int index){
    if (index>=num.size())
    {
        ans.push_back(num);
        return;
    }
    for (int j = index; j < num.size(); j++)
    {
       swap(num[index],num[j]);
       solve(num,ans,index+1);
       //backtracking
       swap(num[index],num[j]); 
    }
    
}
int main(){
    vector<char>num;
    vector<vector<char>>ans;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin>>x;
        num.push_back(x);
    }
    int index=0;
    solve(num,ans,index);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<ans[i][j]<<",";
        }
        cout<<endl;
    }
    
    return 0;
}