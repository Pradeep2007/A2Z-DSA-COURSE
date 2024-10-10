#include<iostream>
using namespace std;
int main (){
    int a;
    cout<<"enter the value of a\n";
    //a=cin.get();by this we can take enter as input: 
    cin>>a;
    if (a>0)
    {
        cout<<a<<" "<<"is a positive number\n";
    }
    else if(a<0)
    {
        cout<<a<<" "<<"is negative number\n";
    }
    else
    {
        cout<<"value of a is zero\n";
    }
    
}