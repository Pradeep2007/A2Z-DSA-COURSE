#include <iostream>
#include <vector>
using namespace std;
int printvector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        // v.size->O(1);
        // v.push_back(x)->O(1);
        cout << "The size of vector is:" << v.size() << endl;
        printvector(v);
        cout<<"*****************"<<endl;
    }
    vector<int>v2=v;
    v2.push_back(125);
    printvector(v);
    vector<int>&v3=v;
    v3.push_back(125);
    printvector(v);
}
