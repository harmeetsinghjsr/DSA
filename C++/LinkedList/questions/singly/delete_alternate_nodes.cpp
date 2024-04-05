//given the head of linked list, delete every alternate element from the list starting from second element

#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    // constructor for the initializers
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

    void insertion(int value){
        Node* new_node=new Node(value);
        if(head==NULL){
            head=new_node;
            return;
        }
        Node*temp=head;
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

void deleteAlternateNodes(Node* &head){
    Node* current=head;
    while(current->next!=NULL && current!=NULL){
        Node* temp=current->next;
        current->next=current->next->next;
        free(temp);
        current=current->next;
    }
    
}
int main()
{
    LinkedList ll;
    int value;
    int n;
    cout<<"How many nodes do u want :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the value for "<<i+1<<" Node :";
        cin>>value;
        ll.insertion(value);
    }
    ll.display();
    deleteAlternateNodes(ll.head);
    ll.display();

    return 0;
}