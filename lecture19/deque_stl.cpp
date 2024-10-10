#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    cout<<"The size is "<<d.size()<<endl;
    d.push_back(2);
    d.push_front(1);
    for(int i:d)
    {
        cout<<i<<endl;
    }
    cout<<"The size is "<<d.size()<<endl;
    d.push_front(3);
    for(int i:d)
    {
        cout<<i<<endl;
    }
    cout<<"The size is "<<d.size()<<endl;
    d.erase(d.begin()+1);
    for(int i:d)
    {
        cout<<i<<endl;
    }
    cout<<"The size is "<<d.size()<<endl;
    d.pop_front();
    for(int i:d)
    {
        cout<<i<<endl;
    }
    cout<<"The size is "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    for(int i:d)
    {
        cout<<i<<endl;
    }
    cout<<"The size is "<<d.size()<<endl;
}