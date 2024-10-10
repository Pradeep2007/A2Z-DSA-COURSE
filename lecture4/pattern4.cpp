// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of elements: ";
//     cin>>n;
//     int i=0;
//     while (i<n)
//     {
//         int j=(3*i)+1;
//         while (j<=3*(i+1) )
//         {
//             cout<<j<<'\t';
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
    
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int i=1,count=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n )
        {
            cout<<count<<'\t';
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}