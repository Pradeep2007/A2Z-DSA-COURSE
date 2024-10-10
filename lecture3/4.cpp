#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the value of n\n";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout<<"The sum is "<<sum;
}