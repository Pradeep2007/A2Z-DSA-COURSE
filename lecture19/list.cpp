#include<iostream>
#include<list>
using namespace std;
int main(){
list<int>l;
cout<<"The size is "<<l.size()<<endl;
l.push_back(5);
l.push_front(6);
l.push_front(7);
cout<<"The size is "<<l.size()<<endl;
for(int i:l)
{
    cout<<i<<endl;
}
cout<<"The last element is "<<l.back()<<endl;
l.erase(l.begin());
cout<<"The size is "<<l.size()<<endl;
for(int i:l)
{
    cout<<i<<endl;
}
cout<<"The front element is "<<l.front()<<endl;
cout<<"Empty or not "<<l.empty()<<endl;
l.pop_front();
cout<<"The size is "<<l.size()<<endl;
for(int i:l)
{
    cout<<i<<endl;
}
l.pop_back();
cout<<"The size is "<<l.size()<<endl;
for(int i:l)
{
    cout<<i<<endl;
}
}