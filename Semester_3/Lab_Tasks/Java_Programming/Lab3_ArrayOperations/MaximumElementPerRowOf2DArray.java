import java.util.*;

public class MaximumElementPerRowOf2DArray{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter number of rows: ");
        int r=sc.nextInt();
        System.out.print("Enter number of columns: ");
        int c=sc.nextInt();
        int arr[][]=new int[r][c];

        System.out.println("Enter elements:");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=sc.nextInt();
            }
        }

        System.out.println("\nMatrix:");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }

        System.out.println("\nMaximum element in each row:");
        for(int i=0;i<r;i++){
            int max=arr[i][0];
            for(int j=1;j<c;j++){
                if(arr[i][j]>max)
                    max=arr[i][j];
            }
            System.out.println("Row "+(i+1)+": "+max);
        }
        sc.close();
    }
}