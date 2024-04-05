#include<iostream>
using namespace std;

//merging
void merge(int arr[], int beg, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - beg + 1;    //size of the left subarray,
    int n2 = end - mid;     //size of the right subarray
    int LeftArray[n1], RightArray[n2]; 
    for (int i = 0; i < n1; i++)    
    LeftArray[i] = arr[beg + i];    
    for (int j = 0; j < n2; j++)    
        RightArray[j] = arr[mid + 1 + j]; 
        i = 0; 
        j = 0;   
        k = beg;    
    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] < RightArray[j])    
            {    
                arr[k] = LeftArray[i];    
                i++;    
            } 
        else    
            {    
                arr[k] = RightArray[j];    
                j++;    
            }    
        k++;    
    }    
    while (i<n1)    
    {    
        arr[k] = LeftArray[i];    
        i++;    
     k++;    
    } 
while (j<n2)    
    {    
        arr[k] = RightArray[j];    
        j++;    
        k++;    
  }    
}  

//sorting algorithm
void mergeSort(int arr[], int beg, int end)  
   {  
    if (beg < end)   
    {  
        int mid = (beg + end) / 2;  
        mergeSort(arr, beg, mid);  
        mergeSort(arr, mid + 1, end);  
        merge(arr, beg, mid, end);  
    }  
}

//printing the array
void printArray(int arr[], int n){  
    int i;  
    for (i = 0; i < n; i++)  cout<<arr[i]<<" ";
} 


int main()
{
    int arr[] = { 12, 31, 25, 8, 32, 17, 40, 42 };  
    int n = sizeof(arr) / sizeof(arr[0]);  
    cout<<"Before sorting array elements are :";
    printArray(arr, n);  
    cout<<endl;
    mergeSort(arr, 0, n - 1);  
    cout<<"After sorting array elements are :";
    printArray(arr, n); 
    return 0;
}