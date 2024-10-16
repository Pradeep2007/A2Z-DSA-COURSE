#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<int> st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch=='(' || ch=='+' ||ch=='-' || ch=='*' || ch=='/'){
            st.push(ch);
        }
        else
        {
            if(ch==')'){
                bool isredundant=true;
                while(st.top()!='('){
                    char top=st.top();
                    if(top=='+' || top=='-' || top=='*' || top=='/'){
                        isredundant=false;
                    }
                    st.pop();
                }
                if(isredundant==true)
                    return true;
                    st.pop();
                
            }
        }
    }
    return false;
}
//time complexity o(n)
//space complexity o(n)