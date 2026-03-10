import java.util.Scanner;
public class FibonacciSeries {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int start, end, a = 0, b = 1, c;
        System.out.print("Enter starting value: ");
        start = sc.nextInt();
        System.out.print("Enter ending value: ");
        end = sc.nextInt();
        System.out.println("Fibonacci series between " + start + " and " + end + ":");
        while(a <= end){
            if(a >= start)
                System.out.print(a + " ");
            c = a + b;
            a = b;
            b = c;
        }
        sc.close();
    }
}
