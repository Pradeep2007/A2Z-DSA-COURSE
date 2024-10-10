#include <iostream>
using namespace std;
int length(char b[]){
    int i=0,count=0;
    while (b[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}
int reverse(char b[],int n){
    int i=0,s=0,e=(n-1);
    while (s<=e)
    {
        if (b[s]!=b[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
        
    }
   return 1; 
}
int main(){
    char name[100];
    cout<<"Enter your name\n";
    cin>>name;
    int len=length(name);
    cout<<"Length is "<<len<<endl;
    cout<<"Reverse or not"<<endl<<reverse(name,len);
    return 0;
}