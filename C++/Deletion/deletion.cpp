#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    int arr[10];
    int i;
    int value;
    int index;

    cout<<"Enter the size of array :";
    cin>>n;
    cout<<endl;

    cout<<"Enter array elements :";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<endl;

    cout<<"Array before deletion :";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"Which index u want to delete :";
    cin>>index;
    if(index<=0 || index>n) cout<<"Invalid Position";
    
    else {
       //shifting indexes
    for(i=index-1;i<n; i++){
        arr[i]=arr[i+1];
    }
    n--;
    }
    cout<<endl;

    

    cout<<"Array after deletion :";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}