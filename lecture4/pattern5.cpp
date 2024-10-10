// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of elements: ";
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             cout<<"*"<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
    
// }
// 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int i=1;
    while (i<=n)
    {int count =i;
        int j=1;// also print without using count;
        while (j<=i)
        {
            
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}