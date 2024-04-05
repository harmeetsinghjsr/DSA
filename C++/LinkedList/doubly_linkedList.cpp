#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int data){
        val=data;
        next=NULL;
        prev=NULL;
    }
};
class DoubleLinkedList{
    public:
    Node* head;
    Node* tail;

    DoubleLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void insertionAtStart(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        return;
    }
    void insertAtEnd(int val){
        Node* new_node=new Node(val);
        if(tail==NULL){ // checks if the dll is empty or not
            head=new_node;//if its null then we need to create both head and tail and point them to new_node
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        return;
    }
    void insertionAtK(int val,int pos){
        Node* temp=head;
        int count=1;
        while(count<(pos-1)){
            temp=temp->next;
            count++;
        }
        // at pos-1
        Node* new_node=new Node(val);
        new_node->next=temp->next;
        temp->next=new_node; 
        new_node->prev=temp;
        new_node->next->prev=new_node;
        return;
    }
    void deleteatEnd(){ 
        Node* temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        free(temp);
    }
    void deleteatStart(){
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);
    }
    void deleteatK(int pos){
        if(pos==0){
            deleteatStart();
        }
        Node* temp=head;
        int counter=1;
        while(counter<pos){
            temp=temp->next;
            counter++;
        }
        // at pos 
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
    }
    void ForTraverse(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }
    }
    void BackTraverse(){
        Node* temp=tail;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->prev;
        }
    }
};

int main()
{
    DoubleLinkedList dll;
    // dll.insertionAtStart(1);
    // dll.insertionAtStart(2);
    // dll.insertionAtStart(3);
    // dll.insertionAtStart(4); 
    // dll.ForTraverse();
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(4);
    // dll.insertionAtK(8,3);
    // dll.ForTraverse();
    dll.deleteatStart();
    dll.deleteatEnd();
    // dll.deleteatK(2);
    dll.ForTraverse();
    return 0;
}