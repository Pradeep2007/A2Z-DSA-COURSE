//REVERSE A STRING
#include <iostream>
using namespace std;
void reverse(char v[],int a){
    int s=0,e=a-1;
    while(s<e){
        swap(v[s++],v[e--]);
    }
}
int length(char v[]){
    int i=0,count=0;
    while (v[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    int l=length(name);
    reverse(name,l);
    cout<<"\nReverse of  is : "<<name<<endl;
    return 0;
}