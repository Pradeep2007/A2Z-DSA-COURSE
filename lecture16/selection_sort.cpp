#include<iostream>
using namespace std;
int main(){
    int arr[10]={20,58,32,69,74,12,12,568,954,13};
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j <10; j++)
        {
            if (arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
            
        }
        
    }
    cout<<"The array after sorting is\n";
    for (int i = 0; i < 10; i++)
    {
        if (i==9)
        {
            cout<<arr[i];
        }
        else{
        cout<<arr[i]<<",";
        }
    }
    
}