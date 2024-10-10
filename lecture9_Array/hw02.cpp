#include <iostream>
using namespace std;
int main()
{
    int a, b, count = 0;
    cout << "Enter value of a and b\n";
    cin >> a >> b;
    int c=a&b;
    cout<<c<<endl;
while (c!=0)
{
    if (c&1)
    {
        count++;
    }
    c>>1;
}
cout<<"Total no. of set bits are:"<<count;
}
