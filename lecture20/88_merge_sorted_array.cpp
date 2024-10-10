// #include <iostream>
// using namespace std;
// void merge(int A1[],int n,int A2[],int m,int A3[]){
//     int i=0,j=0,k=0;
//     while (j<n && k<m)
//     {
//         if (A1[j]<A2[k])
//         {
//             A3[i++]=A1[j++];
//         }
//         else
//         {
//             A3[i++]=A2[k++];
//         }
        
//     }
//     while (j<n)
//     {
//         A3[i++]=A1[j++];
//     }
//     while (k<m)
//     {
//         A3[i++]=A2[k++];
//     }
    
// }
// void print(int B[],int k){
//     cout<<"After merging two arrays\n";
//     for (int i = 0; i < k; i++)
//     {
//         cout<<B[i]<<" ";
//     }
    
// }
// int main(){
//     int a1[5]={1,3,5,7,9};
//     int a2[3]={2,4,6};
//     int a3[8];
//     merge(a1,5,a2,3,a3);
//     print(a3,8);
//     return 0;
// }
//*************************************************************************************
//HOMEWORK QUESTION//
#include <iostream>
using namespace std;
void merge(int a1[],int n,int a2[],int m){
 int i =0 ,j =0, k =0;

    while (j<n && k<m)
    {
        if (a1[j]<a2[k])
        {
           
            i++;
            j++;
        }
        else
        {   
            for(int x =n;x>=j;x--){
                a1[x+1] = a1[x];
            }
            a1[i] = a2[k];
            n++;
            k++;
            i++;
            j++;
            
        }
        
    }
    while (k<m)
    {
        a1[i++]=a2[k++];
    }
   while (j<m)
    {
        a1[i++]=a2[k++];
    } 
    
}
void print(int a[],int k){
    cout<<"After merging two arrays\n";
    for (int i = 0; i < k; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main(){
    int a1[6]={1,2,3,0,0,0};
    int a2[3]={2,5,6};
    merge(a1,3,a2,3);
    print(a1,6);
    return 0;
}