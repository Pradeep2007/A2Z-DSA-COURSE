#include<iostream>
using namespace std;
int main(){
    int n=5;
    for (int i=1; i<=n; i++)
    {
        for (int j = 1;j<=6-i;j++)
        {
            cout<<j<<'\t';
        }
        for (int k=1;k<=i-1;k++)
        {
            cout<<"*\t";
        }
        for (int l =1; l <= i-1; l++)
        {
            cout<<"*\t";
        }
        for (int m =6-i; m>=1 ; m--)
        {
            cout<<m<<'\t';
        }
        
        cout<<'\n';
    }
    
}
