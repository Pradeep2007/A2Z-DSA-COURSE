#include<iostream>
using namespace std;
bool search(int a[],int size,int key){
for (int i = 0; i <size; i++)
{
    if (a[i]==key)
    {
        return 1;
    }
    else{
        return 0;
    }
}
}
int main(){
    int arr[5]={1,2,3,-5,-6};
    int found=search(arr,5,-5); 
    if (found)
    {
        cout<<"Element is present\n";
    }
    else
    {
        cout<<"Element is not present\n";
    }
}