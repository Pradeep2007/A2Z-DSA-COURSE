#include <iostream>
#include<queue>
using namespace std;
class Node{
public:
       int data;
       Node* left;
       Node* right;
    
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

void Inorder(Node* root){
    if (root==NULL)
    {
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
void Preorder(Node* root){
    if (root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    Inorder(root->left);
    Inorder(root->right);
}
void Postorder(Node* root){
    if (root==NULL)
    {
        return;
    }
    Inorder(root->left);
    Inorder(root->right);
    cout<<root->data<<" ";
}

void lowerOrderTransversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
   while (!q.empty())
   {
    Node* temp=q.front();
    q.pop();
    if (temp==NULL)
    {
        cout<<endl;
        if (!q.empty())
        {
            q.push(NULL);
        }
        
    }
    else
    {
        cout<<temp->data<<" ";
        if (temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
}

Node* minval(Node* root){
    Node* temp=root;
    while (temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}

Node* maxval(Node* root){
    Node* temp=root;
    while (temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp;
}

Node* insertIntoBst(Node * root,int d){
    if(root==NULL){
        root=new Node(d);
        return root;
    }
//right part me insert krna h
    if(d>root->data){
        root->right=insertIntoBst(root->right,d);
    }

    //left part me insert krna h
    else{
        root->left=insertIntoBst(root->left,d);
    }
    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        
        root=insertIntoBst(root,data);
        cin>>data;

    }
}

Node* deleteFromBst(Node* root,int val){
    if(root==NULL){
        return root;
    }

    if(root->data==val){
        //0 child
        if(root->right==NULL && root->left==NULL){
            delete root;
            return NULL;
        }
         //1 child
         //right child null
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete(root);
            return temp;
        }
        //left child null
        if(root->right!=NULL && root->left==NULL){
            Node* temp=root->right;
            delete(root);
            return temp;
        }
        //2 child
        if(root->left!=NULL && root->right!=NULL){
            int min=minval(root->right)->data;
            root->data=min;
            root->right=deleteFromBst(root->right,min);
            return root;
        }
    }
    else if(root->data>val){
        root->left=deleteFromBst(root->left,val);
        return root;
    }
    else{
        root->right=deleteFromBst(root->right,val);
        return root;
    }
}

int main(){
    Node* root=NULL;
    cout<<"Enter the data to insert into BST\n";
    takeInput(root);
    cout<<"Printing the tree\n";
    lowerOrderTransversal(root);
    cout<<endl<<"Inorder Transversal "<<endl;
    Inorder(root);
    cout<<endl<<"Preorder Transversal "<<endl;
    Preorder(root);
    cout<<endl<<"Postorder Transversal "<<endl;
    Postorder(root);
    cout<<"Minvalue is "<<minval(root)->data<<endl;
    cout<<"Maxvalue is "<<maxval(root)->data<<endl;

    root=deleteFromBst(root,21);

    cout<<"Printing the tree\n";
    lowerOrderTransversal(root);
    cout<<endl<<"Inorder Transversal "<<endl;
    Inorder(root);
    cout<<endl<<"Preorder Transversal "<<endl;
    Preorder(root);
    cout<<endl<<"Postorder Transversal "<<endl;
    Postorder(root);
    cout<<"Minvalue is "<<minval(root)->data<<endl;
    cout<<"Maxvalue is "<<maxval(root)->data<<endl;
    return 0;
}
//time complexity of insertion is o(logn)
//space complexity of deletion is 0(h)ans worst case 0(n)