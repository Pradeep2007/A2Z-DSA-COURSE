void Inorder(BinaryTreeNode<int>* root,vector<int>&in){
    if(root==NULL){
        return;
    }
    Inorder(root->left,in);
    in.push_back(root->data);
    Inorder(root->right,in);
}


bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	//Write your code here
    vector<int> inorder;
    Inorder(root,inorder);
    int i=0;
    int j=inorder.size()-1;
    while(i<j){
        if(inorder[i]+inorder[j]==target){
            return true;
        }
        else if(inorder[i]+inorder[j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}