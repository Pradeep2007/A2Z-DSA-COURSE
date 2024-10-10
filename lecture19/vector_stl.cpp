#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    cout<<"capacity "<<a.capacity()<<endl;
    cout<<"size "<<a.size()<<endl;
    // To insert an element
    a.push_back(2);
    cout<<"capacity "<<a.capacity()<<endl;
    cout<<"size "<<a.size()<<endl;
    a.push_back(5);
    cout<<"capacity "<<a.capacity()<<endl;
    cout<<"size "<<a.size()<<endl;
    a.push_back(9);
    cout<<"capacity "<<a.capacity()<<endl;
    cout<<"size "<<a.size()<<endl;
    cout<<"First element "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;
    for(int i:a){
        cout<<i<<endl;
    }
    a.pop_back();
    cout<<"capacity "<<a.capacity()<<endl;
    cout<<"size "<<a.size()<<endl;
    cout<<"First element "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;
    for(int i:a){
        cout<<i<<endl;
    }
    a.pop_back();
    cout<<"capacity "<<a.capacity()<<endl;
    cout<<"size "<<a.size()<<endl;
    cout<<"First element "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;
    a.clear();
    cout<<"capacity "<<a.capacity()<<endl;
    cout<<"size "<<a.size()<<endl;
    cout<<"First element "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;
    for(int i:a){
        cout<<i<<endl;
    }
    //another way to write vector
    vector<int> v(5,1);
    vector<int> last(v);
    for(int i:last){
        cout<<i<<endl;
    }
}