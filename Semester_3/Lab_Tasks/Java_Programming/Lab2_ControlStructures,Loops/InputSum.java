import java.util.Scanner;
public class InputSum {
    public static void main(String args[]){
        int size;
        System.out.print("Enter how many digits your number will have: ");
        Scanner sc = new Scanner (System.in);
        size = sc.nextInt();
        int[] nums = new int[size];
        System.out.print("Enter "+size+" digit number: ");
        int sum = 0;
        for(int i = 0; i<size; i++){
            nums[i] = sc.nextInt();
            sum += nums[i]; 
        }
        System.out.println("The sum of your number is: "+sum);
        sc.close();
    }
}
