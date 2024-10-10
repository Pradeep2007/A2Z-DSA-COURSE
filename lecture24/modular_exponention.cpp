#include <iostream>
using namespace std;

int main()
{
    int x, n, m;
    cin >> x >> n >> m;
    int result = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            result = (1LL * (result) * (x) % m) % m;
        }
        x = (1LL * (x) % m * (x) % m) % m;
        n=n >> 1;
    }
    cout << result;
    return 0;
}