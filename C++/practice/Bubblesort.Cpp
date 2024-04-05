#include<iostream>
using namespace std;
void Bubble(int arr[],int n)
{
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;

    //input an array
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Bubble(arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}





















class queue {
int arr; int front; int back;
public:
queue() {
}
arr = new int[n]; front = 1; back = -1;
void push(int x) {
if (back == n-1) {
}
cout << "Queue overflow" << endl;
return;
back++;
arr[back] = x;
if (front == -1) {
front++;
}
}
void pop() {
if (front == -1 || front > back) {
cout << "No elements in queue" << endl;
return;
front++;
}
}
int peek() {
if (front == -1 || front > back) {
cout << "No elements in queue" << endl;
return -1;
}
return arr[front];
}
bool empty() {
if (front == -1 || front > back) {
return true;
}
return false;
}
};
int main({
queue q;    
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);
q.push(6);
q.pop();
q.pop();

cout << q.peek() << endl;
cout << q.empty() << endl;

return 0;

})