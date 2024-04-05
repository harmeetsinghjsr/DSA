#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next=NULL;
    }
};
class LinkedList{
    public:
    Node*head;

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
void reverse(Node* head){
    if(head==NULL) return;
    reverse(head->next);
    cout<<head->val<<" ";
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
    reverse(ll.head);
    
    return 0;
}