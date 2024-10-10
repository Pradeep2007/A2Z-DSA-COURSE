#include <iostream>
using namespace std;

int main(){
    int i=0,count=0;
    char name[]="Pradeep Singh Yadav";
    while (name[i]!='\0')
    {
        count++;
        i++;
    }
    cout<<"The length of string is "<<count;
    return 0;
}