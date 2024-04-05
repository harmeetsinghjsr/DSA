#include<iostream>
using namespace std;

void insert(int arr[], int& size, int item) { // add parameter for item
    size++;
    arr[size-1] = item;
    int index = size-1;
    while (index > 1) {
        int parent = (index-1) / 2;
        if (arr[parent] < arr[index]) {
            swap(arr[parent], arr[index]);
            index = parent;
        } else {
            return;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void deletion(int arr[],int size){
    
    int last=arr[size-1];
    size--; 
    int ptr=0;
    int left=1;
    int right=2;
    arr[ptr]=last; // change arr[ptr] to last
    int index = 1;
        while(index < size){

            int leftIndex = 2 * index;
            int rightIndex = 2 * index + 1;
            int swapIndex = index;

           if(leftIndex <= size && arr[swapIndex] < arr[leftIndex]){
               swapIndex = leftIndex;
           }
           if(rightIndex <= size && arr[swapIndex] < arr[rightIndex]){
               swapIndex = rightIndex;
           }

            if(index != swapIndex){
                swap(arr[index], arr[swapIndex]);
                index = swapIndex;
            }
            else return ;
        }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[6]={72,54,50,27,36,45};
    int size=6;
    int item; 
    cout<<"Enter new value :";
    cin>>item;
    cout<<"\nAfter insertion :";
    insert(arr,size,item);  
    cout<<endl;
    cout<<"After deletion :";
    deletion(arr,size);
    return 0;
}