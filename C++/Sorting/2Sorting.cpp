// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the size of array1 :";
//     cin>>n;
//     cout<<endl;
//     int arr1[n];
//     cout<<"Enter array1 elements :";
//     for(int i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//     cout<<endl;
//     int m;
//     cout<<"Enter the size of array2 :";
//     cin>>m;
//     cout<<endl;
//     int arr2[m];
//     cout<<"Enter array2 elements :";
//     for(int i=0;i<m;i++){
//         cin>>arr2[i];
//     }
//     cout<<endl;
//     int arr3[n+m];
//     int i=0,j=0,k=0;
//     while(i<n && j<m){
//         if(arr1[i]<arr2[j]){
//             arr3[k]=arr1[i];
//             i++;
//             k++;
//         }
//         else{
//             arr3[k]=arr2[j];
//             j++;
//             k++;
//         }
//     }
//     while(i<n){
//         arr3[k]=arr1[i];
//         i++;
//         k++;
//     }
//     while(j<m){
//         arr3[k]=arr2[j];
//         j++;
//         k++;
//     }
//     cout<<"Array after merging :";
//     for(int i=0;i<n+m;i++){
//         cout<<arr3[i]<<" ";
//     }

//     return 0;
// }



//merging in ascending order

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the size of array1 :";
//     cin>>n;
//     cout<<endl;
//     int arr1[n];
//     cout<<"Enter array1 elements :";
//     for(int i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//     cout<<endl;
//     int m;
//     cout<<"Enter the size of array2 :";
//     cin>>m;
//     cout<<endl;
//     int arr2[m];    
//     cout<<"Enter array2 elements :";        
//     for(int i=0;i<m;i++){
//         cin>>arr2[i];
//     }
//     cout<<endl;
//     int arr3[n+m];
//     int i=0,j=0,k=0;
//     while(i<n && j<m){
//         if(arr1[i]<arr2[j]){
//             arr3[k]=arr1[i];
//             i++;
//             k++;
//         }
//         else{
//             arr3[k]=arr2[j];
//             j++;
//             k++;
//         }
//     }
//     while(i<n){
//         arr3[k]=arr1[i];
//         i++;
//         k++;
//     }
//     while(j<m){
//         arr3[k]=arr2[j];
//         j++;
//         k++;
//     }
//     cout<<"Array after merging :";
//     for(int i=0;i<n+m;i++){
//         cout<<arr3[i]<<" ";
//     }
//     return 0;
// }










// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the size of array1: ";
//     cin >> n;
//     int arr1[n];
//     cout << "Enter array1 elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr1[i];
//     }

//     int m;
//     cout << "Enter the size of array2: ";
//     cin >> m;
//     int arr2[m];
//     cout << "Enter array2 elements: ";
//     for (int i = 0; i < m; i++) {
//         cin >> arr2[i];
//     }

//     int arr3[n + m];
//     int i = 0, j = 0, k = 0;

//     // Merge arr2[] followed by arr1[]
//     while (j < m) {
//         arr3[k] = arr2[j];
//         j++;
//         k++;
//     }
//     while (i < n) {
//         arr3[k] = arr1[i];
//         i++;
//         k++;
//     }

//     cout << "Output: ";
//     for (int i = 0; i < n + m; i++) {
//         cout << arr3[i] << " ";
//     }

//     return 0;
// }





#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array1: ";
    cin >> n;
    int arr1[n];
    cout << "Enter sorted array1 elements in descending order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int m;
    cout << "Enter the size of array2: ";
    cin >> m;
    int arr2[m];
    cout << "Enter sorted array2 elements in descending order: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int arr3[n + m];
    int i = 0, j = 0, k = 0;

    // Merge arr1[] and arr2[] in descending order
    while (i < n && j < m) {
        if (arr1[i] > arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        } else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    cout << "Merged array in descending order: ";
    for (int i = 0; i < n + m; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}
