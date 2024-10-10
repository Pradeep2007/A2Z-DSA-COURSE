#include<iostream>
using namespace std;
int fact(int a){
    int ans =1;
    for (int i = 1; i <=a; i++)
    {
        ans =ans*i;
    }
    return ans;
}
int ncr(int n,int r){
    int result=(fact(n))/(fact(r)*fact(n-r));
    return result;
}
int main(){
    int n,r;
    cout<<"enter the value of n and r\n";
    cin>>n>>r;
    cout<<"THe result is:"<<ncr(n,r);
}