// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={22,11,66,53,84,236,51,23,1,2};
//     for (int i = 1; i <10; i++)
//     {
//         for (int j =i; j>0; j--)
//         {
//             int temp=arr[j];
//             if (arr[j]<arr[j-1])
//             {
//                 arr[j]=arr[j-1];
//                 arr[j-1]=temp;
                
//             }
            
//         }
        
//     }
//     cout<<"The array after sorting is:\n";
//     for (int i = 0; i < 10; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
    
// } 
//*************************************************************
#include<iostream>
using namespace std;
int main(){
    int arr[10]={22,11,66,53,84,236,51,23,1,2};
    for (int i = 1; i < 10; i++)
    {
        int j=i-1;
        int temp=arr[i];
        for (; j>=0; j--)
        {
            if (arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
            
            
        }
        arr[j+1]=temp;
    }
    cout<<"The array after sorting is:\n";
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}