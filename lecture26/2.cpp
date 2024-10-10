#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3};
    char ch[6]="abcde";
    cout<<arr<<endl;
    //here whole string is printing
    cout<<ch<<endl;
    char *c=&ch[0];
    cout<<c<<endl;
    cout<<&ch<<endl;
    return 0;
}