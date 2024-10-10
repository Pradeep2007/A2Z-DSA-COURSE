#include <iostream>
#include<vector>
using namespace std;
void printvect(vector<int> v){
    cout<<"The size of vect is "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
}
int main(){
    int N;
    cout<<"Enter the value of N\n";
    cin>>N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cout<<"enter the value of n\n";
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cout<<"enter the value of x\n";
            cin>>x;
            v[i].push_back(x);
        }
        printvect(v[i]);
    }
    //To print vector;
    
    
    
    return 0;
}
