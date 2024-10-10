#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0)
    return 1;
    int small=factorial(n-1);//this is called recursive relation
    int fact=n*small;//this is called processing
    //when recursivr relation come above processing then it is called head relation like given code
    //& when come below then it is called tail relation
    return fact;
}
int main(){
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans;
    return 0;
}