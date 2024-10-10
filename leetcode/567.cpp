#include <iostream>
#include<string>
using namespace std;
bool checkequal(int a[],int b[]){
    for (int i = 0; i < 26; i++)
    {
        if (a[i]!=b[i])
        {
            return 0;
        }
        
    }
    return 1;
}
bool checkinclusion(string s1,string s2){
    int count1[26]={0};
    for (int i = 0; i < s1.length(); i++)
    {
      int index=0;
      index=s1[i]-'a';
      count1[index]++;
    }
    int i=0;
    int count2[26]={0};
    while (i<s1.length() && i<s2.length())
    {
        int index=0;
        index=s2[i]-'a';
        count2[index]++;
        i++;
    }
    if (checkequal(count1,count2))
    {
        return 1;
    }
    while (i<s2.length())
    {
       int newindex=0;
       newindex=s2[i]-'a';
       count2[newindex]++;
       int oldindex=0;
       oldindex=s2[i-s1.length()]-'a';
       count2[oldindex]--;
       
       if (checkequal(count1,count2))
    {
        return 1;
    }
    i++;
    }
    
}
int main(){
    string s1,s2;
    cout<<"Enter the substring\n";
    getline(cin,s1);
    cout<<"Enter the mainstring\n";
    getline(cin,s2);
    cout<<checkinclusion(s1,s2);
    return 0;
}