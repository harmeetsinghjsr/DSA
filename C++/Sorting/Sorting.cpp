#include<iostream>
#include<algorithm>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        if(mini!=i){
            int temp=arr[mini];
            arr[mini]=arr[i];
            arr[i]=temp;
        }
    }
      cout << "After selection sort: " << "\n";
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        int didswap=0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                didswap==1;
            }
        }
        if(didswap==0){
            break;
        }
    }
    cout << "After bubble sort: " << "\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
        j--;
    }
    cout << "After insertion sort: " << "\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

bool nptel_sort(int i,int j){
    return i>j;
}


int main()
{
    int arr[] = {13,46,24,52,20,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr,n);
    cout<<endl;
    bubble_sort(arr,n);
    cout<<endl;
    insertion_sort(arr,n);
    cout<<endl;

    sort(arr,arr+6,nptel_sort);
    cout << "After nptel_descending sort: " << "\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
    cout << "After nptel_asecending sort: " << "\n";
    sort(arr,arr+6);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
