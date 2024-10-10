// class Solution {
//   private:
//     void insertAtTail(Node* &head,Node* &tail,int val){
//         Node* temp=new Node(val);
//         if(head==NULL){
//             head=temp;
//             tail=temp;
//             return;
//         }
//         else{
//             tail->next=temp;
//             tail=temp;
//         }
//     }
//   public:
//     Node *copyList(Node *head) {
//         // Write your code here
//         //step1 copy clone list
//         Node* cloneHead=NULL;
//         Node* cloneTail=NULL;
//         Node* temp=head;
//         while(temp!=NULL){
//             insertAtTail(cloneHead,cloneTail,temp->data);
//             temp=temp->next;
//         }
        
//         unordered_map<Node*,Node*>oldTonew;
//         Node* originalnode=head;
//         Node* clonenode=cloneHead;
        
//         while(originalnode!=NULL && clonenode!=NULL){
//             oldTonew[originalnode]=clonenode;
//             originalnode=originalnode->next;
//             clonenode=clonenode->next;
//         }
        
//         originalnode=head;
//         clonenode=cloneHead;
        
//         while(originalnode!=NULL){
//                 clonenode->random=oldTonew[originalnode->random];
//                 originalnode=originalnode->next;
//                 clonenode=clonenode->next;
//         }
//         return cloneHead;
        
//     }
// };
//TIME COMPLEXITY=O(N)
//SPACE COMPLEXITY=O(N)


//METHOD 2
class Solution {
  private:
    void insertAtTail(Node* &head,Node* &tail,int val){
        Node* temp=new Node(val);
        if(head==NULL){
            head=temp;
            tail=temp;
            return;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
    }
  public:
    Node *copyList(Node *head) {
        // Write your code here
        //step1 copy clone list
        Node* cloneHead=NULL;
        Node* cloneTail=NULL;
        Node* temp=head;
        while(temp!=NULL){
            insertAtTail(cloneHead,cloneTail,temp->data);
            temp=temp->next;
        }
        
        //step2:clonenode add between originalnode
        Node* originalnode=head;
        Node* clonenode=cloneHead;
        
        while(originalnode!=NULL && clonenode!=NULL){
            Node* next=originalnode->next;
            originalnode->next=clonenode;
            originalnode=next;
            
            next=clonenode->next;
            clonenode->next=originalnode;
            clonenode=next;
        }
        
        //step3:random pointer copy
        temp=head;
        
        while(temp!=NULL){
            if(temp->next!=NULL){
                temp->next->random=temp->random?temp->random->next:temp->random;
            }
            temp=temp->next->next;
        }
        
        //step4:revert changes done in step 2
        originalnode=head;
        clonenode=cloneHead;    
        while(originalnode!=NULL && clonenode!=NULL){
            originalnode->next=clonenode->next;
            originalnode=originalnode->next;
            
            if(originalnode!=NULL){
                clonenode->next=originalnode->next;
            }
            clonenode=clonenode->next;
        }
        
        //step5:return ans
        return cloneHead;
    }
};
//SPACE COMPLEXITY=O(1)
//TIME COMPLEXITY=O(N)