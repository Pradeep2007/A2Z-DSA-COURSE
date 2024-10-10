#include <iostream>
using namespace std;
bool search(int arr[],int size,int key){
    if (size==0)
    {
        return false;
    }
    
    if (arr[0]==key)
    {
        return true;
    }
    search(arr+1,size-1,key);
}
int main(){
    int arr[5]={1,2,3,4,5};
    int key;
    cin>>key;
    int ans=search(arr,5,key);
    if (ans)
    {
        cout<<"found";
    }
    else
    {
        cout<<"not found";
    }
    
    return 0;
}
