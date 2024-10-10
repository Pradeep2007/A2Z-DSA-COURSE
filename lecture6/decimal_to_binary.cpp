// #include <iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int n;
//     int ans=0,i=0;
//     cin>>n;
//     while (n!=0)
//     {
//         int bit=n&1;
//         cout<<bit<<endl;
//         ans=(bit*pow(10,i))+ans;
//         cout<<ans<<endl;
//         n=n>>1;
//         cout<<n<<endl;
//         i++;
//     }
//     cout<<"Answer is "<<ans;
//     return 0;
// }

#include<iostream>
#include<math.h>
using namespace std;


int main() {

    int n;
    cin >> n;


    int ans  = 0;
    int i = 0;
    while(n != 0 ) {

        int bit  = n & 1;

        ans = (bit * pow(10, i) ) + ans;

        n = n >> 1;
        ++i;

    }

    cout<<" Answer is " << ans << endl;
    return 0;
}