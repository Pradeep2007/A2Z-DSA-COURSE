void insertAtBottom(stack<int>&s,int element){
    if(s.empty()){
        s.push(element);
        return;
    }
    int num=s.top();
    s.pop();

    insertAtBottom(s,element);
    s.push(num);
}

void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()){
        return;
    }
    int num=stack.top();
    stack.pop();

    //recurrsive call
    reverseStack(stack);
    insertAtBottom(stack,num);
}