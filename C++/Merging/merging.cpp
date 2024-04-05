#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    int arr[20];
    int i;
    int value;
    int m;
    int a[10];

    cout<<"Enter the size of array :";
    cin>>n;
    cout<<endl;

    cout<<"Enter array elements :";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<endl;

    cout<<"Enter the size of second array :";
    cin>>m;

    cout<<endl;
    cout<<"Enter array elements to be merged with first one:";
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<endl;

    for(int i=0;i<m;i++){
        arr[n+i]=a[i];
    }
    cout<<endl;

    cout<<"Array after merging :";
    for(i=0;i<n+m;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}