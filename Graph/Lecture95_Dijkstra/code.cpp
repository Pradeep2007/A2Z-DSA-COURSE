#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // Write your code here.
    unordered_map<int,list<pair<int,int>>>adj;
    for(int i=0;i<edges;i++){
        int u=vec[i][0];
        int v=vec[i][1];
        int w=vec[i][2];

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    vector<int>dis(vertices);
    for(int i=0;i<vertices;i++){
        dis[i]=INT_MAX;
    }
    set<pair<int,int>>st;
    dis[source]=0;
    st.insert(make_pair(0,source));

    while(!st.empty()){
        auto top=*(st.begin());

        int nodeDistance=top.first;
        int topNode=top.second;

        //remove top record now
        st.erase(st.begin());

        //traverse on neighbours
        for(auto neighbours:adj[topNode]){
            if(nodeDistance+neighbours.second<dis[neighbours.first]){
                auto record=st.find(make_pair(dis[neighbours.first],neighbours.first));
            

            //if record found then erase it
                if (record != st.end()) {
                  st.erase(record);
                }
                // distance update
                dis[neighbours.first] = nodeDistance + neighbours.second;

                // record push in set
                st.insert(make_pair(dis[neighbours.first], neighbours.first));
            }
        }
    }
    return dis;
}
//T.C->O(Elog(V))
//S.C->O(N+E)