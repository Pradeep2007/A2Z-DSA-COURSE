// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[5] = {1, 2, 3, 3, 5};
//     int b[6] = {1, 2, 3, 46, 8, 5};
//     int c[5];
//     int count = 0;
//     cout<<"The intersection is:\n";
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 6; j++)
//         {
//             if (a[i] == b[j])
//             {
//                 c[i] = b[j];
//                 cout<<b[j]<<",";
//                 b[j]=-1;
//                 break;
//             }
//         }
//     }
// }
//OPTIMISED SOLUTION:
#include<iostream>
using namespace std;
int main(){
    int A[5]={1,2,3,3,5};
    int B[6]={1,2,3,5,8,45};
    int i=0,j=0;
    cout<<"The intersection of element is:\n";
    while (i<5 && j<6)
    {
        if (A[i]==B[j])
        {
            cout<<B[j]<<",";
            i++;
            j++;
        }
        else if (A[i]>B[j])
        {
            j++;
        }
        else
        {
            i++;
        }
        
    }
    
    }
    
