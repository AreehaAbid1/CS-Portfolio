import java.util.*;

public class RecursionToLoop {
    // task 2a
    static void printReverse(int[] arr, int index) {
        for (int i = index; i >= 0; i--) {
            System.out.print(arr[i] + " ");
        }
    }

    // task 2b
    static int power(int base, int exp) {
        int result = 1;
        for (int i = 0; i < exp; i++) {
            result *= base;
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter array elements:");
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        System.out.print("Array in reverse: ");
        printReverse(arr, n - 1);
        System.out.println();
        System.out.print("Enter base: ");
        int base = sc.nextInt();
        System.out.print("Enter exponent: ");
        int exp = sc.nextInt();
        System.out.println("Power: " + power(base, exp));
        sc.close();
    }
}
