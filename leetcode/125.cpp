#include <iostream>
#include<string>
using namespace std;
int valid(char ch){
    if ((ch>='a' && ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0'&&ch<='9'))
    {
        return 1;
    }
   return 0; 
}
char tolowercase(char ch){
    if ((ch>='a' && ch<='z')||(ch>='0'&&ch<='9'))
    {
        return ch;
    }
    else
    {
        char temp=ch-'A'+'a';
        return temp;
    }
    
}
int panildrom(string st){
    int s=0,e=(st.length())-1;
     while (s<=e)
     {
        if (st[s]!=st[e])
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
    string st;
    cout<<"Enter the string\n";
    getline(cin,st);
    string temp="";
    for (int i = 0; i < st.length(); i++)
    {
        if (valid(st[i]))
        {
            temp.push_back(st[i]);    
        }
        
    }
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j]=tolowercase(temp[j]);
    }
     if (panildrom(temp)) {
    cout << "The string is a palindrome.\n";
} else {
    cout << "The string is not a palindrome.\n";
}

}