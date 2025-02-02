class Solution{
    public:
    int findPosition(int in[],int element,int n){
        for(int i=0;i<n;i++){
            if(in[i]==element){
                return i;
            }
        }
        return -1;
    }
    Node* solve(int in[],int pre[],int &index,int inorderStart,int inorderEnd,int n){
        if(index>=n || inorderStart>inorderEnd){
            return NULL;
        }
        int element=pre[index++];
        Node* root=new Node(element);
        int position=findPosition(in,element,n);
        root->left=solve(in,pre,index,inorderStart,position-1,n);
        root->right=solve(in,pre,index,position+1,inorderEnd,n);
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int preOrderIndex=0;
        Node* ans=solve(in,pre,preOrderIndex,0,n-1,n);
        return ans;
    }
};

//modified solution
class Solution{
    public:
    void creatingMap(int in[],map<int,int>&nodeToIndex,int n){
        for(int i=0;i<n;i++){
            nodeToIndex[in[i]]=i;
        }
        
    }
    Node* solve(int in[],int pre[],int &index,
    int inorderStart,int inorderEnd,int n,map<int,int>&nodeToIndex){
        if(index>=n || inorderStart>inorderEnd){
            return NULL;
        }
        int element=pre[index++];
        Node* root=new Node(element);
        
        int position=nodeToIndex[element];
        
        root->left=solve(in,pre,index,inorderStart,position-1,n,nodeToIndex);
        root->right=solve(in,pre,index,position+1,inorderEnd,n,nodeToIndex);
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int preOrderIndex=0;
        map<int,int>nodeToIndex;
        //creating map
        creatingMap(in,nodeToIndex,n);
        Node* ans=solve(in,pre,preOrderIndex,0,n-1,n,nodeToIndex);
        return ans;
    }
};