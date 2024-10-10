TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
    // Write your code here.
    if(root==NULL){
        return NULL;
    }
    while(root!=NULL){
        if(root->data<P->data && root->data<Q->data){
            root=root->right;
        } else if (root->data > P->data && root->data > Q->data) {
            root = root->left;
        } else {
            return root;
    }
    }
    // if(root->data<P->data && root->data<Q->data){
    //     return LCAinaBST(root->right,P,Q);
    // }
    // if(root->data>P->data && root->data>Q->data){
    //     return LCAinaBST(root->left,P,Q);
    // }
    return root;//
}
//TIME COM OF ITERATIVE WAY IS O(N) AND SPCE IS O(1)
//TIME COM AND SPACE OF RECURRSIVE IS O(N)