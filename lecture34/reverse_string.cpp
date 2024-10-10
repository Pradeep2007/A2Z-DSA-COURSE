#include <iostream>
using namespace std;
void reverse(string &s,int i,int j){
    cout<<"call for reversing "<<s<<endl;
    cout<<endl;
    if(i>j){
        return;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);
}
int main(){
    string s="pradeep";
    reverse(s,0,s.length()-1);
    cout<<endl;
    cout<<"String after reversing is "<<s;
    cout<<endl;
    return 0;
}