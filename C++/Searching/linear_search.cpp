#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }return -1;
    
}
int main()
{
    int n;
    cout<<"Enter the size of array u want :";
    cin>>n;

    int arr[10];
    cout<<"The array u want to enter :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the value u want to search :";
    cin>>key;

    int index=linear_search(arr,n,key); 
    if(index!=-1){
        cout<<key <<" is present at index "<<index<<endl;
    }
    else{
        cout<<key <<" is not present at any index "<<endl;
    }
    return 0;
}