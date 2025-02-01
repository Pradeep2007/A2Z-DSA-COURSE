// int solve(int n,vector<int> &days, vector<int> &cost,int index){
//     //base case
//     if(index>=n){
//         return 0;
//     }

//     //1 day pass
//     int option1=cost[0]+solve(n, days, cost, index+1);

//     //7 day pass
//     int i=0;
//     for(int i=index;i<n && days[i]<days[index]+7;i++);

//     int option2=cost[1]+solve(n, days, cost, i);

//     //30 days
//     for(int i=index;i<n && days[i]<days[index]+30;i++);

//     int option3=cost[2]+solve(n, days, cost, i);

//     return min(option1,min(option2,option3));
// }

//By Memorisation
// int solveMem(int n,vector<int> &days, vector<int> &cost,int index,vector<int>&dp){
//     //base case
//     if(index>=n)return 0;
//     if(dp[index]!=-1)return dp[index];
//     //1 day
//     int option1=cost[0]+solveMem(n,days,cost,index+1,dp);

//     int i;
//     //7 day
//     for(int i=index;i<n && days[i]<days[index]+7;i++);

//     int option2=cost[1]+solveMem(n,days,cost,i,dp);

//     //30 days
//     for(int i=index;i<n && days[i]<days[index]+30;i++);

//     int option3=cost[2]+solveMem(n,days,cost,i,dp);

//     dp[index]= min(option1,min(option2,option3));
//     return dp[index];
// }

//by tabulation
// int solveTab(int n,vector<int> &days, vector<int> &cost){
//     vector<int>dp(n+1,INT_MAX);
//     dp[n]=0;
//     for(int k=n-1;k>=0;k--){
//         int option1=cost[0]+dp[k+1];

//         int i;
//         for(int i=k;i<n && days[i]<days[k]+7;i++);
//         int option2=cost[1]+dp[i];

//         for(int i=k;i<n && days[i]<days[k]+30;i++);
//         int option3=cost[1]+dp[i];

//         dp[k]=min(option1,min(option2,option3));
//     }
//     return dp[0];
// }

//BY SPACE OPTIMIZATION
//BY USING SLIDING WINDOW
int solveSp(int n, vector<int> days, vector<int> cost){
    int ans=0;
    queue<pair<int,int>>month;
    queue<pair<int,int>>week;

    for(int day:days){
        //step1:remove expired days
        while(!month.empty() && month.front().first+30<=day){
            month.pop();
        }

        while(!week.empty() && week.front().first+30<=day){
            week.pop();
        }

        //add cost for current day
        month.push(make_pair(day,ans+cost[2]));
        week.push(make_pair(day,ans+cost[1]));

        //step3: ans update
        ans=min(ans+cost[0],min(week.front().second,month.front().second));
        
    }
    return ans;
}
//its space com is o(1)

int minimumCoins(int n, vector<int> days, vector<int> cost)
{
    // Write your code here.
    // return solve(n, days, cost, 0);

    // vector<int>dp(n+1,-1);
    // return solveMem(n,days,cost,0,dp);

    // return solveTab(n,days,cost);

    return solveSp(n, days, cost);
}