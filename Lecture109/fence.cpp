#include <bits/stdc++.h> 
#define MOD 1000000007
int add(int a,int b){
    return (a%MOD+b%MOD)%MOD;
}
int mul(int a,int b){
    return ((a%MOD)*1LL*(b%MOD))%MOD;
}
// int solve(int n,int k){
//     if(n==1)return k;
//     if(n==2)return add(k,mul(k,k-1));
//     int ans=add(mul(solve(n-2,k),k-1),mul(solve(n-1,k),k-1));
//     return ans;
// }

//BY memorisation
// int solveMem(int n,int k,vector<int>&dp){
//     if(n==1)return k;
//     if(n==2)return add(k,mul(k,k-1));
//     if(dp[n]!=-1)return dp[n];
//     dp[n]=add(mul(solveMem(n-2,k,dp),k-1),mul(solveMem(n-1,k,dp),k-1));
//     return dp[n];
// }

//BY TABULATION
// int solveTab(int n,int k){
//     vector<int>dp(n+1,0);
//     dp[1]=k;
//     dp[2]=add(k,mul(k,k-1));
//     for(int i=3;i<=n;i++){
//         dp[i]=add(mul(dp[i-2],k-1),mul(dp[i-1],k-1));
//     }
//     return dp[n];
// }

//BY SPACE OPTIMIZATION
int solveSp(int n,int k){
    int prev1=k;
    int prev2=add(k,mul(k,k-1));
    for(int i=3;i<=n;i++){
        int cur=add(mul(prev1,k-1),mul(prev2,k-1));
        prev1=prev2;
        prev2=cur;
    }
    return prev2;
}
int numberOfWays(int n, int k) {
    // Write your code here.
    // return solve(n,k);
    //T.C->O(N),S.C->O(N)

    // vector<int>dp(n+1,-1);
    // int ans=solveMem(n,k,dp);
    // if(ans==-1)return 0;
    // else
    // return ans;
    //T.C->O(N),S.C->O(N)+O(N)

    // return solveTab(n, k);
    //T.C->O(N),S.C->O(N)+

    return solveSp(n, k);
    //T.C->O(N),S.C->O(1)

}
