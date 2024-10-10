#include<iostream>
using namespace std;
int peak(int a[],int size){
    int start=0;
    int end=size-1;
    int mid= start+(end-start)/2;
while(start<=end){  
if (a[mid]>a[mid-1] && a[mid]>a[mid+1])
{
    return mid;
}
else if (a[mid]>a[mid-1] && a[mid]<a[mid+1])
{
    start=mid+1;
}
else
{
    end=mid-1;
}
   mid=start+(mid-start)/2;
}
return -1;
}
int main(){
int arr[10]={1,2,3,4,6,5,4,3,2,1};
int index=peak(arr,10);
cout<<"The index of peak element is "<<index;
}