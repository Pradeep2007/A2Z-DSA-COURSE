void Inorder(TreeNode<int>* root,vector<int>&in){
    if(root==NULL){
        return;
    }
    Inorder(root->left,in);
    in.push_back(root->data);
    Inorder(root->right,in);
}
TreeNode<int>* inorderToBst(int s,int e,vector<int>&in){
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
    TreeNode<int>* root=new TreeNode<int>(in[mid]);
    root->left=inorderToBst( s,  mid-1,  in);
    root->right=inorderToBst( mid+1,  e,  in);
    return root;
}

TreeNode<int>* balancedBst(TreeNode<int>* root) {
    // Write your code here.
    vector<int> inorder;
    Inorder(root,inorder);

    return inorderToBst(0,inorder.size()-1,inorder);
}
