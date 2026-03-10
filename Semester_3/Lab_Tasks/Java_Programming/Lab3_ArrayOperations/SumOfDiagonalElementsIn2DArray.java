import java.util.*;

public class SumOfDiagonalElementsIn2DArray{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter size of square matrix: ");
        int n=sc.nextInt();
        int arr[][]=new int[n][n];

        System.out.println("Enter elements:");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=sc.nextInt();
            }
        }

        System.out.println("\nMatrix:");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }

        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i][i];
        }

        System.out.println("\nSum of diagonal elements: "+sum);
        sc.close();
    }
}
