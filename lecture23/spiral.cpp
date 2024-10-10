#include <iostream>
#include<vector>
using namespace std;
int main(){
    int row;
    cin>>row;
    vector<vector<int>> s;
    int col,total;
    cout<<"Enter no. of col\n";
    cin>>col;
    total=row*col;
    for (int i = 0; i < row; i++)
    {
        s.push_back(vector<int>());
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int  x;
            cin>>x;
            s[i].push_back(x);   
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int startingrow=0;
    int startingcol=0;
    int endingrow=row-1;
    int endingcol=col-1;
    int count=0;
    while(count<total){
    for (int i = startingcol; count<total && i <=endingcol; i++)
    {
        cout<<s[startingrow][i]<<" ";
        count++;
    }
    startingrow++;
    for (int i = startingrow; count<total && i <= endingrow; i++)
    {
        cout<<s[i][endingcol]<<" ";
        count++;
    }
    endingcol--;
    for (int i = endingcol; count<total && i >=startingcol; i--)
    {
        cout<<s[endingrow][i]<<" ";
        count++;
    }
    endingrow--;
    for (int i = endingrow; count<total && i >= startingrow; i--)
    {
        cout<<s[i][startingcol]<<" ";
        count++;
    }
    startingcol++;
    }
    return 0;
}