#include <iostream>
using namespace std;
void merge(int a1[],int n,int a2[],int m){
 int i =0 ,j =0, k =0;

    while (j<n && k<m)
    {
        if (a1[j]<a2[k])
        {
           
            i++;
            j++;
        }
        else
        {   
            for(int x =n;x>=j;x--){
                a1[x+1] = a1[x];
            }
            a1[i] = a2[k];
            n++;
            k++;
            i++;
            j++;
            
        }
        
    }
    while (k<m)
    {
        a1[i++]=a2[k++];
    }
   while (j<m)
    {
        a1[i++]=a2[k++];
    } 
    
}
void print(int a[],int k){
    cout<<"After merging two arrays\n";
    for (int i = 0; i < k; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main(){
    int a1[6]={1,2,3,0,0,0};
    int a2[3]={2,5,6};
    merge(a1,3,a2,3);
    print(a1,6);
    return 0;
}