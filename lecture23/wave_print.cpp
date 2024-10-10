#include <iostream>
using namespace std;
void waveprintarray(int a[][4],int row,int col){
    for (int j = 0; j < col; j++)
    {
        if (j%2==0)
        // or if(j&1)
        {
            for (int i = 0; i < row; i++)
            {
                cout<<a[i][j]<<" ";
            }
            
        }
        else
        {
            for (int i = row-1; i>=0; i--)
            {
                cout<<a[i][j]<<" ";
            }
        }
        
    }
    
}
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
    cout<<endl;
    waveprintarray(a,3,4);
    return 0;
}