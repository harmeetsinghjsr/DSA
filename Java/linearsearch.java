import java.util.*;
public class linearsearch {
    public static void main(String[] args) {
        Scanner in =new Scanner (System.in);
        int n=in.nextInt();
        int arr[]=new int[n];
        for (int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        System.out.println("Enter the target element");
        int target=in.nextInt();
        //search number of frequency of target element
        int count=0;
        for (int i=0;i<n;i++){
            if (arr[i]==target){
                count++;
            }
        }
        System.out.println("The target element is present "+count+" times");
    }
}
