Node* floydDetectLoop(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if (slow==fast)
        {
            cout<<"present at "<<slow->data;
            return slow;
        }
        
    }
    return NULL:
}
//t.c=o(n)
//s.c=o(1)
//to find starting of loop
Node* getStartingNode(Node* head){
    if (head==NULL)
    {
        return NULL;
    }
    
    Node* intersection=floydDetectLoop(head);
    slow=head;
    while (slow!=intersection)
    {
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}
//TO REMOVE LOOP;
void removeLoop(Node* head){
    Node* startOfLoop=getStartingNode(head);
    Node* temp=startOfLoop;
    while (temp->next!=startofLoop){
        temp=temp->next;
    }
    temp->next=NULL:
}//T.C=O(N);
//S.C=O(1)