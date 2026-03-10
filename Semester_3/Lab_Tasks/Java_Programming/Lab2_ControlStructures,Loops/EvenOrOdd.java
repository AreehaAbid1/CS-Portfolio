import java.util.Scanner;
public class EvenOrOdd{
    public static void main(String args[]){
        int num;
        System.out.print("Enter a number: ");
        Scanner input = new Scanner (System.in);
        num = input.nextInt();
        if(num%2!=0){
            System.out.println("The number '"+num+"' you entered is ODD");
        }
        else{
            System.out.println("The number '"+num+"' you entered is EVEN");
        }
        input.close();
    }
}