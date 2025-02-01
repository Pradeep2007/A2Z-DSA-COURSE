#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {6, 10, 11, 2, 5, 13, 14, 8, 9, 15};
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9- i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout<<"The array after sorting is\n";
    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
        {
            cout << arr[i];
        }
        else
        {
            cout << arr[i] << ",";
        }
    }
}