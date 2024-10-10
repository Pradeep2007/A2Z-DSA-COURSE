#include <iostream>
using namespace std;
bool palindrom(string &s, int i, int j)
{
    if (i > j)
    
        return true;
    
    if (s[i] != s[j])
    {
        return false;
    }
    else
    {
    palindrom(s,i+1,j-1);
    }
}
int main()
{
    string s;
    // cin>>s;
    getline(cin,s);
    cout << endl;
    cout << s << endl;
    int ans = palindrom(s, 0, s.length() - 1);
    if (ans)
    {
        cout << "Given string is palindrom\n";
    }
    else
    {
        cout << "Given string is not palindrom\n";
    }

    return 0;
}