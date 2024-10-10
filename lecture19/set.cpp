#include<iostream>
#include<set>
using namespace std;
int main (){
    set<int> s;
    cout<<"The size is "<<s.size()<<endl;
    //Adding elements to the set
    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(10);//Already present in the set so it will not be
    //added again, hence only one copy of 10 will remain
    cout<<"After adding some elements: \n";
    cout<<"Size of the set is : "<<s.size()<<endl;
    //Printing all the elements of the set
    cout<<"Elements are : ";
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    cout<<"Size of the set is : "<<s.size()<<endl;
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"5 is present or not "<<s.count(5)<<endl;
    set<int>::iterator itr=s.find(5);
   for (auto it =itr; it!=s.end(); it++)
   {
    cout<<*it<<" ";
   }cout<<endl;
   
}