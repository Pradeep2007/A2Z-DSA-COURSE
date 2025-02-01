#include <bits/stdc++.h> 

void heapify(vector<int> &a,int n,int i){
    int smallest=i;
    int left=(2*i)+1;
    int right=(2*i)+2;
    if(left<n && a[smallest]>a[left]){
        smallest=left;
    }
    if(right<n && a[smallest]>a[right]){
        smallest=right;
    }

    if (smallest!=i)
    {
        swap(a[smallest],a[i]);
        heapify(a,n,smallest);
    }
    
}

vector<int> buildMinHeap(vector<int> &arr)
{
    // Write your code here
    int n=arr.size();
    for (int i = n/2-1; i >=0; i--)
    {
        heapify(arr,n,i);
        //iski com o(n)h
    }
    return arr;
}
