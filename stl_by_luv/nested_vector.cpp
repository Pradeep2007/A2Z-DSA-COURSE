#include<iostream>
#include<vector>
using namespace std;
void printvector(vector<pair<int,int>> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
}
int main(){
    vector<pair<int,int>> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        cout<<"The size is "<<v.size()<<endl;
        v.push_back(make_pair(x,y));
        printvector(v);
    }
      
}