class Solution {
public:
    // int solve(vector<int>& satisfaction,int index,int time){
    //     if(index==satisfaction.size())return 0;

        // int incl=satisfaction[index]*(time+1)+solve(satisfaction,index+1,time+1);
        // int exc=0+solve(satisfaction,index+1,time);
        // return max(incl,exc);
    // }

    // int solveMem(vector<int>& satisfaction,int index,int time,vector<vector<int>> &dp){
    //     if(index==satisfaction.size())return 0;
    //     if(dp[index][time]!=-1)return dp[index][time];
    //     int incl=satisfaction[index]*(time+1)+solveMem(satisfaction,index+1,time+1,dp);
    //     int exc=0+solveMem(satisfaction,index+1,time,dp);
    //     dp[index][time]=max(incl,exc);
    //     return dp[index][time];
    // }

    // int solveTab(vector<int>& satisfaction){
    //     int n=satisfaction.size();
    //     vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    //     for(int index=n-1;index>=0;index--){
    //         for(int time=index;time>=0;time--){
    //            int incl=satisfaction[index]*(time+1)+dp[index+1][time+1];
    //            int exc=0+dp[index+1][time];
    //            dp[index][time]=max(incl,exc);
    //         }
    //     }
    //     return dp[0][0];
    // }

    int solveSp(vector<int>& satisfaction){
        int n=satisfaction.size();
        vector<int>next(n+1,0);
        vector<int>curr(n+1,0);
        for(int index=n-1;index>=0;index--){
            for(int time=index;time>=0;time--){
               int incl=satisfaction[index]*(time+1)+next[time+1];
               int exc=0+next[time];
               curr[time]=max(incl,exc);
            }
            next=curr;
        }
        return next[0];
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        //sort krna h
        sort(satisfaction.begin(),satisfaction.end());
        // return solve(satisfaction,0,0);
        // int n=satisfaction.size();
        // vector<vector<int>>dp(n,vector<int>(n,-1));
        // return solveMem(satisfaction,0,0,dp);

        // return solveTab(satisfaction);

        return solveSp(satisfaction);
    }
};