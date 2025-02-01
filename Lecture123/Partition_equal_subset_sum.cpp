class Solution {
  public:
    // bool solve(int index,vector<int>&a,int n,int target){
    //     if(index>=n)return 0;
    //     if(target<0)return 0;
    //     if(target==0)return 1;
        
        // bool inc=solve(index+1,a,n,target-a[index]);
        // bool exc=solve(index+1,a,n,target-0); 
        // return inc or exc;
    // }
    
    // bool solveMem(int index,vector<int>&a,int n,int target,vector<vector<int>>&dp){
    //     if(index>=n)return 0;
    //     if(target<0)return 0;
    //     if(target==0)return 1;
    //     if(dp[index][target]!=-1)return dp[index][target];
    //     bool inc=solveMem(index+1,a,n,target-a[index],dp);
    //     bool exc=solveMem(index+1,a,n,target-0,dp); 
    //     dp[index][target]=inc || exc;
    //     return dp[index][target];
    // }
    
    // bool solveTab(int index,vector<int>&a,int n,int total){
    //      vector<vector<int>>dp(n+1,vector<int>(total+1,0));
    //     for(int i=0;i<=n;i++){
    //         dp[i][0]=1;
    //     }
    //     for(int index=n-1;index>=0;index--){
    //         for(int target=0;target<=total/2;target++){
    //             bool inc=0;
    //             if(target-a[index]>=0)
    //             inc=dp[index+1][target-a[index]];
    //             bool exc=dp[index+1][target-0]; 
    //             dp[index][target]=inc or exc;
    //         }
    //     }
    //     return dp[0][total/2];
    // }
    
    
    bool solveSp(int index,vector<int>&a,int n,int total){
         vector<int>cur(total+1,0);
         vector<int>next(total+1,0);
         cur[0]=1;
         next[0]=1;
        for(int index=n-1;index>=0;index--){
            for(int target=0;target<=total/2;target++){
                bool inc=0;
                if(target-a[index]>=0)
                inc=next[target-a[index]];
                bool exc=next[target-0]; 
                cur[target]=inc or exc;
            }
            next=cur;
        }
        return cur[total/2];
    }
    bool equalPartition(vector<int> arr) {
        // code here
        int n=arr.size();
        int total=0;
        for(int i=0;i<n;i++){
            total+=arr[i];
        }
        if(total & 1)return 0;
        
        int target=total/2;
        // return solve(0,arr,n,target);
        
        // vector<vector<int>>dp(n,vector<int>(target+1,-1));
        // return solveMem(0,arr,n,target,dp);
        
        // return solveTab(0,arr,n,total);
        
          return solveSp(0,arr,n,total);
    }
};