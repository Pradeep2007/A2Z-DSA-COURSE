#include <iostream>
using namespace std;
void merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    int leng1=mid-s+1;
    int leng2=e-mid;
    int *first=new int[leng1];
    int *second=new int[leng2];
    int minArrayIndex=s;
    for (int i = 0; i < leng1; i++)
    {
        first[i]=arr[minArrayIndex++];
    }
    minArrayIndex=mid+1;
    for (int i = 0; i < leng2; i++)
    {
        second[i]=arr[minArrayIndex++];
    }
    int index1=0;
    int index2=0;
    minArrayIndex=s;
    while (index1<leng1 && index2<leng2)
    {
        if (first[index1]<second[index2])
        {
            arr[minArrayIndex++]=first[index1++];
        }
        else
        {
            arr[minArrayIndex++]=second[index2++];
        }
        
    }
    while (index1<leng1)
    {
        arr[minArrayIndex++] =first[index1++]; 
    }
    while (index2<leng2)
    {
        arr[minArrayIndex++]=second[index2++];
    }
    delete []first;
    delete []second;
}
void sort(int arr[],int s,int e){
    if (s>=e)
    {
        return;
    }
    int mid=s+(e-s)/2;
    //left part sort krna h
    sort(arr,s,mid);
    //right part sort krna h
    sort(arr,mid+1,e);
    //dono sorted part merge krna h
    merge(arr,s,e);
}
int main(){
    int arr[5]={1,3,2,5,4};
    sort(arr,0,4);  
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}