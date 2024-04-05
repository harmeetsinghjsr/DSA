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
    void stackPush(int val){    
        Node* new_node=new Node(val);
        if(head==NULL){
            new_node->next=NULL;
            head=new_node;
        }
        else{   
            new_node->next=head;
            head=new_node;
        }
    }
    void stackPop(){    //delete from start
        Node* temp=head;
        head=head->next;
        free(temp);
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }cout<<"NULL"<<endl;
    }
};
int main()
{
    LinkedList ll;
    // ll.stackPush(1);
    // ll.stackPush(2);
    // ll.stackPush(3);
    // ll.stackPush(4);
    // ll.stackPush(5);
    // ll.display();
    // ll.stackPop();
    // ll.display();
    int item;
    int n;
    while(true){
        cout<<"Press 1 for PUSH\n"<<"Press 2 for POP\n"<<"Press 3 for Print Data of Stack\n"<<"Press 4 to Exit\t\n";
        cin>>item;
        switch(item){
            case 1:
                cout<<"Enter value :";
                cin>>n;
                ll.stackPush(n);
                break;
            case 2:
                ll.stackPop();
                break;
            case 3:
                ll.display();
                break;
            case 4:
                exit(0);
                break;
        }
    }   
    return 0;
}