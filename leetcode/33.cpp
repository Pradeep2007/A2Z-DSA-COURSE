#include<iostream>
using namespace std;
int pivote(int a[],int size){
    int start=0;
    int end =size-1;
    int mid=start+(end-start)/2;
    while (start<end)
    {
        if (a[mid]>=a[0])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
      mid=start+(end-start)/2;  
    }
    return end;  
} 
int binary(int arr[],int s,int e,int key){
int start=s;
int end=e;
int mid=start+(end-start)/2;
while (start<=end)
{
    if (arr[mid]==key)
    {
        return mid;
    }
    else
    {
        if (arr[mid]<key)
        {
            start=mid+1;            
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    } 
}
return -1;
}
int find_position(int c[],int n,int k){
    int index=pivote(c,n);
    if (k>=c[index] && k<c[n-1])
    {
        return binary(c,index,(n-1),k);
    }
    else
    {
        return binary(c,0,index-1,k);
    }
}
int main(){
    int arr[6]={7,8,9,1,2,3};
    cout<<"The answer is "<<find_position(arr,6,9);
}