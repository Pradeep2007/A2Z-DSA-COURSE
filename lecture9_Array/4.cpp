#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "Enter the elements of array\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "The array after reversing is:\n";
    for (int i = 0; i < 5; i++)
    {
        swap(arr[i], arr[9 - i]);
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    }
    