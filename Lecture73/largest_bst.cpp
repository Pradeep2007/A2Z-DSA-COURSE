class info{
public:
int maxi;
int mini;
bool isBST;
int size;
};

info solve(TreeNode* root,int &ans){
    if(root==NULL){
        return {INT_MAX,INT_MIN,true,0};
    }
    info left=solve(root->left,ans);
    info right=solve(root->right,ans);

    info currNode;
    currNode.size=left.size+right.size+1;
    currNode.maxi=max(right.maxi,root->data);
    currNode.mini=min(left.mini,root->data);

    if(left.isBST && right.isBST && (root->data>left.maxi && root->data<right.mini)){
        currNode.isBST=true;
    }
    else{
        currNode.isBST=false;
    }

    if(currNode.isBST){
        ans=max(ans,currNode.size);
    }

    return currNode;
}
int largestBST(TreeNode * root){
    // Write your code here.
    int maxsize=0;
    info temp=solve(root,maxsize);
    return maxsize;
}