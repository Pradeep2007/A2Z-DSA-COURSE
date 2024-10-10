#include <iostream>
using namespace std;

int main(){
    int a[7]={0,2,0,3,0,0,0};
    int nonzero=0;
    for (int i = 0; i < 7; i++)
    {
        if (a[i]!=0)
        {
//here we r shifting nonzero elements towards left in place of shifting zeroes to right;            
            swap(a[i],a[nonzero]);
            nonzero++; 
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}