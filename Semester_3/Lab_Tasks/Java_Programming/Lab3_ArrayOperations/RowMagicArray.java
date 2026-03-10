import java.util.*;

public class RowMagicArray{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter number of rows: ");
        int r=sc.nextInt();
        System.out.print("Enter number of columns: ");
        int c=sc.nextInt();
        int arr[][]=new int[r][c];

        System.out.println("Enter elements: ");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=sc.nextInt();
            }
        }

        System.out.println("\nArray values are:");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                System.out.println(arr[i][j]);
            }
        }

        int sum=0;
        boolean isMagic=true;
        for(int j=0;j<c;j++) sum+=arr[0][j];

        for(int i=1;i<r;i++){
            int rowSum=0;
            for(int j=0;j<c;j++){
                rowSum+=arr[i][j];
            }
            if(rowSum!=sum){
                isMagic=false;
                break;
            }
        }

        if(isMagic)
            System.out.println("\nThe array is Row-Magic.");
        else
            System.out.println("\nArray is not Row-Magic.");
        sc.close();
    }
}
