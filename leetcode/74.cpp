#include <iostream>
#include <vector>
using namespace std;
bool binarysearch(vector<vector<int>> &v, int target, int row, int col)
{
    int s = 0;
    int e = row * col - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int element = v[mid / col][mid % col];
        if (element == target)
        {
            return 1;
        }
        else if (element < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return 0;
}
int main()
{
    vector<vector<int>> s;
    int row, col,target;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        s.push_back(vector<int>());
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int x;
            cin >> x;
            s[i].push_back(x);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"Enter the target\n";
    cin>>target;
    cout << binarysearch(s,target, row, col);
    return 0;
}