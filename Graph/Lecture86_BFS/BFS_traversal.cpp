#include<unordered_map>
#include<queue>
#include<set>
void prepareAdjList(unordered_map<int,set<int>>&adjList,vector<pair<int,int>>&edges){
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;

        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}

void bfs(unordered_map<int,set<int>>&adjList,unordered_map<int,bool>&visited,vector<int>&ans,int node){
    queue<int>q;
    q.push(node);
    visited[node]=true;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        ans.push_back(front);
        for(auto i:adjList[front]){
            if(!visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }
    }
}

vector<int>BFS(int vertex, vector<pair<int,int>>edges){
    vector<int>ans;
    unordered_map<int,set<int>>adjList;
    unordered_map<int,bool>visited;

    prepareAdjList(adjList,edges);
    for(int i=0;i<vertex;i++){
        if(!visited[i]){    
        bfs(adjList,visited,ans,i);
        }
    }
        }