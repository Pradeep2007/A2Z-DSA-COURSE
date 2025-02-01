class Solution {
public:
// int solve(vector<int>& O,int currlane,int curpos){
//     int n=O.size()-1;
//     if(curpos==n)return 0;
//     if(O[curpos+1]!=currlane){
//         return solve(O,currlane,curpos+1);
//     }
//     else{
//         int ans=INT_MAX;
//         for(int i=1;i<=3;i++){
//             if(currlane!=i && O[curpos]!=i){
//                 ans =min(ans,1+solve(O,i,curpos));
//             }
//         }
//         return ans;
//     }
// }

//by memorisation
// int solveMem(vector<int>& O,int currlane,int curpos,vector<vector<int>>&dp){
//     int n=O.size()-1;
//     if(curpos==n)return 0;
//     if(dp[currlane][curpos]!=-1)return dp[currlane][curpos];
    // if(O[curpos+1]!=currlane){
    //     return solveMem(O,currlane,curpos+1,dp);
    // }
    // else{
    //     int ans=INT_MAX;
    //     for(int i=1;i<=3;i++){
    //         if(currlane!=i && O[curpos]!=i){
    //             ans =min(ans,1+solveMem(O,i,curpos,dp));
    //         }
    //     }
    //     dp[currlane][curpos]=ans;
    //     return dp[currlane][curpos];
    // }
// }

//by tabulation
// int solveTab(vector<int>& O){
//     int n=O.size()-1;
//     vector<vector<int>>dp(4,vector<int>(O.size(),0));
//     dp[0][n]=0;
//     dp[1][n]=0;
//     dp[2][n]=0;
//     dp[3][n]=0;
//     for(int curpos=n-1;curpos>=0;curpos--){
//         for(int currlane=1;currlane<=3;currlane++){
//             if(O[curpos+1]!=currlane){
//             dp[currlane][curpos]=dp[currlane][curpos+1];
            //note->just focus on curpos+1,why it is +1
//     }
//     else{
//         int ans=1e9;
//         for(int i=1;i<=3;i++){
//             if(currlane!=i && O[curpos]!=i){
//                 ans =min(ans,1+dp[i][curpos+1]);
//             }
//         }
//         dp[currlane][curpos]=ans;
//     }
//         }
//     }
//     return min(dp[2][0],min(1+dp[1][0],1+dp[3][0]));
// }

//space optimization
int solveSp(vector<int>& O){
    int n=O.size()-1;
    vector<int>cur(4,INT_MAX);
    vector<int>next(4,INT_MAX);
    next[0]=0;
    next[1]=0;
    next[2]=0;
    next[3]=0;
    for(int curpos=n-1;curpos>=0;curpos--){
        for(int currlane=1;currlane<=3;currlane++){
            if(O[curpos+1]!=currlane){
            cur[currlane]=next[currlane];
    }
    else{
        int ans=1e9;
        for(int i=1;i<=3;i++){
            if(currlane!=i && O[curpos]!=i){
                ans =min(ans,1+next[i]);
            }
        }
        cur[currlane]=ans;
    }
        }
        next=cur;
    }
    return min(next[2],min(1+next[1],1+next[3]));
}
    int minSideJumps(vector<int>& obstacles) {
        // return solve(obstacles,2,0);

        // vector<vector<int>>dp(4,vector<int>(obstacles.size(),-1));
        // return solveMem(obstacles,2,0,dp);

        // return solveTab(obstacles);

        return solveSp(obstacles);
    }
};