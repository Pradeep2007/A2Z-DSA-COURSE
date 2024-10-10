#include<iostream>
using namespace std;
int main(){
    pair<int,string> p;
    p.first=3;
    cin>>p.second;
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string> p2=p;
    p2.first=6;//here we are passing copy of p;
    cout<<p.first<<" "<<p.second<<endl;
    //if we pass address of p;
    pair<int,string> &p3=p;
    p3.first=9;
    p3.second="raja";
    cout<<p.first<<" "<<p.second<<endl;
}