#include <bits/stdc++.h> 
void addSolution(vector<vector<int>>&ans,vector<vector<int>>&board,int n){
	vector<int>temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			temp.push_back(board[i][j]);
		}
	}
	ans.push_back(temp);
}

bool isSafe(int row,int col,vector<vector<int>>&board,int n){
	int x=row;
	int y=col;
	//check for row
	while(y>=0){
		if(board[x][y]==1){
			return false;
		}
		y--;
	}

	x=row;
	y=col;

	//check for diagonal
	while(x>=0 && y>=0){
		if(board[x][y]==1){
			return false;
		}
		x--;
		y--;
	}

    x=row;
	y=col;
	while(x<n && y>=0){
		if(board[x][y]==1){
			return false;
		}
		x++;
		y--;
	}

	return true;
}

void solve(int col,vector<vector<int>>&ans,vector<vector<int>>&board,int n){
	//base case
	if(col==n){
		addSolution(ans,board,n);
		return;
	}

	//solve 1 case and recurssion will take care
	for(int row=0;row<n;row++){
		if(isSafe(row,col,board,n)){
			//if placing is safe
			board[row][col]=1;
			solve(col+1,ans,board,n);
			//backtracking
			board[row][col]=0;
		}
	}
}
vector<vector<int>> nQueens(int n)
{
	// Write your code here
	vector<vector<int>>board (n,vector<int>(n,0));
	vector<vector<int>>ans;
	solve(0,ans,board,n);
	return ans;
}
//optimized solution
//here we are checking for sefness in o(n)
//if want to do in o(1) then we can use hashmap:
//for lower diagonal we can use <row+col,bool>,for uppper diagonal we can use<(n+1+col-ro),bool>

//Note: time complexity of both normal and optimized solution is n!
//space complexity is also 0(n*m)