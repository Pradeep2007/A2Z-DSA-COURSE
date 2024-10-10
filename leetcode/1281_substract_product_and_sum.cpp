#include <iostream>
using namespace std;
int ans(int n){
    int product=1,sum=0,digit;
    while (n!=0)
    {
        digit=n%10;
        product=product*digit;
        sum+=digit;
        n/=10;
    }
    return product-sum;
}
int main(){
    int n;
    cin>>n;
    cout<<ans(n);
    return 0;
}