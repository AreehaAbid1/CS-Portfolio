import java.util.Scanner;
public class Factorial{
    public static void main(String args[]){
        int num;
        System.out.println("---FACTORIAL---");
        System.out.print("Enter a number: ");
        Scanner j = new Scanner (System.in);
        num = j.nextInt();
        for(int i = num-1; i>=1; i--){
           num*=i;
        }
        System.out.println("Factorial: "+num);
        j.close();
    }
}