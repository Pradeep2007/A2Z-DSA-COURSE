vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges) {
    // Write your code here.
    vector<int>dist(n+1,1e9);
    dist[src]=0;
    for(int i=1;i<=n;i++){
        //traverse on edge list
        for(int j=0;j<m;j++){
            int u=edges[i][0];
            int v=edges[i][1];
            int wt=edges[i][2];

            if(dist[u]!=1e9 && ((dist[u]+wt)<dist[v])){
                dist[v]=dist[u]+wt;
            }
        }
    }

    //check for neegative cycle
    bool flag=0;
    for(int j=0;j<m;j++){
            int u=edges[i][0];
            int v=edges[i][1];
            int wt=edges[i][2];

            if(dist[u]!=1e9 && ((dist[u]+wt)<dist[v])){
                flag=1;
            }
    }
    if(!flag){
        return dist[dest];
    }
    return -1;
}
//t.c->O(n+e)