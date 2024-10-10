#include <iostream>
#include<vector>
using namespace std;
void solve(vector<char>num,vector<char>output,int index,vector<vector<char>>&ans){
    if (index>=num.size())
    {
        /*if we dont want null subset then we can write
        if(output.size()>0){
          ans.push_back(output);
        }*/
        ans.push_back(output);
        return;
    }
    //exclude;
    solve(num,output,index+1,ans);
    //include;
    output.push_back(num[index]);
    solve(num,output,index+1,ans);

}
int main(){
    vector<char>num;
    vector<vector<char>>ans;
    vector<char>output;
    int n;
    cin>>n;
    int index=0;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin>>x;
        num.push_back(x);
    }
    solve(num,output,index,ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<",";
        }cout<<endl;
        
    }
    
    return 0;
}