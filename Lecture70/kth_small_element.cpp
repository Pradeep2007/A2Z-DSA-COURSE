void Inorder(BinaryTreeNode<int>* root,vector<int>&ans){
    
    if(root==NULL){
        return;
    }
    Inorder(root->left,ans);
    ans.push_back(root->data);
    Inorder(root->right,ans);
}
int kthSmallest(BinaryTreeNode<int>* root, int k) {
    // Write your code here.
    vector<int>ans;
    Inorder(root,ans);
   if(k>ans.size()){
       return -1;
   }
   return ans[k-1];
}

//by sir

int Inorder(BinaryTreeNode<int>* root,int k,int &i){
    
    if(root==NULL){
        return -1;
    }
    int left=Inorder(root->left,k,i);
    if(left!=-1){
        return left;
    }
    i++;
    if(i==k){
        
        return root->data;
    }

   return Inorder(root->right,k,i);
}
int kthSmallest(BinaryTreeNode<int>* root, int k) {
    // Write your code here.
    int i=0;
    return Inorder(root,k,i);
    
}
//time complexity=O(n)
//space complexity=o(H)
//we can optimized it by morris traversal