// given the head of a sorted linked list , delete all duplicates such that each element appears only once . return the linked list sorted as well
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int data){
        val=data;
        next=NULL;
    }
};
class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head=NULL;
    }
    void insertionTail(int value){
        Node*new_node=new Node(value);
        if(head==NULL){
            head=new_node;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }cout<<"NULL"<<endl;
    }
};
void deleteDuplicates(Node* &head){
    Node* curr_node=head;
    while(curr_node!=NULL){
        while(curr_node->next!=NULL && curr_node->val==curr_node->next->val){
            Node* temp=curr_node->next;
            curr_node->next=curr_node->next->next;
            free(temp);
        }
        curr_node=curr_node->next;
    }
}
int main()
{
    LinkedList ll;
    ll.insertionTail(1); 
    ll.insertionTail(2); 
    ll.insertionTail(2); 
    ll.insertionTail(3); 
    ll.insertionTail(3); 
    ll.insertionTail(3); 
    ll.display();
    deleteDuplicates(ll.head);
    ll.display();
    return 0;
}   