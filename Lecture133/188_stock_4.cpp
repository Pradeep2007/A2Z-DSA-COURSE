class Solution {
public:
    // int solveTab(vector<int>& prices,int k){
    //     int n=prices.size();
    //     vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(k+1,0)));
    //     for(int index=n-1;index>=0;index--){
    //         for(int buy=0;buy<=1;buy++){
    //             for(int limit=1;limit<=k;limit++){
    //                 int profit=0;
    //                 if(buy){
    //                     int buykro=-prices[index]+dp[index+1][0][limit];
    //                     int ignore=0+dp[index+1][1][limit];
    //                     profit=max(buykro,ignore);
    //                     dp[index][buy][limit]=profit;
    //                 }
    //                 else{
    //                     int sellkro=prices[index]+dp[index+1][1][limit-1];
    //                     int ignore=0+dp[index+1][0][limit];
    //                     profit=max(sellkro,ignore);
    //                     dp[index][buy][limit]=profit;
    //                 }
    //             }
    //         }
    //     }
    //     return dp[0][1][k];
    // }

    // int solve(int index,int k,int operationNo,vector<int>& prices){
    //     if(index==prices.size()){
    //         return 0;
    //     }
    //     if(operationNo==2*k)return 0;
    //     int profit=0;
    //     if(operationNo%2==0){
    //         int buykro=-prices[index]+solve(index+1,k,operationNo+1,prices);
    //         int ignore=0+solve(index+1,k,operationNo,prices);
    //         profit=max(buykro,ignore);
    //     }
    //     else{
    //         int sellkro=prices[index]+solve(index+1,k,operationNo+1,prices);
    //         int ignore=0+solve(index+1,k,operationNo,prices);
    //         profit=max(sellkro,ignore);
    //     }
    //     return profit;
    // }

    // int solveMem(int index,int k,int operationNo,vector<int>& prices,vector<vector<int>>&dp){
    //     if(index==prices.size()){
    //         return 0;
    //     }
    //     if(operationNo==2*k)return 0;
    //     int profit=0;
    //     if(dp[index][operationNo]!=-1)return dp[index][operationNo];
    //     if(operationNo%2==0){
    //         int buykro=-prices[index]+solveMem(index+1,k,operationNo+1,prices,dp);
    //         int ignore=0+solveMem(index+1,k,operationNo,prices,dp);
    //         profit=max(buykro,ignore);
    //     }
    //     else{
    //         int sellkro=prices[index]+solveMem(index+1,k,operationNo+1,prices,dp);
    //         int ignore=0+solveMem(index+1,k,operationNo,prices,dp);
    //         profit=max(sellkro,ignore);
    //     }
    //     return dp[index][operationNo]=profit;
    // }

    // int solveTab(int k,vector<int>& prices){
    //     int n=prices.size();
    //     vector<vector<int>>dp(n+1,vector<int>(2*k+1,0));
    //     for(int index=n-1;index>=0;index--){
    //         for(int operationNo=0;operationNo<2*k;operationNo++){
    //             int profit=0;
    //             if(operationNo%2==0){
    //                 int buykro=-prices[index]+dp[index+1][operationNo+1];
    //                 int ignore=0+dp[index+1][operationNo];
    //                 profit=max(buykro,ignore);
    //             }
    //             else{
    //                 int sellkro=prices[index]+dp[index+1][operationNo+1];
    //                 int ignore=0+dp[index+1][operationNo];
    //                 profit=max(sellkro,ignore);
    //             }
    //             dp[index][operationNo]=profit;
    //         }
    //     }
    //     return dp[0][0];
    // }

    int solveSp(int k,vector<int>& prices){
        int n=prices.size();
        vector<int> cur(2*k+1,0);
        vector<int> next(2*k+1,0);
        for(int index=n-1;index>=0;index--){
            for(int operationNo=0;operationNo<2*k;operationNo++){
                int profit=0;
                if(operationNo%2==0){
                    int buykro=-prices[index]+next[operationNo+1];
                    int ignore=0+next[operationNo];
                    profit=max(buykro,ignore);
                }
                else{
                    int sellkro=prices[index]+next[operationNo+1];
                    int ignore=0+next[operationNo];
                    profit=max(sellkro,ignore);
                }
                cur[operationNo]=profit;
            }
            next=cur;
        }
        return next[0];
    }
    int maxProfit(int k, vector<int>& prices) {
        // return solveTab(prices,k);

        // return solve(0,k,0,prices);
        // int n=prices.size();
        // vector<vector<int>>dp(n,vector<int>(2*k,-1));
        // return solveMem(0,k,0,prices,dp);

        // return solveTab(k,prices);

        return solveSp(k,prices);
    }
};