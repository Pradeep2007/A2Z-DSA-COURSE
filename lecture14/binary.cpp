#include<iostream>
using namespace std;
int binary(int arr[],int size,int key){
int start=0;
int end=size-1;
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
    int main(){
    int even[6]={1,2,3,4,5,6};
    int  odd[6]={21,22,23,24,25,26};
    int evenindex=binary(even,6,3);
    int oddindex=binary(odd,6,25);
    cout<<"The index of element 6"<<" "<<evenindex<<endl;
    cout<<"The index of element 6"<<" "<<oddindex;
}