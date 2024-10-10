#include <iostream>
#include<stack>
using namespace std;

int main(){
    string p="Pradeep";
    stack<char>s;
    for (int i = 0; i < p.length(); i++)
    {
        s.push(p[i]);
    }
    string ans="";
    while (!s.empty())
    {
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }
    
    for (int i = 0; i < ans.length(); i++)
    {
        cout<<ans[i];
    }
    
    return 0;
}