#include <iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if (size==0 || size==1)
    {
        return true;
    }
    if (arr[0]>arr[1])
    {
        return false;
    }
    else
    {
        return isSorted(arr+1,size-1);
    }
}
int main(){
    int arr[5]={2,4,6,5,9};
    int ans=isSorted(arr,5);
    if (ans)
    {
        cout<<"Array is sorted\n";
    }
    else
    {
        cout<<"Array is not sorted\n";
    }
    
    return 0;
}