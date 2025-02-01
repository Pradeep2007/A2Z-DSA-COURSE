class Solution {
public:
    // int solve(vector<int>& v,int i,int j){
    //     //base case
    //     if(i+1==j)return 0;

    //     int ans=INT_MAX;
    //     for(int k=i+1;k<j;k++){
    //         ans=min(ans,v[i]*v[j]*v[k]+solve(v,i,k)+solve(v,k,j));
    //     }
    //     return ans;
    // }

    //By memorisation
    // int solveMem(vector<int>& v,int i,int j,vector<vector<int>>&dp){
    //     //base case
    //     if(i+1==j)return 0;
    //     if(dp[i][j]!=-1)return dp[i][j];
        // int ans=INT_MAX;
        // for(int k=i+1;k<j;k++){
        //     ans=min(ans,v[i]*v[j]*v[k]+solveMem(v,i,k,dp)+solveMem(v,k,j,dp));
        // }
        // dp[i][j]=ans;
        // return dp[i][j];
    // }

    //by tabulation
    int solveTab(vector<int>& v,int i,int j){
        //base case
        int n=v.size();
        vector<vector<int>>dp(n,vector<int>(n,0));

        for(int i=n-1;i>=0;i--){
            for(int j=i+2;j<n;j++){
            int ans=INT_MAX;
            for(int k=i+1;k<j;k++){
            ans=min(ans,v[i]*v[j]*v[k]+dp[i][k] +dp[k][j] );
        }
        dp[i][j]=ans;
            }
        }
        return dp[0][n-1];
    }
    int minScoreTriangulation(vector<int>& values) {
        int n=values.size();
        // return solve(values,0,n-1);

        // vector<vector<int>>dp(n,vector<int>(n,-1));
        // return solveMem(values,0,n-1,dp);

        return solveTab(values,0,n-1);
    }
};