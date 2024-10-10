#include <iostream>
using namespace std;
char getmax(string st){
    int a[26]={0};
    for (int i = 0; i < st.length(); i++)
    {
        int number=0;
        char ch=st[i];
        number=ch-'a';
        a[number]++;
    }
    int maxi=0,ans=0;
    for (int j = 0; j < 26; j++)
    {
        if (maxi<a[j])
        {
           ans=j;
           maxi=a[j];
        }
        
    }
    return ans+'a';
}
int main(){
    string s;
    getline(cin,s);
    cout<<"The max occurace is of "<<getmax(s);
    return 0;
}