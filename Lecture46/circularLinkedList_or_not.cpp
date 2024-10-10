bool isCircular(Node* head){
    if(head==NULL){
        return true;
    }
    Node* temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if (temp==head)
    {
        cout<<"Linkedlist is circular in nature\n";
    }
    else
    {
            cout<<"Linkedlist is not circular\n";
    }
    
}
//T.C=O(N);
//S.C=O(1);