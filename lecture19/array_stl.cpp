#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> a={1,2,3,4};
    int size=a.size();
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element at third index is "<<a.at(3)<<endl;
    cout<<"Empty or not "<<a.empty()<<endl;
    cout<<"First element is "<<a.front()<<endl;
    cout<<"Last element is "<<a.back()<<endl;
}