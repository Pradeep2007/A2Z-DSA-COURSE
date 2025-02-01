#include <iostream>
#include<queue>
using namespace std;

class heap{
public:
        int arr[100];
        int size=0;

        heap(){
                arr[0]=-1;
                size=0;
        }
    
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;

        while (index>1)
        {
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
        
    }

    void print(){
        for (int i = 1; i <=size; i++)
        {
           cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void DeleteFromHeap(){
        if(size==0){
            cout<<"Nothing to delete"<<endl;
            return;
        }
//put Last element into first index
        arr[1]=arr[size];
//remove last element
        size--;
//take root node to its correct position
        int i=1;
        while (i<size)
        {
            int leftindex=2*i;
            int rightIndex=2*i+1;
            if(leftindex<size && arr[i]<arr[leftindex]){
                swap(arr[i],arr[leftindex]);
                i=leftindex;
            }
            else if(rightIndex<size && arr[i]<arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            }
            else{
                return;
            }
        }
        
    }

};

void heapify(int a[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=(2*i)+1;
    if(left<=n && a[largest]<a[left]){
        largest=left;
    }
    if(right<=n && a[largest]<a[right]){
        largest=right;
    }

    if (largest!=i)
    {
        swap(a[largest],a[i]);
        heapify(a,n,largest);
    }
    
}
//ye process logn m shi jgh p pahuncha deti h

void heapSort(int a[],int n){
    int t=n;
    while(t>1){
        swap(a[t],a[1]);
        t--;

        heapify(a,t,1);
    }
}

int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.DeleteFromHeap();
    h.print();
    int a[6]={-1,54,53,55,52,50};
    int n=5;
    // for (int i = n/2; i > 0; i--)
    // {
    //     heapify(a,n,i);
    //     //iski com o(n)h
    // }
    // cout<<"Printing the array now\n";
    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    cout<<endl;
    heapSort(a,n);
    cout<<"sorted array\n";
    for (int i = 1; i <= n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

cout<<"***************************************"<<endl;
// cout<<"Using Priority Queue\n";
//     priority_queue<int>pq;
//     //priority queue maxheap banata h
//     pq.push(2);
//     pq.push(1);
//     pq.push(5);
//     pq.push(4);
//     cout<<"element at top is:"<<pq.top()<<endl;
//     cout<<"size is:"<<pq.size()<<endl;
//     pq.pop();
//     cout<<"size is:"<<pq.size()<<endl;
//     cout<<"element at top is:"<<pq.top()<<endl;
//     if (pq.empty())
//     {
//         cout<<"Queue is empty\n";
//     }
//     else{
//         cout<<"Queue is not empty\n";
//     }

//     //minheap
//     priority_queue<int,vector<int>,greater<int>> minheap;

//     minheap.push(2);
//     minheap.push(1);
//     minheap.push(5);
//     minheap.push(4);
//     cout<<"element at top is:"<<minheap.top()<<endl;
//     cout<<"size is:"<<minheap.size()<<endl;
//     minheap.pop();
//     cout<<"size is:"<<minheap.size()<<endl;
//     cout<<"element at top is:"<<minheap.top()<<endl;
//     if (minheap.empty())
//     {
//         cout<<"Queue is empty\n";
//     }
//     else{
//         cout<<"Queue is not empty\n";
//     }

    
    return 0;
}
//TIME COMPLEXITY OF INSERTION IS O(LOGN)