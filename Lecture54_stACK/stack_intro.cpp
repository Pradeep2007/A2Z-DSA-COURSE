#include <iostream>
#include<stack>
using namespace std;

class Stack{
  public:
  int top;
  int *arr;
  int size;

  Stack(int size){
    this->size=size;
    arr=new int[size];
    top=-1;
  }  

  void push(int element){
    if(size-top>1){
        top++;
        arr[top]=element;
    }
    else{
        cout<<"stack is overflow\n";
    }
}
    void pop() {
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack is empty\n";
            
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty\n";
            return -1;
        }

    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};


int main(){
    // stack<int>s;
    // //insertind elements
    // s.push(3);
    // s.push(2);

    Stack st(5);
    st.push(40);
    st.push(44);
    st.push(48);

    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"stack is empty mere dost"<<endl;
    }
    else{
        cout<<"stack is not emty mere dost"<<endl;
    }

    return 0;
}