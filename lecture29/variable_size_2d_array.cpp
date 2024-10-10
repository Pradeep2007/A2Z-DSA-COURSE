#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    int **arr = new int *[row]; // creating a dynamic 2D array using pointers to pointers
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col]; // allocating memory for each row of the array
    }
    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> (arr[i][j]);
        }
    }
    // printing 2d array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // releasing memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}