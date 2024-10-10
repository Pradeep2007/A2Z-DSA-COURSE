class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int>result;
    	if(root==NULL){
    	    return result;
    	}
    	queue<Node*>q;
    	q.push(root);
    	bool leftToRight=true;
    	while(!q.empty()){
    	    int size=q.size();
    	    vector<int>ans(size);
    	    
    	    for(int i=0;i<size;i++){
    	        Node* Frontnode=q.front();
    	        q.pop();
                //normal insert or reverse insert
    	        int index=leftToRight?i:size-i-1;
    	        ans[index]=Frontnode->data;
    	        if(Frontnode->left){
    	            q.push(Frontnode->left);
    	        }
    	       if(Frontnode->right){
    	            q.push(Frontnode->right);
    	        }
    	    }
            //direction change krni h
    	    leftToRight=!leftToRight;
    	    for(auto i:ans){
    	        result.push_back(i);
    	    }
    	}
    	return result;
    }
};
//TIME COMPLEXITY=0(N)
//SPACE COMPLEXITY=O(N)