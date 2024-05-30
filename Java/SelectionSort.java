import java.util.*;
//selection sort with user input
public class SelectionSort {
    public static void main(String[] args) {
        Scanner in =new Scanner (System.in);
        int n=in.nextInt();
        int arr[]=new int[n];
        for (int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        //selection sort
        for (int i=0;i<n-1;i++){
            int minInd=i;
            for (int j=i;j<n;j++){
                if (arr[j]<arr[minInd]){
                    minInd=j;
                }
            }
            int temp=arr[i];
            arr[i]=arr[minInd];
            arr[minInd]=temp;
        }
        //print the sorted array
        for (int e:arr){
            System.out.print(e+" ");
        }
    }


}
