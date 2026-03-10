import java.util.*;

public class LinearSearchMultiplePositions {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter array elements:");
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        System.out.print("Enter element to search: ");
        int target = sc.nextInt();
        int first = -1, last = -1, secondLast = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                if (first == -1) first = i;
                secondLast = last;
                last = i;
            }
        }
        if (first == -1) System.out.println("Element not found.");
        else {
            System.out.println("First occurrence: " + first);
            System.out.println("Last occurrence: " + last);
            if (secondLast != -1) System.out.println("Second last occurrence: " + secondLast);
            else System.out.println("Second last occurrence not available.");
        }
        sc.close();
    }
}
