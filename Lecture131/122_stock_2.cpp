class Solution {
public:
    // int solve(int index,int buy,vector<int>& prices){
    //     if(index==prices.size()){
    //         return 0;
    //     }
    //     int profit=0;
    //     if(buy){
    //         int buykro=-prices[index]+solve(index+1,0,prices);
    //         int ignore=0+solve(index+1,1,prices);
    //         profit=max(buykro,ignore);
    //     }
    //     else{
    //         int sellkro=prices[index]+solve(index+1,1,prices);
    //         int ignore=0+solve(index+1,0,prices);
    //         profit=max(sellkro,ignore);
    //     }
    //     return profit;
    // }

    // int solveMem(int index,int buy,vector<int>& prices,vector<vector<int>>&dp){
    //     if(index==prices.size()){
    //         return 0;
    //     }
    //     if(dp[index][buy]!=-1)return dp[index][buy];
    //     int profit=0;
    //     if(buy){
    //         int buykro=-prices[index]+solveMem(index+1,0,prices,dp);
    //         int ignore=0+solveMem(index+1,1,prices,dp);
    //         profit=max(buykro,ignore);
    //     }
    //     else{
    //         int sellkro=prices[index]+solveMem(index+1,1,prices,dp);
    //         int ignore=0+solveMem(index+1,0,prices,dp);
    //         profit=max(sellkro,ignore);
    //     }
    //     return dp[index][buy]=profit;;
    // }

    // int solveTab(vector<int>& prices){
    //     int n=prices.size();
    //     vector<vector<int>>dp(n+1,vector<int>(2,0));
    //     for(int index=n-1;index>=0;index--){
    //         for(int buy=0;buy<=1;buy++){
    //             int profit=0;
    //             if(buy){
    //                 int buykro=-prices[index]+dp[index+1][0];
    //                 int ignore=0+dp[index+1][1];
    //                 profit=max(buykro,ignore);
    //                 dp[index][buy]=profit;
    //             }
    //             else{
    //                 int sellkro=prices[index]+dp[index+1][1];
    //                 int ignore=0+dp[index+1][0];
    //                 profit=max(sellkro,ignore);
    //                 dp[index][buy]=profit;
    //             }
    //         }
    //     }
    //     return dp[0][1];
    // }

    int solveSp(vector<int>& prices){
        int n=prices.size();
        vector<int>cur(2,0);
        vector<int>next(2,0);
        for(int index=n-1;index>=0;index--){
            for(int buy=0;buy<=1;buy++){
                int profit=0;
                if(buy){
                    int buykro=-prices[index]+next[0];
                    int ignore=0+next[1];
                    profit=max(buykro,ignore);
                    cur[buy]=profit;
                }
                else{
                    int sellkro=prices[index]+next[1];
                    int ignore=0+next[0];
                    profit=max(sellkro,ignore);
                    cur[buy]=profit;
                }
            }
            next=cur;
        }
        return next[1];
    }
    int maxProfit(vector<int>& prices) {
        // return solve(0,1,prices);

        // int n=prices.size();
        // vector<vector<int>>dp(n,vector<int>(2,-1));
        // return solveMem(0,1,prices,dp);

        // return solveTab(prices);

        return solveSp(prices);
    }
};