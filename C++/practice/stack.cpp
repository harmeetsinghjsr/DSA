#include <iostream>

class Stack {
private:
    int top;
    int arr[100];

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

    void push(int x) {
        if (top >= 99) {
            std::cout << "Stack Overflow";
        } else {
            arr[++top] = x;
        }
    }

    int pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow";
            return 0;
        } else {
            int x = arr[top--];
            return x;
        }
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is Empty";
            return 0;
        } else {
            return arr[top];
        }
    }
};

int main() {
    Stack myStack;

    // Push elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // Print and pop elements from the stack
    while (!myStack.isEmpty()) {
        std::cout << ' ' << myStack.peek();
        myStack.pop();
    }

    return 0;
}