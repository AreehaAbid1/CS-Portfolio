import java.util.Scanner;
public class TriangleType {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b, c;
        System.out.print("Enter first side: ");
        a = sc.nextInt();
        System.out.print("Enter second side: ");
        b = sc.nextInt();
        System.out.print("Enter third side: ");
        c = sc.nextInt();
        if(a == b && b == c)
            System.out.println("Equilateral triangle");
        else if(a == b || b == c || a == c)
            System.out.println("Isosceles triangle");
        else
            System.out.println("Scalene triangle");
            sc.close();
    }
}
