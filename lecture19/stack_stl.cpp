#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Pradeep");
    s.push("Singh");
    s.push("Yadav");
    cout<<"Top element "<<s.top()<<endl;
    cout<<"Size of stack is "<<s.size()<<endl;
    s.pop();
    cout<<"After pop operation top element is "<<s.top()<<endl;
    cout<<"Size of stack is "<<s.size()<<endl;
    
}