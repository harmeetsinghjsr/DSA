import java.util.*;
//all functions in an Array
public class Arrays {
    public static void main(String args[])
    {
        Scanner  in = new Scanner (System.in);
        System.out.println("Enter the size of the array");
        int n=in.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements of the array");
        for (int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        //traverse the array
        System.out.println("The elements of the array are ");
        for (int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        //search the array
        System.out.println("Enter the target element");
        int target=in.nextInt();
        //search number of frequency of target element at what position
        System.out.println("The target element is present at positions ");
        for (int i=0;i<n;i++){
            if (arr[i]==target){
                System.out.println(i+1);
            }
        }
        //search number of frequency of target element in the array
        int count=0;
        for (int i=0;i<n;i++){
            if (arr[i]==target){
                count++;
            }
        }
        System.out.println("The target element is present "+count+" times");
        //sort the array
        Arrays.sort(arr);
        System.out.println("The sorted array is ");
        for (int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        //reverse the array
        System.out.println("The reversed array is ");
        for (int i=n-1;i>=0;i--){
            System.out.print(arr[i]+" ");
        }
        //find the maximum element in the array
        int max=arr[0];
        for (int i=1;i<n;i++){
            if (arr[i]>max){
                max=arr[i];
            }
        }
        System.out.println("The maximum element in the array is "+max);

        //find the minimum element in the array
        int min=arr[0];
        for (int i=1;i<n;i++){
            if (arr[i]<min){
                min=arr[i];
            }
        }
        System.out.println("The minimum element in the array is "+min);
        //insert an element in the array
        System.out.println("Enter the element to be inserted");
        int ele=in.nextInt();
        System.out.println("Enter the position where the element is to be inserted");
        int pos=in.nextInt();
        for (int i=n-1;i>=pos-1;i--){
            arr[i+1]=arr[i];
        }
        arr[pos-1]=ele;
        System.out.println("The array after insertion is ");
        for (int i=0;i<n+1;i++){
            System.out.print(arr[i]+" ");
        }
        //delete an element in the array
        System.out.println("Enter the position where the element is to be deleted");
        int pos1=in.nextInt();
        for (int i=pos1-1;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        System.out.println("The array after deletion is ");
        for (int i=0;i<n-1;i++){
            System.out.print(arr[i]+" ");
        }
        
    }
}

