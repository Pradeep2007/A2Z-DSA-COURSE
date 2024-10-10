#include <iostream>
using namespace std;

int findPivot(int arr[],int size){
    int s=0,e=size-1;
    int m=s+(e-s)/2;
    while (s<e)
    {
        if(arr[m]>=arr[0]){
           s=m+1;
        }
        else{
            e=m;
        }
        m=s+(e-s)/2;
    }
    return s;
}

int binarySearch(int arr[],int start,int end,int k){
    int s=start;
    int e=end;
    int m=s+(e+s)/2;
    while(s<e){
        if (arr[m]==k)
        {
            return m;
        }
        else if(arr[m]<k)
        {
            s=m+1;
        }
        else{
            e=m-1;
        }
        m=s+(e-s)/2;
    }
    return -1;
}

int Findposition(int arr[],int n,int k){
    int pivot=findPivot(arr,5);
    if (arr[pivot]<=k && k<=arr[n-1])
    {
        return binarySearch(arr,pivot,n-1,k);  
    }
    else
    {
        return binarySearch(arr,0,pivot-1,k);
    }
    
}

int main(){
    int a[5]={4,5,1,2,3};
    int position=Findposition(a,5,2);
    cout<<"Position is "<<position;
    return 0;
}