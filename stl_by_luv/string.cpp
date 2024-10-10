#include <iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    cout<<"The length is "<<s.length()<<endl;
    cout<<"The size is "<<s.size()<<endl;
    return 0;
}