#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<string,int>m;
    //insertion

    //1
    pair<string,int> p=make_pair("pradeep",1);
    m.insert(p);

    //2
    pair<string,int>p2("singh",2);
    m.insert(p2);

    //3
    m["mera"]=1;
    //what will happen->it will overwrite 1 as 2
    m["mera"]=2;

    cout<<m["mera"]<<endl;

    cout<<m.at("pradeep")<<endl;
    // cout<<m.at("unknown")<<endl; //it will not give any value but if we do as below
    cout<<m["unknown"]<<endl;//it will give 0
    cout<<m.at("unknown")<<endl;//now it will give 0,because entry has been made

    ///size
    cout<<m.size()<<endl;

    //to check presence
    cout<<m.count("pradeep")<<endl;
    cout<<m.count("prp")<<endl; //it will give 0

    //erase
    m.erase("mera");
    cout<<m.size()<<endl;
    unordered_map<string,int>::iterator it=m.begin();
    while (it!=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    
    return 0;
}