class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    // int solve(int n,int a[],int cur,int prev){
    //     if(cur==n)return 0;
        
    //     int take=0;
    //     if(prev==-1 || a[cur]>a[prev])take=1+solve(n,a,cur+1,cur);
        
    //     int notTake=0+solve(n,a,cur+1,prev);
    //     return max(take,notTake);
    // }
    
    // int solveMem(int n,int a[],int cur,int prev,vector<vector<int>>&dp){
    //     if(cur==n)return 0;
    //     if(dp[cur][prev+1]!=-1)return dp[cur][prev+1];
        // int take=0;
        // if(prev==-1 || a[cur]>a[prev]) take=1+solveMem(n,a,cur+1,cur,dp);
        
        // int notTake=0+solveMem(n,a,cur+1,prev,dp);
        // return dp[cur][prev+1]= max(take,notTake);
    // }
    
    // int solveTab(int n,int a[]){
    //     vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    //     for(int cur=n-1;cur>=0;cur--){
    //         for(int prev=cur-1;prev>=-1;prev--){
    //             int take=0;
    //             if(prev==-1 || a[cur]>a[prev]) take=1+dp[cur+1][cur+1];
                
    //             int notTake=0+dp[cur+1][prev+1];
    //             dp[cur][prev+1]= max(take,notTake);
    //         }
    //     }
    //     return dp[0][0];
    // }
    
    // int solveSp(int n,int a[]){
    //     vector<int>curRow(n+1,0);
    //     vector<int>nextRow(n+1,0);
    //     for(int cur=n-1;cur>=0;cur--){
    //         for(int prev=cur-1;prev>=-1;prev--){
    //             int take=0;
    //             if(prev==-1 || a[cur]>a[prev]) take=1+nextRow[cur+1];
                
    //             int notTake=0+nextRow[prev+1];
    //             curRow[prev+1]= max(take,notTake);
    //         }
    //         nextRow=curRow;
    //     }
    //     return nextRow[0];
    // }

    //OPTIMAL SOLUTION USING BINARY SEARCH
    int solveOptimal(int n,int a[]){
        if(n==0)return 0;
        vector<int>ans;
        ans.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i]>ans.back()){
                ans.push_back(a[i]);
            }
            else{
                //find index of just bada element
                int index=lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
                ans[index]=a[i];
            }
        }
        return ans.size();
    }
    //t.c->o(nlogn)
    //s.c->o(n)
    int longestSubsequence(int n, int a[])
    {
       // your code here
    //   return solve(n,a,0,-1);
    
    // vector<vector<int>>dp(n,vector<int>(n+1,-1));
    // return solveMem(n,a,0,-1,dp);
    
    // return solveTab(n,a);
    
    // return solveSp(n,a);

    return solveOptimal(n,a);
    }
};