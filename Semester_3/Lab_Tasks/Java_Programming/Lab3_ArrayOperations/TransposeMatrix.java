import java.util.*;

public class TransposeMatrix{
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

        System.out.println("\nOriginal matrix:");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }

        int trans[][]=new int[c][r];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                trans[j][i]=arr[i][j];
            }
        }

        System.out.println("\nTranspose matrix:");
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                System.out.print(trans[i][j]+" ");
            }
            System.out.println();
        }
        sc.close();
    }
}
