class Solution {
public:
//BY RECURSION,IT WILL SHOW TLE
int solve1(vector<int>&cost,int n){
    if(n==0)return cost[0];
    if(n==1)return cost[1];
    int ans=cost[n]+min(solve(cost,n-1),solve(cost,n-2));
    return ans;
}

//recurssion+memorisation
    int solve2(vector<int>&cost,int n,vector<int>&dp){
        if(n==0)return cost[0];
        if(n==1)return cost[1];
        if(dp[n]!=-1)return dp[n];
        dp[n]=cost[n]+min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        return dp[n];
    }

//BY TABULATION METHOD
int solve3(vector<int>&cost,int n){
    //step:1 creation of dp
    vector<int>dp(n+1);
    //step:2 ANALYSE BBASE CASE
    dp[0]=cost[0];
    dp[1]=cost[1];
    //3rd step
    for (int i = 2; i < n; i++)
    {
        dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
    }
    return min(dp[n-1],dp[n-2]);
}

//BY SPACE OPTIMIZATION
int solve4(vector<int>&cost,int n){
        int prev1=cost[1];
        int prev2=cost[0];
        for(int i=2;i<n;i++){
            int curr=cost[i]+min(prev1,prev2);
            prev2=prev1;
            prev1=curr;
        }
        return min(prev1,prev2);
}

    int minCostClimbingStairs(vector<int>& cost) {
        // int n=cost.size();
        // int ans=min(solve1(cost,n-1)+solve1(cost.n-2));
        // return ans;

        // int n=cost.size();
        // vector<int>dp(n+1,-1);
        // int ans=min(solve2(cost,n-1,dp),solve2(cost,n-2,dp));
        // return ans;

        // int n=cost.size();
        // int ans=solve3(cost,n);
        // return ans;

        int n=cost.size();
        int ans=solve4(cost,n);
        return ans;
    }
};