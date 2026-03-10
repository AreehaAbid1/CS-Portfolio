import java.util.Scanner;
public class Calculator{
    public static void main(String args[]){
        double num1, num2;

        System.out.print("Enetr 1st number: ");

        Scanner o1 = new Scanner(System.in);
        num1 = o1.nextDouble();

        System.out.println();

        System.out.print("Enter 2nd number: ");

        Scanner o2 = new Scanner(System.in);
        num2 = o2.nextDouble();

        System.out.println("---ARITHMATIC OPERATIONS---");

        double add;
        add = num1+num2;
        System.out.println("Addition: "+add);

        double subtract;
        subtract = num1-num2;
        System.out.println("Subtraction: "+subtract);

        double multiplication;
        multiplication = num1*num2;
        System.out.println("Multiplication: "+multiplication);

        double division;
        division = num1/num1;
        System.out.println("Division: "+division);

        o1.close();
        o2.close();
    }
}