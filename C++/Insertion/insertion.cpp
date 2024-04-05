#include<iostream>
using namespace std;
int main()
{
    


    int n=5;
    int arr[n]={1,2,3,4,5};
    int i;
    int value;
    int index;
    cout<<"Array before insertion :";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Value to insert :";
    cin>>value;

    cout<<endl;

    //insertion at begining

    //  shifting the index downwards

    // for(i=n;i>=0;i--){
    //     arr[i+1]=arr[i];
    // }

    // arr[0]=value;

    // n++;

    // cout<<"Array after insertion :";
    // for(i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

// ****************************************************************************************************


    // insertion at k position
    
    cout<<"Enter the index at which u want to insert :";
    cin>>index;
    cout<<endl;

    //shifting indexes
    for(i=n;i>=index;i--){
        arr[i+1]=arr[i];
    }
    
    arr[index]=value;

    n++;

    cout<<"Array after insertion :";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
// ****************************************************************************************************

    //insertion at last

    // for(i=n;i>=0;i--){
    //     arr[i+1]=arr[i];
    // }

    // arr[n-1]=value;

    // n++;

    // cout<<"Array after insertion :";
    // for(i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    return 0;

}