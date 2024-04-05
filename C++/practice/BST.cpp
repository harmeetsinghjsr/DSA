#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        left=NULL;
        right=NULL;
    }
};
Node BST{
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
}