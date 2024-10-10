#include <iostream>
using namespace std;
void printarray(int a[][4],int row,int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
void printsum(int a[][4],int row,int col){
    for (int i = 0; i < row; i++)
    {
        int sum=0;
        for (int j = 0; j < col; j++)
        {
            
            sum+=a[i][j];
        }
        cout<<"Sum for "<<i<<" row is "<<sum<<endl;
    }
    
}
int main(){
    int a[3][4];
    cout << "Enter elements of array: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>a[i][j];
        }
        
    }
    printarray(a,3,4);
    printsum(a,3,4);
    return 0;
}