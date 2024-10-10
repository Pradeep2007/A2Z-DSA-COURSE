

#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    float d,x,y;
    cin>>d>>x>>y;
    float w=100/d;
    if(x==y){
        cout<<0<<endl;
    }
    else{
        int bo=1;
        for(float i=1;i<=w;i++){
            float p=x*(100-(i*d))/100;
            if((y-i)>=p){
                cout<<(int)i<<endl;
                bo=0.0;
                break;
            }
        }
        if(bo){
            cout<<"-1"<<endl;
        }
    }
}
}
