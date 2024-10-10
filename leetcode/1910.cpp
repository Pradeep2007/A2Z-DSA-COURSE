#include <iostream>
#include<string>
using namespace std;
int main(){
    string s="daabcbaabcbc";
    string part="abc";
    int i=0;
    while (s.length()!=0 && s.find(part)<s.length())
    {
       s.erase(s.find(part),part.length());
    }
    cout<<"After removing part,string is "<<s;
    return 0;
}