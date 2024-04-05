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
    Node* head;
    LinkedList(){
        head=NULL;
    }
    void insertionTail(int value){
    Node* new_node = new Node(value);
    if (head == NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }cout<<"NULL"<<endl;
    }

    Node* reversing(){
        Node* prev=NULL;
        Node* current=head;
        while(current!=NULL){
            Node* next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        Node* new_head=prev;
        return new_head;
    }
};
int main()
{
    LinkedList ll;
    int value;
    int n;
    cout<<"Enter the number of nodes :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the value of "<<i+1<<" node :";
        cin>>value;
        ll.insertionTail(value);
    }
    cout<<"Linkedlist is :";
    ll.display();
    ll.head=ll.reversing();
    cout<<"Reversed Linkedlist is :";
    ll.display();
    return 0;
}