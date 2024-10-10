void Inorder(TreeNode *root,vector<int>&in){
    if(root==NULL){
        return;
    }
    Inorder(root->left,in);
    in.push_back(root->data);
    Inorder(root->right,in);
}

vector<int> mergeSorted(vector<int> a,vector<int> b){
    vector<int> ans(a.size()+b.size());
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            ans[k++]=a[i];
            i++;
        }
        else{
            ans[k++]=b[j];
            j++;
        }
    }
    while(i<a.size()){
        ans[k++]=a[i];
        i++;
    }
    while(j<b.size()){
        ans[k++]=b[j];
        j++;
    }
    return ans;
}



vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    vector<int> bst1,bst2;
    Inorder(root1,bst1);
    Inorder(root2,bst2);
    
    vector<int> mergeArray=mergeSorted(bst1,bst2);
    return mergeArray;
}
//TIME COM ANS SPACEff IS O(M+N)

//wap to form a bst from two bst
void convertIntoDoublyLL(TreeNode *root,TreeNode &head){
    if(root==NULL){
        return NULL;
    }
    convertIntoDoublyLL(root->right,head)
    root->right=head;
    if(head!=NULL){
        head->left=root;
    }
    head=root;
    convertIntoDoublyLL(root->left, head);
}

TreeNode<int>* mergeLL(TreeNode *head1, TreeNode *head2){
    TreeNode<int>* head=NULL;
    TreeNode<int>* tail=NULL;
    while(head1!=NULL && head2!=NULL){
        if(head1->data<head2->data){
            if(head==NULL){
                head=head1;
                tail=tail1;
                head1=head1->next;
            }
            else{
                tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right;
            }
        }
        else{
            if(head==NULL){
                head=head2;
                tail=head2;
                head2=head2->next;
            }
            else{
                tail->right=head2;
                head2->left=tail;
                tail=head2;
                head2=head2->right;
            }
        }
    }
    while(head1!=NULL){
        tail->right=head1;
        head1->left=tail;
        tail=head1;
        head1=head1->right;
    }
    while(head2!=NULL){
        tail->right=head2;
        head2->left=tail;
        tail=head2;
        head2=head2->right;
    }
    return head;
}

int countNodes(TreeNode<int>* head){
    TreeNode<int>* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->right;
    }
    return cnt;
}

TreeNode<int>* sortedLLToBST(TreeNode<int>* &head,int n){
    if(n<0 || head==NULL){
        return NULL;
    }
    TreeNode<int>* left=sortedLLToBST(head->left, n/2);
    TreeNode<int>* root=head;
    root->left=left;
    head=head->next;
    root->right=sortedLLToBST(head, n-n/2-1);
    return root;
}

TreeNode<int>* mergeBST(TreeNode *root1, TreeNode *root2)
{

    //STEP1:CONVERTBST INTO SORTED DLL IN-PLACE
    TreeNode<int>* head1=NULL;
    convertIntoDoublyLL(root1, head1);
    head1->left=NULL;

    TreeNode<int>* head2=NULL;
    convertIntoDoublyLL(root2, head1);
    head2->left=NULL;

    //STEP2:MERGE TWO LL
    TreeNode<int>* head=mergeLL(head1, head2);
    
    //STEP3:CONVERT SLL TOBST
    return sortedLLToBST(head, countNodes(head));

}
//TIME COM=O(M+N)
//SPACE COM=O(H1+H2)