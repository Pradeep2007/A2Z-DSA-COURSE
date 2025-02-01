class Solution {
  public:
    // int solve(int index,int diff,vector<int>& a){
    //     if(index<0)return 0;
    //     int ans=0;
    //     for(int j=index-1;j>=0;j--){
    //         if(a[index]-a[j]==diff){
    //             ans=max(ans,1+solve(j,diff,a));
    //         }
    //     }
    //     return ans;
    // }
    
    //top down approach
    // int solveMem(int index,int diff,vector<int>& a,unordered_map<int,int>dp[]){
    //     if(index<0)return 0;
    //     int ans=0;
    //     if(dp[index].count(diff))return dp[index][diff];
    //     for(int j=index-1;j>=0;j--){
    //         if(a[index]-a[j]==diff){
    //             ans=max(ans,1+solveMem(j,diff,a,dp));
    //         }
    //     }
    //     return dp[index][diff] =ans;
    // }
    
    //bottom up approach
    // int lengthOfLongestAP(vector<int>& arr) {
    //     // code here
    //     int n=arr.size();
    //     if(n<=2)return n;
    //     int ans=0;
    //     unordered_map<int,int>dp[n+1];
    //     for(int i=1;i<n;i++){
    //         for(int j=0;j<i;j++){
    //             int diff=arr[i]-arr[j];
    //             int cnt=1;
                
    //             //check if answer is already present
    //             if(dp[j].count(diff))
    //             cnt=dp[j][diff];
                
    //             dp[i][diff]=1+cnt;
    //             ans=max(ans,dp[i][diff]);
    //         }
    //     }
    //     return ans;
    // }
    
    int lengthOfLongestAP(vector<int>& arr) {
        // code here
        int n=arr.size();
        if(n<=2)return n;
        int ans=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         ans=max(ans,2+solve(i,arr[j]-arr[i],arr));
        //     }
        // }
        // return ans;
        unordered_map<int,int>dp[n+1];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ans=max(ans,2+solveMem(i,arr[j]-arr[i],arr,dp));
            }
        }
        return ans;
    }
    
    //homework -solve it in o(n)complexity
};