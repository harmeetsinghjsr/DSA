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
class DLL{
    public:
    Node* head;
    Node* tail;
    DLL(){
        head=NULL;
        tail=NULL;
    }
    void insertAtStart(int val){
        Node *nn=new Node(val);
        if(head==NULL){
            head=nn;
            tail=nn;
            return;
        }
        nn->next=head;
        head->prev==nn;
        head=nn;
        return;
    }
    void insertAtEnd(int val)
    {
        Node *nn=new Node(Val);
        if(tail==NULL){
            head=nn;
            tail=nn;
            return;

        }
        nn->prev=tail;
        tail->next=nn;
        tail=nn;
        return;
    }
    void insertAtK(int val,int pos){
        Node* temp=head;
        int count=1;
        while(count<(pos-1)){
            temp=temp->next;
            count++;
        }
        Node* nn=new Node(val);
        nn->next=temp->next;
        temp->next=nn;
        nn->prev=temp;
        nn->next->prev=nn;
    }
    deleteAtStart(){
        if(head==NULL){
            return;
        }
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return;
    }
    deleteAtEnd(){
        if(tail==NULL){
            return;
        }
        Node* temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        delete temp;
        return;
    }
    deleteAtK(int pos){
        Node* temp=head;
        int count=1;
        while(count<(pos-1)){
            temp=temp->next;
            count++;
        }
        Node* todelete=temp->next;
        temp->next=todelete->next;
        todelete->next->prev=temp;
        delete todelete;
        return;
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
int main(){
    DLL d;
    d.insertAtStart(10);
    d.insertAtStart(20);
    d.insertAtStart(30);
    d.insertAtEnd(40);
    d.insertAtEnd(50);
    d.insertAtEnd(60);
    d.insertAtK(70,3);
    d.deleteAtStart();
    d.deleteAtEnd();
    d.deleteAtK(3);
    d.ForTraverse();
    cout<<endl;
    d.BackTraverse();
    return 0;
}