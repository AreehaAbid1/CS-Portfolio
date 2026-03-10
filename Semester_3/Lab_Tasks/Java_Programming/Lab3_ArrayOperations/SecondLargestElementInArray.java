import java.util.*;

public class SecondLargestElementInArray{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            System.out.print("Enter element "+(i+1)+": ");
            arr[i]=sc.nextInt();
        }

        int first=arr[0];
        int second=Integer.MIN_VALUE;

        for(int i=1;i<n;i++){
            if(arr[i]>first){
                second=first;
                first=arr[i];
            }else if(arr[i]>second && arr[i]!=first){
                second=arr[i];
            }
        }

        if(second==Integer.MIN_VALUE)
            System.out.println("\nNo second largest element (all values same)");
        else
            System.out.println("\nSecond largest element: "+second);
        sc.close();
    }
}
