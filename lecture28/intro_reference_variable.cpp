#include <iostream>
using namespace std;

int main(){
    int i=5;
    int &j=i;
    cout<<"Value of i is "<<i<<endl;
    i++;
    cout<<"Value of i is "<<i<<endl;
    j++;
    cout<<"Value of i is "<<i<<endl;
    return 0;
}