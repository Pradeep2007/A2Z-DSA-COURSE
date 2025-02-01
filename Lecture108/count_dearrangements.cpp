#include<bits/stdc++.h>
#define MOD 1000000007

//by memorisation
// long long int solveMem(int n,vector<int>&dp){
//     if(n==1)return 0;
//     if(n==2)return 1;
//     if(dp[n]!=-1)return dp[n];
//     dp[n]=(((n-1)%MOD)*((solveMem(n-1,dp))%MOD + (solveMem(n-2,dp))%MOD))%MOD;
//     return dp[n];
// }

//by tabulation
long long int solveTab(int n){
    vector<long long int>dp(n+1,0);
    dp[1]=0;
    dp[2]=1;
    for(int i=3;i<=n;i++){
        dp[i]=(((i-1)%MOD)*((dp[i-1])%MOD + (dp[i-2])%MOD))%MOD;
    }
    return dp[n];
}

//by space optimization
long long int solveSp(int n){
    long long int prev1=0;
    long long int prev2=1;
    for(int i=3;i<=n;i++){
        long long int cur=(((i-1)%MOD)*((prev1%MOD) + (prev2%MOD)))%MOD;
        prev1=prev2;
        prev2=cur;
    }
    return prev2;
}
long long int countDerangements(int n) {
    //by recurssion
    // Write your code here.
    // if(n==1)return 0;
    // if(n==2)return 1;
    // int ans=(((n-1)%MOD)*((countDerangements(n-1))%MOD + (countDerangements(n-2))%MOD))%MOD;

    // vector<int>dp(n+1,-1);
    // int ans=solveMem(n,dp);
    // if(ans==-1)return 0;
    // else return ans;

    // return solveTab(n);

    return solveSp(n);
}