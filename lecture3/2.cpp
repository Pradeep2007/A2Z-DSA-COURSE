#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character\n";
    cin>>ch;
    if (ch>='a' && ch<='z')
    {
        cout<<"it is lowercase\n";
    }
    else if(ch>='A'&& ch<='Z')
    {
        cout<<"it is uppercase\n";
    }
    else if(ch>= '0' && ch<='9')
    {
        cout<<"it is numeric\n";
    }
    
}