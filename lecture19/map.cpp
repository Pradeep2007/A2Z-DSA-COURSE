#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Pradeep";
    m.insert({3, "Yadav"});
    m[2] = "Singh";

    // to print map
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "5 is present " << m.count(5) << endl;
    m.erase(2);
    cout << "After erasing 2\n";
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    auto it=m.find(1);
    for(auto i=it;i!=m.end();i++)
    {
        cout <<(*i).first<<" "<<(*i).second<<endl;
    }
}