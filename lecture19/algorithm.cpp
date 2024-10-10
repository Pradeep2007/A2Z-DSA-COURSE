#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(8);
    v.push_back(9);
    cout<<"Original Vector: ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Where 9 is present "<<binary_search(v.begin(),v.end(),9)<<endl;
    cout<<"Lowerbound of 9 is" <<lower_bound(v.begin(),v.end(),9)-v.begin()<<endl;
    cout<<"Upperbound of 9 is" <<upper_bound(v.begin(),v.end(),9)-v.begin()<<endl;
    int a=5;
    int b=6;
    int maxi=max(a,b);
    int mini=min(a,b);
    cout<<"Maximum between "<<a<<" and "<<b<<" is "
    <<maxi<<endl;
    cout<<"Minimum between "<<a<<" and "<<b<<" is "
    <<mini<<endl;
    swap(a,b);
    cout<<"After Swapping\nA="<<a<<"\nB="<<b
    <<endl;
    string ab ="Pradeep";
    reverse(ab.begin(),ab.end());
    cout<<"Reversed String = "<<ab<<endl;

}