// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     char ch='A';
//     cout<<"enter the no. of rows\n";
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//             cout<<ch<<" ";
            
//         }
//         ch++;
//         cout<<'\n';
        
        
//     }
    
// }
// ***************************************************
// 
#include<iostream>
// #include<math.h>
using namespace std;
int main(){
    int n,comp=0,i=0;
    cout<<"enter the number\n";
    cin>>n;
    int ans=0;
    while (n!=0)
    {
        int bit=n&1;
        // if(bit==0){
        //    return 1;
        // }
        // else
        // {
        //    return 0;
        // }
        ans=ans*10+bit;
        n>>1;
    }
    cout<<ans<<'\n';
//     while (ans!=0)
//     {
//         int digit=ans%10;
//         if(digit=1){
//         comp=comp+(pow(2,i));
//         i++;
//     }
//     cout<<comp;
    
// }
}
