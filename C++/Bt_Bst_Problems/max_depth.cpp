#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int key;
    Node* left;
    Node* right;

    Node(int key){
        this->key=key;
        left=right=NULL;
    }
};


Node* insert(Node* root,int key){
    if(root==NULL){
        return new Node(key); 
    }
    if(key<root->key){
        root->left=insert(root->left,key);
    }
    if(key>root->key){
        root->right=insert(root->right,key);
    }
    return root;
}


void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->key<<" ";
    inOrder(root->right);
}

int maxDepth(Node* root){
    if(root==NULL){
        return 0;
    }
    int lh=maxDepth(root->left);
    int rh=maxDepth(root->right);
    return 1+max(lh,rh);
}

int main()
{
    Node* root=NULL;
    int arr[]={8,3,10,1,6,14,4,7,13};
    for(int x:arr){
        root=insert(root,x);
    }
    cout<<"Inorder Traversal gives :";
    inOrder(root);
    cout<<endl;
    cout << "Maximum Depth of the BST is: " << maxDepth(root) << endl;

    return 0;
}