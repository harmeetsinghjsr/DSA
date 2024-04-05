#include<bits/stdc++.h>
using namespace std;
class Stack{
    int capacity;
    int* arr;
    int top;
    public:

    Stack(int c){
        this->capacity=c;
        arr=new int[c];
        this->top=-1;
    }

    // Check if the stack is full
     bool isFull() {
        return this->top == this->capacity - 1;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return this->top == -1;
    }

    void push(int data){
        if(isFull()){
            cout<<"Overflow\n";
            return;
        }
        arr[top]=data;
        top++;
    }
    int pop(){
        if(isEmpty()){
            cout<<"Underflow\n";
            return INT_MIN;
        }
        // just decrease the top value and it starts pointing to the top-1 value
        this->top--;
    }
    int Gettop(){
        if(this->top==-1){
            cout<<"Underflow\n";
            return INT_MIN;
        }
        return this->arr[this->top];
    }
};
int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Gettop()<<endl;
    return 0;
}