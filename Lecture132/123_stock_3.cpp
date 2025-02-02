class Solution {
public:
    // int solve(int index,int buy,vector<int>& prices,int limit){
    //     if(index==prices.size()){
    //         return 0;
    //     }
    //     if(limit==0)return 0;
    //     int profit=0;
    //     if(buy){
            // int buykro=-prices[index]+solve(index+1,0,prices,limit);
            // int ignore=0+solve(index+1,1,prices,limit);
            // profit=max(buykro,ignore);
    //     }
    //     else{
            // int sellkro=prices[index]+solve(index+1,1,prices,limit-1);
            // int ignore=0+solve(index+1,0,prices,limit);
            // profit=max(sellkro,ignore);
    //     }
    //     return profit;
    // }

    // int solveMem(int index,int buy,vector<int>& prices,
    // vector<vector<vector<int>>>&dp,int limit){
    //     if(index==prices.size()){
    //         return 0;
    //     }
    //     if(limit==0)return 0;
    //     if(dp[index][buy][limit]!=-1)return dp[index][buy][limit];
    //     int profit=0;
    //     if(buy){
    //         int buykro=-prices[index]+solveMem(index+1,0,prices,dp,limit);
    //         int ignore=0+solveMem(index+1,1,prices,dp,limit);
    //         profit=max(buykro,ignore);
    //     }
    //     else{
    //         int sellkro=prices[index]+solveMem(index+1,1,prices,dp,limit-1);
    //         int ignore=0+solveMem(index+1,0,prices,dp,limit);
    //         profit=max(sellkro,ignore);
    //     }
    //     return dp[index][buy][limit]=profit;;
    // }

    // int solveTab(vector<int>& prices){
    //     int n=prices.size();
    //     vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
    //     for(int index=n-1;index>=0;index--){
    //         for(int buy=0;buy<=1;buy++){
    //             for(int limit=1;limit<=2;limit++){
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
    //     return dp[0][1][2];
    // }

    int solveSp(vector<int>& prices){
        int n=prices.size();
        vector<vector<int>>cur(2,vector<int>(3,0));
        vector<vector<int>>next(2,vector<int>(3,0));
            for(int index=n-1;index>=0;index--){
            for(int buy=0;buy<=1;buy++){
                for(int limit=1;limit<=2;limit++){
                    int profit=0;
                    if(buy){
                        int buykro=-prices[index]+next[0][limit];
                        int ignore=0+next[1][limit];
                        profit=max(buykro,ignore);
                        cur[buy][limit]=profit;
                    }
                    else{
                        int sellkro=prices[index]+next[1][limit-1];
                        int ignore=0+next[0][limit];
                        profit=max(sellkro,ignore);
                        cur[buy][limit]=profit;
                    }
                }
                next=cur;
            }
        }
        return next[1][2];
    }

    int maxProfit(vector<int>& prices) {
        // return solve(0,1,prices,2);

        // int n=prices.size();
        // vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,-1)));
        // return solveMem(0,1,prices,dp,2);

        // return solveTab(prices);

        return solveSp(prices);
    }
};