#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){          // > for ascending and < for desceending
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main()
{
    //Sorted array needed
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

    int index=binary_search(arr,n,key); 
    if(index!=-1){
        cout<<key <<" is present at index "<<index<<endl;
    }
    else{
        cout<<key <<" is not present at any index "<<endl;
    }
    return 0;
}