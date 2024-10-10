#include <iostream>
using namespace std;
inline int getmax(int &i,int &j){
    return (i>j)?i:j;
}
//fayada of inline function is to reduce memory use
//we can convert a function into inline function if it is one liner function
//if it is two or three liner function then it will depend on compiler
//if greater then 3 liner then copiler hath jod lega
int main(){
    int a=1,b=2,ans=0;
    ans=getmax(a,b);
    cout<<ans<<endl;
    a=a+4;
    b=b+2;
    ans=getmax(a,b);
    cout<<ans<<endl;
    return 0;
}