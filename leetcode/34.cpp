#include<iostream>
using namespace std;
int leftmost(int arr[],int size,int key){
int start=0;
int end=size-1;
int mid=start+(end-start)/2;
int ans=-1;
while (start<=end)
{
    if (arr[mid]==key)
    {
        ans= mid;
        end=mid-1; 
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
        
    }
     mid=start+(end-start)/2;
     
}
return ans;
}
int rightmost(int arr[],int size,int key){
int start=0;
int end=size-1;
int mid=start+(end-start)/2;
int ans=-1;
while (start<=end)
{
    if (arr[mid]==key)
    {
        ans= mid;
        start=mid+1;
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
        
    }
     mid=start+(end-start)/2;
}
return ans;
}
    int main(){
    int even[6]={3,3,3,3,5,6};
    int first=leftmost(even,6,3);
    int last=rightmost(even,6,3);
    int count=(last-first+1);
    cout<<first<<" "<<last<<endl;
    cout<<"The total repetition is "<<count;
}