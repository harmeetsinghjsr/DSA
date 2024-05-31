import java.util.*;
//binary search wiht user input
public class BinarySearch {
    public static void main(String[] args) {
        Scanner in =new Scanner (System.in);
        int n=in.nextInt();
        int arr[]=new int[n];
        for (int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        int target=in.nextInt();
        //binary search
        int start=0;
        int end=n;
        boolean isFound=false;
        while (start<=end){
            int mid=start+(end-start)/2;
            if (arr[mid]==target){
                isFound=true;
                break;
            }
            if (arr[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        if (isFound){
            System.out.println("Element found");
        }
        else{
            System.out.println("Element not found");
        }
    }


}
