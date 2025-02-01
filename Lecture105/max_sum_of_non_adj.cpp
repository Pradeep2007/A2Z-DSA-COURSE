#include <bits/stdc++.h> 
//by recurssion
// int solve(vector<int> &nums,int n){
//     if(n<0)return 0;
//     if(n==0)return nums[n];
//     int inc=nums[n]+solve(nums,n-2);
//     int exc=solve(nums,n-1)+0;
//     return max(inc,exc);
// }

//recurssion+memorisation
// int solveDp(vector<int> &nums,int n,vector<int>&dp){
//     if(n<0)return 0;
//     if(n==0)return nums[n];
//     if(dp[n]!=-1)return dp[n];
//     int inc=nums[n]+solveDp(nums,n-2,dp);
//     int exc=solveDp(nums,n-1,dp)+0;
//     dp[n]=max(inc,exc);
//     return dp[n];
// }

//by tabulation
// int solveTab(vector<int>&nums){
//     int n=nums.size();
//     vector<int>dp(n,0);

//     dp[0]=nums[0];

//     for(int i=1;i<n;i++){
//         int inc=dp[i-2]+nums[i];
//         int exc=dp[i-1]+0;
//         dp[i]=max(inc,exc);
//     }
//     return dp[n-1];
// }

//by space optimization
int solveSp(vector<int>&nums){
    int n=nums.size();
    int prev2=0;
    int prev1=nums[0];
    for(int i=1;i<n;i++){
        int inc=prev2+nums[i];
        int exc=prev1+0;
        int cur=max(inc,exc);
        prev2=prev1;
        prev1=cur;
    }
    return prev1;
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    // int n=nums.size();
    // int ans=solve(nums,n-1);
    // return ans;

    // int n=nums.size();
    // vector<int>dp(n,-1);
    // int ans=solveDp(nums,n-1,dp);
    // return ans;

    // return solveTab(nums);    
    
    return solveSp(nums);

}