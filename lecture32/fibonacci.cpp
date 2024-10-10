#include <iostream>
using namespace std;
int printFibonacci(int n){
  if (n==1)
  {
    return 0;
  }
  else if (n==2)
  {
    return 1;
  }
  
  else
  {
    return  printFibonacci(n-1)+printFibonacci(n-2);
  }
  
}

int main(){
    int n;
    cin>>n;
   cout<<printFibonacci(n);
    return 0;
}