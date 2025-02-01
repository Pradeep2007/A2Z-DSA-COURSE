#include<bits/stdc++.h>
void dfs(int node,unordered_map<int,bool>&vis,stack<int>&s,unordered_map<int,list<int>>&adj){
	vis[node]=true;
	for(auto nbr:adj[node]){
		if(!vis[nbr]){
			dfs(nbr,vis,s,adj);
		}
	}
	s.push(node);

}

void revDfs(int node,unordered_map<int,bool>&vis,unordered_map<int,list<int>>&transpose){
	vis[node]=true;
	for(auto nbr:vis[node]){
		if(!vis[nbr]){
			dfs(nbr,vis,adj);
		}
	}
}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
	// Write your code here.
	unordered_map<int,list<int>>adj;
	for(int i=0;i<edges.size();i++){
		int u=edges[i][0];
		int v=edges[i][1];

		adj[u].push_back(v);
	}
	//topo sort
	stack<int>s;
	unordered_map<int,bool>vis;
	for(int i=0;i<v;i++){
		if(!vis[i]){
			dfs(i,vis,s,adj);
		}
	}

	//create a transpose graph
	unordered_map<int,list<int>>transpose;
	for(int i=0;i<v;i++){
		vis[i]=0;
		for(auto nbr:adj[i]){
			transpose[nbr].push_back(i);
		}
	}

	//call dfs using above ordering
	int cnt=0;
	while(!s.empty()){
		int top=s.top();
		s.pop();
		if(!vis[top]){
			cnt++;
			revDfs(top,vis,transpose);
		}
	}
	return cnt;
}
//t.c->O(v+e);
//s.c->linear