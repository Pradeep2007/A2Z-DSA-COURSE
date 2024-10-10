#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //CONSTRUCTOR
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

};
void InsertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void print(Node* &head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getlen(Node* head){
    int count=0;
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}
Node* findMiddle(Node* head){
    int len=getlen(head);
    int ans=len/2;
    Node* temp=head;
    int cnt=0;
    while(cnt<ans){
        temp=temp->next;
        cnt++;
    }
    return temp;
}
//UPR WALE KI T.C O(N) H
//ANOTHER METHOD TO SOLVE
Node* findMiddle(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    //2 node hi h linked list m,
    if(head->next->next==NULL){
        return head->next;
    }
    Node* slow=head;
    Node* fast=head->next;
    while (fast!=NULL)
    {
        fast=fast->next;
        if(fast->next!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        return slow;
    }
    
}
int main(){
    Node* node1=new Node(10);
    Node* tail=node1;
    Node* head=node1;
    InsertAtTail(tail,20);
    InsertAtTail(tail,30);
    InsertAtTail(tail,40);
    InsertAtTail(tail,50);
    print(head);
    cout<<findMiddle(head)->data;
    return 0;
}