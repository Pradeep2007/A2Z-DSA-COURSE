#include <iostream>
using namespace std;
void print(int arr[],int size,int start=0){
    for (int i = start; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
//if we not give value of start then it will suppose 0
//we can also assume value of size but firstly we have to give default value to start
//means we have to assume rightmost first then furthe leftward respectively 
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    print(arr,size);
    cout<<endl;
    print(arr,size,2);
    return 0;
}