/* 
#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class Queue{
    Node* head;
    Node* tail;
    int size;
public:
    Queue(){
        this->head=NULL;
        this->tail=NULL;
        this->size=0;
    }
    void enqueue(int data){
        Node* new_node=new Node(data);
        if(this->head==NULL){
            // ll is empty
            this->head=this->tail=new_node;
        }
        else{
            this->tail->next=new_node;
            this->tail=new_node;
            this->tail->next=NULL;
        }
        this->size++;
    }
    void dequeue(){
        if(this->head==NULL){
            return;
        }
        else{
            Node* oldhead=this->head;
            Node* newHead=this->head->next;
            this->head=newHead;
            if(this->head==NULL) this->tail=NULL;
            oldhead->next=NULL;
            delete oldhead;
            // Node* oldHead=this->head;
            // free(oldHead);
            this->size--;
        }
    }
    bool isEmpty(){
        return this->head==NULL;
    }

    int front(){
        if(this->head==NULL) return -1;
        return this->head->data;
    }
};
int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    while(not q.isEmpty()){
        cout<<q.front()<<" ";
        q.dequeue();
    }
    return 0;
}
*/

#include<iostream>
using namespace std;
class Node{
public:
  int data;
  Node* next;
};
class Queue{
  Node* head;
  Node* tail;
  int size;
public:
  Queue(){
    this->head=NULL;
    this->tail=NULL;
    this->size=0;
  }
  void enqueue(int data){
    Node* new_node=new Node;
    new_node->data=data;
    new_node->next=NULL;
    if(this->head==NULL){
      // ll is empty
      this->head=this->tail=new_node;
    }
    else{
      this->tail->next=new_node;
      this->tail=new_node;
    }
    this->size++;
  }
  void dequeue(){
    if(this->head==NULL){
      return;
    }
    else{
      Node* oldhead=this->head;
      Node* newHead=this->head->next;
      this->head=newHead;
      if(this->head==NULL) this->tail=NULL;
      delete oldhead;
      this->size--;
    }
  }
  bool isEmpty(){
    return this->head==NULL;
  }

  int front(){
    if(this->head==NULL) return -1;
    return this->head->data;
  }
};
int main()
{
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);

  while(not q.isEmpty()){
    cout<<q.front()<<" ";
    q.dequeue();
  }
  return 0;
}
