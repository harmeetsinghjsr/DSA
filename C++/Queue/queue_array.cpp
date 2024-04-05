#include<iostream>
#define max 10
using namespace std;
void insertion(int queue[],int rear,int front){
    int num;
    
    // cin>>num;
    for(int i=0;i<max;i++){
        cout<<"Enter the "<<i+1<<" number :";
        cin>>num;
        if(rear==max-1){
            cout<<"\nOverflow";
            exit(0);
        }
        else if(front==-1 && rear==-1){
            front=0;
            rear=0;
        }
        else{
            rear=rear+1;
        }
        queue[rear]=num;
    }
}
int delete_element(int queue[],int rear,int front)
{
    int val;
    if(front == -1 || front>rear)
    {
        cout<<"\nUnderflow";
        return -1;
    }
    else
    {
        val = queue[front];
        front++;
    if(front > rear)
        front = rear = -1;
        return val;
    }
}
void display(int queue[]){
    for(int i=0;i<max;i++){
        cout<<queue[i]<<" ";
    }
}

int main()
{
    
    int front=-1;
    int rear=-1;
    int queue[max];
    insertion(queue,front,rear);
    display(queue);
    delete_element(queue,front,rear);
    return 0;
}