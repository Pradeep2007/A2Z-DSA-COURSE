#include <iostream>
using namespace std;

int main(){
    int arr[10]={1,4,3};
    int *temp=&arr[0];
    cout<<"The address of first index is "<<arr<<endl;
    cout<<"The address of first index is "<<&arr[1]<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<arr[2]<<endl;
    cout<<(2[arr])<<endl;
    //we can see that 2[arr]=arr[2];
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(*arr)<<endl;
    cout<<sizeof(&temp)<<endl;
    return 0;
}