#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("Pradeep");
    q.push("Singh");
    cout<<"The size is "<<q.size()<<endl;
    cout<<"The first element is "<<q.front()<<endl;
    cout<<"The size is "<<q.size()<<endl;
}