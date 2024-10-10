#include <iostream>
using namespace std;
//recurrsive function
Node* kreverse(Node* head,int k){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;
    int count=0;
    while(head->nex!=0 && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        head->next=kreverse(next,k);
    }
    return prev;
}
//T.C=O(N);
//S.C=O(N);
int main(){
    
    return 0;
}