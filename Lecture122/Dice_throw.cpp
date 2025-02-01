// long long solve(int dice,int face,int target){
    //     if(target<0)return 0;
    //     if(target==0 && dice!=0)return 0;
    //     if(dice==0 && target!=0)return 0;
    //     if(dice==0 && target==0)return 1;
        // long long ans=0;
        // for(int i=1;i<=face;i++){
        //     ans=ans+solve(dice-1,face,target-i);
        // }
    //     return ans;
    // }
    
    // long long solveMem(int dice,int face,int target,vector<vector<long long>>&dp){
    //     if(target<0)return 0;
    //     if(target==0 && dice!=0)return 0;
    //     if(dice==0 && target!=0)return 0;
    //     if(dice==0 && target==0)return 1;
    //     if(dp[dice][target]!=-1)return dp[dice][target];
    //     long long ans=0;
    //     for(int i=1;i<=face;i++){
    //         ans=ans+solveMem(dice-1,face,target-i,dp);
    //     }
    //     return dp[dice][target] = ans;
    // }
    
    // long long solveTab(int dice,int face,int target){
    //     vector<vector<long long>>dp(dice+1,vector<long long>(target+1,0));
    //     dp[0][0]=1;
    //     for(int Dice=1;Dice<=dice;Dice++){
    //         for(int tar=1;tar<=target;tar++){
    //             long long ans=0;
    //             for(int i=1;i<=face;i++){
    //                 if(tar-i>=0)
    //                 ans=ans+dp[Dice-1][tar-i];
    //             }
    //             dp[Dice][tar]=ans;
    //         }
    //     }
    //     return dp[dice][target];
    // }
    
    long long solveSp(int dice,int face,int target){
        vector<long long>prev(target+1,0);
        vector<long long>curr(target+1,0);
        prev[0]=1;
        for(int Dice=1;Dice<=dice;Dice++){
            for(int tar=1;tar<=target;tar++){
                long long ans=0;
                for(int i=1;i<=face;i++){
                    if(tar-i>=0)
                    ans=ans+prev[tar-i];
                }
                curr[tar]=ans;
            }
            prev=curr;
        }
        return curr[target];
    }
    long long noOfWays(int m, int n, int x) {
        // code here
        // return solve(n,m,x);
        
        // vector<vector<long long>>dp(n+1,vector<long long>(x+1,-1));
        // return solveMem(n,m,x,dp);
        
        // return solveTab(n,m,x);
        
        return solveSp(n,m,x);
    }
};