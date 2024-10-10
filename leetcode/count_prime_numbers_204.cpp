// #include <iostream>
// using namespace std;
// bool isprime(int n){
//     for (int i = 2; i < n; i++)
//     {
//         if (n%i==0)
//         {
//             return false;
//         }
        
//     }
//     return true;
// }
// int count(int n){
//     int count=0;
//     for(int i=2;i<n;i++)
//     {
//     if(isprime(i)){
//         count++;
//     }
//     }
//     return count;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<count(n);
//     return 0;
// }
//this will show tle,so->
#include <iostream>
#include<vector>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> prime(n+1,true);
   prime[0]=prime[1]=false;
   int count=0;
   for (int i = 2; i < n; i++)
   {
      if (prime[i])
      {
        count++;
        for (int j = 2*i; j < n; j=j+i)
        {
            prime[j]=0;
        }
        
      }
      
   }
   cout<<count;
    return 0;
}
//time coplexity n*(log(logn));