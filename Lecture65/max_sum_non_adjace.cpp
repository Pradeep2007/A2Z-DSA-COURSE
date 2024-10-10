class Solution{
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    pair<int,int>solve(Node* root){
        if(root==NULL){
            pair<int,int>p=make_pair(0,0);
            return p;
        }
        
        pair<int,int> left=solve(root->left);
        pair<int,int> right=solve(root->right);
        
        pair<int,int> result;
        
        result.first=root->data+left.second+right.second;
        result.second=max(left.second,left.first)+max(right.second,right.first);
        
        return result;
    }
    int getMaxSum(Node *root) 
    {
        // Add your code here
        pair<int,int>ans=solve(root);
        return max(ans.first,ans.second);
    }
};