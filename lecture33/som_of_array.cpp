#include <iostream>
using namespace std;
int getSum(int arr[],int size){
    if (size==0)
    {
        return 0;
    } 
    if (size==1)
    {
        return arr[0];
    }
    
    return arr[0]+getSum(arr+1,size-1);
}
int main(){
    int arr[5]={2,4,6,8,9};
    int ans=getSum(arr,5);
    cout<<"The sum of element of array is "<<ans;
    
    return 0;
}