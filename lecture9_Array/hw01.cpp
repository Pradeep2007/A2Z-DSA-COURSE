#include<iostream>
using namespace std;
int fibo(int n){
if (n==1)
{
    return 0;
}
else if (n==2)
{
    return 1;
}
else
{
    return fibo(n-1)+fibo(n-2);
}

}
int main(){
int n;
cout<<"enter the number\n";
cin>>n;
cout<<"term is:"<<fibo(n)<<endl;
cout<<"The fibonacci series is \n";
for (int i = 1; i <=n; i++)
{
    if (i==n)
    {
        cout<<fibo(i);
    }
    else{
   cout<<fibo(i)<<","; }
}
}