#include<iostream>
using namespace std;
int main(){
    char ch;
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"enter the character\n";
    cin>>ch;
    switch (ch)
    {
    case '+':
        cout<<"The sum is"<<(a+b);
        break;
    case '-': cout<<"The diff is:"<<(a-b);
    break;
    case '*': cout<<"The multiply is:"<<(a*b);
    break;
    case '/': cout<<"the division is:"<<(a/b);
    break;
    case '%': cout<<"The modulo is:"<<(a%b);
    break;
    default:cout<<"Enter the valid character\n";
    break;
    }
}