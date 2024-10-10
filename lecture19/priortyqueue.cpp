#include<iostream>
#include<queue>
using namespace std;
int main(){
//max heap
priority_queue<int> maxi;
//To insert element 
maxi.push(3);
maxi.push(1);
maxi.push(5);
maxi.push(7);
int n=maxi.size();
cout<<n<<endl;
for (int i = 0; i < n; i++)
{
    cout<<maxi.top()<<" ";
    maxi.pop();
}
cout<<endl;
//min heap;
priority_queue<int,vector<int>,greater<int>>mini;
mini.push(2);
mini.push(4);
mini.push(6);
mini.push(8);
n=mini.size();
cout<<n<<endl;
for (int i = 0; i < n; i++)
{
    cout<<mini.top()<<" ";
    mini.pop();
}
cout<<endl;
} 