void Inorder(TreeNode<int>* root,vector<int>&in){
    if(root==NULL){
        return;
    }
    Inorder(root->left,in);
    in.push_back(root->data);
    Inorder(root->right,in);
}

TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<int> inorder;
    Inorder(root,inorder);
    // Write your code here
    TreeNode<int>* newNode=new TreeNode<int>(inorder[0]);
    TreeNode<int>* curr=newNode;
    for(int i=1;i<inorder.size();i++){
        TreeNode<int>* temp=new TreeNode<int>(inorder[i]);
        curr->left=NULL;
        curr->right=temp;
        curr=temp;
    }
    curr->left=NULL;
    curr->right=NULL;
    return newNode;
}
//TIME COM AND SPACE =O(N)