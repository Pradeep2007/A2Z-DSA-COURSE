#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> v)
{
    int s = 0;
    int e = v.size()-1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ",";
    }
}
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the value of n\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "The array before reversing is\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ",";
    }cout<<endl;
    cout << "The array after reversing is\n";
    reverse(v);
}