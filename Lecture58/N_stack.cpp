#include <bits/stdc++.h> 
class NStack
{
    int *arr;
    int *next;
    int *top;
    int n,s;
    int freespot;
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        // Write your code here.
        int n=N;
        int s=S;
        arr=new int[s];
        top=new int[n];
        next=new int[s];

        //top initialise
        for(int i=0;i<n;i++){
            top[i]=-1;
        }
        //initialise next
        for(int i=0;i<s;i++){
            next[i]=i+1;
        }
        next[s-1]=-1;
        freespot=0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Write your code here.
        //check overflow condition
        if(freespot==-1){
            return false;
        }
        //find index
        int index=freespot;
        //update freespot
        freespot=next[index];
        //insert element
        arr[index]=x;
        //update next
        next[index]=top[m-1];
        //update top
        top[m-1]=index;
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Write your code here.
        //check underflow condition
        if(top[m-1]==-1){
            return -1;
        }

        int index=top[m-1];

        top[m-1]=next[index];

        next[index]=freespot;

        freespot=index;
        
        return arr[index];
    }
};