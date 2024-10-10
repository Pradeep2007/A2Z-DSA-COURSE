#include <iostream>
#include<vector>
using namespace std;
void solve(vector<int>num,vector<int>output,int index,vector<vector<int>>&ans){
    if (index>=num.size())
    {
        ans.push_back(output);
        return;
    }
    solve(num,output,index+1,ans);
    output.push_back(num[index]);
    solve(num,output,index+1,ans);
}
int main(){
    vector<int>num;
    vector<vector<int>>ans;
    vector<int>output;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        num.push_back(x);
    }
    int index=0;
    solve(num,output,index,ans);
    for (int i = 0; i < ans.size(); i++){
        for (int j = 0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<",";
        }cout<<endl;
        
    }

}