#include <iostream>
using namespace std;
void reachHome(int src,int destination){
   cout<<"source "<<src<<" "<<"destination "<<destination<<endl;
   if(src==destination){
    cout<<"pahunch gaya"<<endl;
    return;
   }
   src++;
   reachHome(src,destination);
}
int main(){
    int destination=10;
    int src=1;
    reachHome(src,destination);
    return 0;
}