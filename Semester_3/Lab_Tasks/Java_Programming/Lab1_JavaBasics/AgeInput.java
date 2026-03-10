import java.util.Scanner;
public class AgeInput {
    public static void main(String args[]){
        int age;
        System.out.print("Enter age: ");
        Scanner obj = new Scanner (System.in);
        age = obj.nextInt();
        System.out.println("Age you entered is: "+age);
        obj.close();
    }
}
