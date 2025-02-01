// #include <iostream>
// using namespace std;
// int partition(int arr[],int s,int e){
//     int pivot=arr[s];
//     int cnt=0;
//     for (int i = s+1; i <=e; i++)
//     {
//         if (arr[i]<pivot)
//         {
//             cnt++;
//         }
        
//     }
//     int pivotIndex=s+cnt;
//     swap(arr[pivotIndex],arr[s]);
//     int i=s,j=e;
//     while (i<pivotIndex && j>pivotIndex)
//     {
//         while (arr[i]<arr[pivotIndex])
//         {
//             i++;
//         }
//         while (arr[j]>arr[pivotIndex])
//         {
//             j--;
//         }
//         if (i<pivotIndex && j>pivotIndex)
//         {
//             swap(arr[i++],arr[j--]);
//         }
        
//     }
//     return pivotIndex;
// }
// void quickSort(int arr[],int s,int e){
//    if (s>e)
//    {
//     return;
//    }
//    //partition kr rhe h
//     int p=partition(arr,s,e);
//     //left wale part ko sort krna h
//     quickSort(arr,s,p-1);
//     //right wale part ko sort krna h
//     quickSort(arr,p+1,e);
// }
// int main(){
//     int arr[5]={12,11,10,15,16};
//     quickSort(arr,0,4);
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }cout<<endl;
    
//     return 0;
// }

#include <iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for (int i = s+1; i < e+1; i++)
    {
        if (arr[i]<pivot)
        {
            cnt++;
        }
        
    }
    int pivotIndex=s+cnt;
    swap(arr[pivotIndex],arr[s]);
    int i=s,j=e;
    while (i<pivotIndex && j>pivotIndex)
    {
        while (arr[i]<arr[pivotIndex])
        {
            i++;
        }
        while (arr[j]>arr[pivotIndex])
        {
            j--;
        }
        if (i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
        
    }
    return pivotIndex;
}
void quickSort(int arr[],int s,int e){
    if (s>e)
    {
        return;
    }
    
    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main(){
    int arr[10]={12,11,10,15,16,14,3,24,56,78};
    quickSort(arr,0,9);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    return 0;
}