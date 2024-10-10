#include <iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    string temp;
    for (int i = 0; i < n; i++)
    {
        int p=0;
        for (int j = i; j < n; j++)
        {
            if (i!=j && s[i]==s[j]){
               p=1;
               break;
            }
            
        }
        if (p==0)
        {
            temp+=s[i];
        }
        
    }
        cout<<temp;
    return 0;
}