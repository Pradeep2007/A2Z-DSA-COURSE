#include <iostream>
using namespace std;
int getAns(int *arr,int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];

    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int ans=getAns(arr,n);
    cout<<"Sum is "<<ans;
    return 0;
}