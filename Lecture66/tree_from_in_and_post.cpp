class Solution {
  public:
    void creatingMap(int in[],map<int,int>&nodeToIndex,int n){
        for(int i=0;i<n;i++){
            //here we are using map to reduce complexity n2 to nlog
            nodeToIndex[in[i]]=i;
        }
        
    }
    Node* solve(int in[],int post[],int &index,
    int inorderStart,int inorderEnd,int n,map<int,int>&nodeToIndex){
        if(index<0 || inorderStart>inorderEnd){
            return NULL;
        }
        int element=post[index--];
        Node* root=new Node(element);
        
        int position=nodeToIndex[element];
        //here we are calling right function fisrt,coz our second root is in right part
        root->right=solve(in,post,index,position+1,inorderEnd,n,nodeToIndex);
        
        root->left=solve(in,post,index,inorderStart,position-1,n,nodeToIndex);
        
        return root;
    }
    // Function to return a tree created from postorder and inoreder traversals.
    Node *buildTree(int n, int in[], int post[]) {
        // Your code here
        int postOrderIndex=n-1;
        map<int,int>nodeToIndex;
        //creating map
        creatingMap(in,nodeToIndex,n);
        Node* ans=solve(in,post,postOrderIndex,0,n-1,n,nodeToIndex);
        return ans;
    }
};