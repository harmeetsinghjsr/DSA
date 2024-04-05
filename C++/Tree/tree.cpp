#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int data){
        val=data;
        left=NULL;
        right=NULL;
    }
};

Node* buildTree(){
    int data;
    // cout<<"Enter data for tree :";
    cin>>data;
    
    if(data==-1){
        return NULL;
    }
    Node* new_node=new Node(data);
    new_node->left=buildTree();
    new_node->right=buildTree();
    return new_node;
}

// Preorder traversal (Root -> Left -> Right)
void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

//Inorder traversal (Left -> Root -> Right)
void inOrder(Node* root){
    if (root == NULL)
    return;
    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);
}

// Postorder traversal (Left -> Right -> Root)
void postOrder(Node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->val<<" ";
}
int main()
{
    // 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
    Node* root=buildTree();
    cout<<endl;
    cout<<"After doing Preorder Traversal :";
    preOrder(root);
    cout<<endl;
    cout<<"After doing Inorder Traversal :";
    inOrder(root);
    cout<<endl;
    cout<<"After doing Postorder Traversal :";
    postOrder(root);
    cout<<endl;
    return 0;
}