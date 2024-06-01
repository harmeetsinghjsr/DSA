import java.util.*;
public class MergeSort {
    public static void main(String[] args) {
        Scanner in =new Scanner (System.in);
        int n=in.nextInt();
        int arr[]=new int[n];
        for (int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        mergeSort(arr,0,n-1);
        System.out.println("The sorted array is ");
        for (int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
    static void mergeSort(int arr[],int l,int r){
        if (l<r){
            int m=(l+r)/2;
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
            merge(arr,l,m,r);
        }
    }
    static void merge(int arr[],int l,int m,int r){
        int n1=m-l+1;
        int n2=r-m;
        int L[]=new int[n1];
        int R[]=new int[n2];
        for (int i=0;i<n1;i++){
            L[i]=arr[l+i];
        }
        for (int i=0;i<n2;i++){
            R[i]=arr[m+1+i];
        }
        int i=0,j=0,k=l;
        while (i<n1 && j<n2){
            if (L[i]<=R[j]){
                arr[k]=L[i];
                i++;
            }
            else{
                arr[k]=R[j];
                j++;
            }
            k++;
        }
        while (i<n1){
            arr[k]=L[i];
            i++;
            k++;
        }
        while (j<n2){
            arr[k]=R[j];
            j++;
            k++;
        }
    }
}
