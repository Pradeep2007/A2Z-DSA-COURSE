#include <iostream>
using namespace std;
bool ispossible(int arr[],int k, int mid)
{
    int student = 1;
    int pagesum = 0;
    for (int i = 0; i < 4; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            student++;
            if (student > k || arr[i] > mid)
            {
                return false;
            }

            pagesum = arr[i];
        }
        
    }
    return true;
}
int main()
{
    int a[4] = {10, 20, 30, 40};
    int s = 0, sum = 0, ans = -1,k;
    cin>>k;
    for (int i = 0; i < 4; i++)
    {
        sum += a[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (ispossible(a,k,mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout<<"the answer is "<<ans;
}
