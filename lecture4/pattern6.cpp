#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int i=1;
    char ch='A';
    while (i<=n)
    {
        
        int j=1; //also print without using count;
        while (j<=n)
        {
            
            cout<<ch<<" ";
            ch=ch+1;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}