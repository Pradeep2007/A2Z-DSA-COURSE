#include <iostream>
using namespace std;
class Node{
    public:
           int data;
           Node* next;
  
   Node(int d){
    this->data=d;
    this->next=NULL;
   }
   
};
void InsertAtTail(Node* &tail,int d){
    //new node create
    Node* temp=new Node(d);
    tail->next=temp;
    // tail=tail->next;
    tail=temp;
}
//ITERATIVE WAY TO REVERSE LINKEDLIST
int reverseLinkedList(Node* head){
    Node* curr=head;
    Node* forward=curr->next;
    Node* prev=NULL;
    if(head==NULL || head->next==NULL){
        return head->data;
    }
    
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }

        return prev->data;
    
}
//RECURRSIVE WAY TO REVERSE LINKEDLIST
Node* reverse1(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* chotahead=reverse1(head->next);
    head->next->next=head;
    head->next=NULL;
    return chotahead;
}
void reverse(Node* &head,Node* curr,Node* prev){
   //BASE CASE
   if(curr==NULL){
    head=prev;
    return;
   }
   Node* forward=curr->next;
   reverse(head,forward,curr);
   curr->next=prev;
}
//TIME COMPLEXITY OF RECURRSIVE FUNCTION IS O(N)
//SPACE COMPLEXITY IS ALSO O(N)
void print(Node* &head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1= new Node(10);
    Node* tail=node1;
    Node* head=node1;
    Node* curr=head;
    Node* prev=NULL;
    InsertAtTail(tail,20);
    print(head);
    InsertAtTail(tail,30);
    InsertAtTail(tail,40);
    InsertAtTail(tail,50);
    print(head);
    reverseLinkedList(head);
    print(tail);
    return 0;
}