#include <iostream>
#include<queue>
using namespace std;
class node{
public:
        int data;
        node* left;
        node* right;
public:
        node(int d){
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        }
};
node* buildTree(node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}
void lowerOrderTransversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
   while (!q.empty())
   {
    node* temp=q.front();
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
void Inorder(node* root){
    if (root==NULL)
    {
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
void Preorder(node* root){
    if (root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    Inorder(root->left);
    Inorder(root->right);
}
void Postorder(node* root){
    if (root==NULL)
    {
        return;
    }
    Inorder(root->left);
    Inorder(root->right);
    cout<<root->data<<" ";
}
void buildTreeFromLevelOrder(node* &root){
    queue<node*>q;
    cout<<"Enter the data for root\n";
    int d;
    cin>>d;
    root=new node(d);
    q.push(root);
    while (!q.empty())  
    {
        node* temp=q.front();
        q.pop();
        cout<<"Enter the data for left of "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if (leftData!=-1)
        {
            temp->left=new node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter the data for right of "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if (rightData!=-1)
        {
            temp->right=new node(rightData);
            q.push(temp->right);
        }
        
    }
    
}
int main(){
    node* root=NULL;
    buildTreeFromLevelOrder(root);
    lowerOrderTransversal(root);
    // node* root=NULL;
    // root=buildTree(root);
    // lowerOrderTransversal(root);
    // cout<<"Inorder transversal is :" <<endl;
    // Inorder(root);
    // cout<<endl;
    // cout<<"Inorder transversal is :" <<endl;
    // Preorder(root);
    // cout<<endl;
    // cout<<"Inorder transversal is :" <<endl;
    // Postorder(root);
    // cout<<endl;
    return 0;
}
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1