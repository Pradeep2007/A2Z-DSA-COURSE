#include<iostream>
using namespace std;
int pow(){
int ans=1;
int a,b;
cout<<"Enter the base a: ";
cin>>a;
cout<<"\nEnter the power b: ";
cin>>b;
    for (int i = 0; i < b; i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main(){
cout<<"The result is:"<<pow()<<endl;
cout<<"The result is:"<<pow()<<endl;
cout<<"The result is:"<<pow()<<endl;
cout<<"The result is:"<<pow()<<endl;
}