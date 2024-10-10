#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n whose square root to be calculated\n";
    cin>>n;
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    double ans;
    while (s<=e)
    {
        if ((mid*mid)>n)
        {
            e=mid-1;
        }
        else if ((mid*mid)<n)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            ans=mid;
            break;
        }
        mid=s+(e-s)/2;
    }
    cout<<"The ans is "<<ans<<endl;
    int p;
    cout<<"Enter the precision\n";
    cin>>p;
    double factor=1;
    for (int i = 0; i < p; i++)
    {
        factor=factor/10;
        for (double j = ans; j*j < n;j=j+factor)
        {
            ans=j;
        }
        
    }
    cout<<"The answer is "<<ans;
}