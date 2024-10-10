#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;


   Node(int data){
    this->data=data;
    this->next=NULL;
   }
   //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void InsertAtHead(Node* &head,int d){
    //new node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node* &tail,int d){
    //new node create
    Node* temp=new Node(d);
    tail->next=temp;
    // tail=tail->next;
    tail=temp;
}

void InsertAtPosition(Node* &tail,Node* &head,int position,int d){
    //Insert At Start
    if(position==1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //Inserting At Last Position
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

void deleteNode(int position, Node* &head, Node* &tail) { 
    // Deleting first or start node
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    } else {
        // Deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;

        while (cnt < position) {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;

        // If deleting the last node, update the tail pointer
        if (curr->next == NULL) {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
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
int main(){
    Node* node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    //head pointed to node 1
    Node* head=node1;
    Node* tail=node1;
    print(head);
    // InsertAtHead(head,12);
    // InsertAtHead(head,15);
    InsertAtTail(tail,12);
    InsertAtTail(tail,15);
    print(head);
    // InsertAtPosition(tail,head,3,20);
    // InsertAtPosition(tail,head,1,40);

    InsertAtPosition(tail,head,4,45);
    print(head);
    // cout<<"head "<<head->data<<endl;
    // cout<<"tail "<<tail->data<<endl;
    deleteNode(4,head,tail);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    return 0;
}