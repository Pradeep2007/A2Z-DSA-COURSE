#include<iostream>
using namespace std;
int main(){
    int a[5]={1,-3,8,7,-2};
    for (int i = 0; i < 5; i++)
    {
        for (int j =i+1; j < 5; j++)
        {
            if ((a[i]+a[j])==5)
            {
                int mini=min(a[i],a[j]);
                int maxi =max(a[i],a[j]);
                cout<<mini<<" "<<maxi<<endl;
            }
            
        }
        
    }
    
}