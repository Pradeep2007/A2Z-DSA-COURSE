// class Solution{
//     private:
//         int height(struct Node* root){
//             if(root==NULL){
//                 return 0;
//             }
//             int left=height(root->left);
//             int right=height(root->right);
            
//             int ans=max(left,right)+1;
//             return ans;
//         }
//     public:
//     //Function to check whether a binary tree is balanced or not.
//     bool isBalanced(Node *root)
//     {
//         //  Your Code here
//         if(root==NULL){
//             return true;
//         }
//         bool left=isBalanced(root->left);
//         bool right=isBalanced(root->right);
        
//         bool diff=abs(height(root->left)-height(root->right))<=1;
        
//         if(left && right && diff){
//             return true;
//         }
//         return false;
//     }
// };

//BUT ITS TIME COMPLEXITY IS 0(N SQU)

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    pair<bool,int> fastBalanced(Node * root){
         if(root==NULL){
             pair<bool,int> p=make_pair(true,0);
             return p;
         }
        
        pair<bool,int> left=fastBalanced(root->left);
        pair<bool,int> right=fastBalanced(root->right);
        
        bool leftAns=left.first;
        bool rightAns=right.first;
        
        bool diff=abs(left.second-right.second)<=1;
        pair<bool,int>ans;
        ans.second=max(left.second,right.second)+1;
        if(leftAns && rightAns && diff){
            ans.first=true;
        }
        else{
            ans.first=false;
        }
        return ans;
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        fastBalanced(root).first;
        
    }
};
//ITS TIME COMPLLEXITY IS O(N)