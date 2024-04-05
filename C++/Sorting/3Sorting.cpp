#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        if(mini!=i){
            swap(arr[i],arr[mini]);
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);

    cout<<"Sorted array is :";
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}