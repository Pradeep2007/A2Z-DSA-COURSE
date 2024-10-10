#include<iostream>
using namespace std;
bool iseven(int a){
        if (a&1)
        {
            return 0;
        }
        else
        {
            return 1;
        }
        
    }
int main(){
int n;
cout<<"Enter the number\n";
cin>>n;
if (iseven(n))
{
    cout<<n<<" "<<"is an even number\n";
}
else
{
    cout<<n<<" "<<"is an odd number\n";
}
   
}