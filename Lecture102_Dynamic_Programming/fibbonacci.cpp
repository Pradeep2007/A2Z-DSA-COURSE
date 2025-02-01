
// TOP-DOWN APPROACH
//ITS T.C IS O(N) AND S.C IS 0(N)
#include<bits/stdc++.h>
using namespace std;
int func(int n,vector<int>&dp){
        if(n<=1){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }

        dp[n]=func(n-1,dp)+func(n-2,dp);
      
}
int main()
{
       int n;
       cin>>n;
       vector<int>dp(n+1);
       for(int i=0;i<=n;i++){
               dp[i]=-1;
       }
       cout<<func(n,dp)<<endl;
       return 0;
}

//TANULATION APP
//ITS T.C IS O(N) AND S.C IS 0(N)
#include<bits/stdc++.h>
using namespace std;
int main()
{
       int n;
       cin>>n;
       vector<int>dp(n+1);
       dp[0]=0;
       dp[1]=1;
       for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
       }
       cout<<dp[n]<<endl;
       return 0;
}

//SPACE OPTIMIZATION
//ITS T.C IS O(N) AND S.C IS 0(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
       int n;
       cin>>n;
       int prev1=1;
       int prev2=0;
       for(int i=2;i<=n;i++){
            int curr=prev1+prev2;
            prev2=prev1;
            prev1=curr;
       }
       cout<<prev1<<endl;
       return 0;
}