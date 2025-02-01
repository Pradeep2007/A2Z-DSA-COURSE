#include <bits/stdc++.h> 
// int solve(vector<int>&weight,vector<int>&value,int index,int capacity){
// 	//base case
// 	if(index==0){
// 		if(weight[0]<=capacity){
// 			return value[0];
// 		}
// 		else{
// 			return 0;
// 		}
// 	}

// 	int include=0;
// 	if(weight[index]<=capacity){
// 		include=value[index]+solve(weight,value,index-1,capacity-weight[index]);
// 	}
// 	int exclude=0+solve(weight,value,index-1,capacity);
// 	int ans=max(include,exclude);
// 	return ans;
// }

//BY MEMORISATION
// int solveMem(vector<int>&weight,vector<int>&value,int index,int capacity,vector<vector<int>>&dp){
// 	//base case
// 	if(index==0){
// 		if(weight[0]<=capacity){
// 			return value[0];
// 		}
// 		else{
// 			return 0;
// 		}
// 	}
// 	if(dp[index][capacity]!=-1)return dp[index][capacity];
// 	int include=0;
// 	if(weight[index]<=capacity){
// 		include=value[index]+solveMem(weight,value,index-1,capacity-weight[index],dp);
// 	}
// 	int exclude=0+solveMem(weight,value,index-1,capacity,dp);
// 	dp[index][capacity]=max(include,exclude);
// 	return dp[index][capacity];
// }

//BY TABULATION
// int solveTab(vector<int>&weight,vector<int>&value,int n,int capacity){
// 	//base case
// 	vector<vector<int>>dp(n,vector<int>(capacity+1,0));
// 	for(int w=weight[0];w<=capacity;w++){
// 		if(weight[0]<=capacity){
// 			dp[0][w]=value[0];
// 		}
// 		else{
// 			dp[0][w]=0;
// 		}
// 	}

// 	for(int index=1;index<n;index++){
// 		for(int w=0;w<=capacity;w++){
// 			int include=0;
// 			if(weight[index]<=w){
// 			include=value[index]+dp[index-1][w-weight[index]];
// 		}
// 			int exclude=dp[index-1][w];
// 			dp[index][w]=max(include,exclude);
// 		}
// 	}
// 	return dp[n-1][capacity];
// }

//BY SPACE OPTIMIZATION,space complexity is o(2*w)
// int solveSp(vector<int>&weight,vector<int>&value,int n,int capacity){
// 	//base case
// 	vector<int>prev(capacity+1,0);
// 	vector<int>curr(capacity+1,0);
// 	for(int w=weight[0];w<=capacity;w++){
// 		if(weight[0]<=capacity){
// 			prev[w]=value[0];
// 		}
// 		else{
// 			prev[w]=0;
// 		}
// 	}

// 	for(int index=1;index<n;index++){
// 		for(int w=0;w<=capacity;w++){
// 			int include=0;
// 			if(weight[index]<=w){
// 			include=value[index]+prev[w-weight[index]];
// 		}
// 			int exclude=prev[w];
// 			curr[w]=max(include,exclude);
// 		}
// 		prev=curr;
// 	}
// 	return prev[capacity];
// }

//By Space Optimization,using only 0(w)space
int solveSp(vector<int>&weight,vector<int>&value,int n,int capacity){
	//base case
	// vector<int>prev(capacity+1,0);
	vector<int>curr(capacity+1,0);
	for(int w=weight[0];w<=capacity;w++){
		if(weight[0]<=capacity){
			curr[w]=value[0];
		}
		else{
			curr[w]=0;
		}
	}

	for(int index=1;index<n;index++){
		//here we wiil traverse right to left,becoz our values are depending only on left portion
		//Note->if we traverse left to right then values gets overwrite and we will get wrong ans 
		for(int w=capacity;w>=0;w--){
			int include=0;
			if(weight[index]<=w){
			include=value[index]+curr[w-weight[index]];
		}
			int exclude=curr[w];
			curr[w]=max(include,exclude);
		}
	}
	return curr[capacity];
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	// return solve(weight,value,n-1,maxWeight);

	// vector<vector<int>>dp(n,vector<int>(maxWeight+1,-1));
	// int ans=solveMem(weight,value,n-1,maxWeight,dp);
	// return ans;

	// return solveTab(weight, value, n, maxWeight);

	return solveSp(weight, value, n, maxWeight);
}