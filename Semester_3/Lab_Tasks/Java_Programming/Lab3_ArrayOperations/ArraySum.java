import java.util.*;

public class ArraySum{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            System.out.print("Enter element "+(i+1)+": ");
            arr[i]=sc.nextInt();
        }

        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }

        System.out.println("\nSum of all elements: "+sum);
        sc.close();
    }
}
