#include <iostream>
using namespace std;
int limit =5;//this is global variable
void a(int& i){
    cout<<i<<endl;
    cout<<limit<<"in a"<<endl;
}
void b(int &i){
    cout<<i<<endl;
    cout<<limit<<"in b"<<endl;
}
int main(){
    int i=5;
    a(i);
    b(i);
    cout<<limit<<"in main"<<endl;
    return 0;
}