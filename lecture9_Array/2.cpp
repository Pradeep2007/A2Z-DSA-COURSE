#include <iostream>
using namespace std;
void update(int a[])
{
    a[0] = 120;
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int arr[3] = {1, 2, 3};
    update(arr);
    cout << '\n';
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
}