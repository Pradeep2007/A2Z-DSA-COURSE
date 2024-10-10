#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int digit = (log10(n))+1;
        int sum=0;
        int product=1;
        for(int i=1;i<=digit;i++){
            sum=sum+(n%10);
            product =product*(n%10);
            n=n/10;
        }
        cout<< product-sum;
    return 0;
}