Node* shortList(Node* head){
    int zerocount=0;
    int onecount=0;
    int twocount=0;
    Node* temp=head;
    while (temp!=NULL)  
    {
       if (temp->data==0)
       {
        zerocount++;
       }
       else if (temp->data==1)
       {
        onecount++;
       }
       else if (temp->data==2)
       {
        twocount++;
       }
       
       temp=temp->next;
    }
    temp=head;
    while (temp!=NULL)
    {
        if (zerocount!=0)
        {
            temp->data=0;
            zerocount--;
        }
        else if (onecount!=0)
        {
            temp->data=1;
            onecount--;
        }
        else if (twocount!=0)
        {
            temp->data=0;
            twocount--;
        }
        temp=temp->next;
    }
    return head;
}
//if data is irreplacable
Node* shortList(Node* head){
    Node* zerohead=new Node(-1);
    Node* zerotail=zerohead;
    Node* onehead=new Node(-1)
    Node* onetail=onehead;
    Node* twohead=new Node(-1);
    Node* twotail=twohead;
    Node* curr=head;
    while (curr!=NULL)
    {
        int data=curr->data;
        if (data==0)
        {
            insertAtTail(zerotail,value)
        }
        else if (data==1)
        {
            insertAtTail(onetail,value)
        }
        else if (data==2)
        {
            insertAtTail(twotail,value)
        }
        curr=curr->next;
    }
    //merge three linkllist
    if (onehead->next!=NULL )
    {
        zerotail->next=onehead->next;
    }
    else
    {
        zerotail->next=twohead->next;
    }
    onetail->next=twohead->next;
    twotail->next=NULL;
    //setup head
    head=zerohead->next;
    //delete dummy nodes
    delete zerohead;
    delete onehead;
    delete twohead;

    return head;
}
//t.c=o(n)
//s.c=o(1)
