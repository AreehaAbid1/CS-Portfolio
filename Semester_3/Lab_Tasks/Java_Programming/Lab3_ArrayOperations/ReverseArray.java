import java.util.*;

public class ReverseArray{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int n=sc.nextInt();
        int a[]=new int[n];
        int b[]=new int[n];

        for(int i=0;i<n;i++){
            System.out.print("Enter element "+(i+1)+": ");
            a[i]=sc.nextInt();
        }

        for(int i=0;i<n;i++){
            b[i]=a[n-1-i];
        }

        System.out.print("\nOriginal array: ");
        for(int i=0;i<n;i++) System.out.print(a[i]+" ");

        System.out.print("\nReversed array: ");
        for(int i=0;i<n;i++) System.out.print(b[i]+" ");
        sc.close();
    }
}
