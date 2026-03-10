import java.util.*;

public class LinearSearchAllOccurrences {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter array elements:");
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        System.out.print("Enter element to search: ");
        int target = sc.nextInt();
        int count = 0;
        System.out.print("Element found at indices: ");
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                System.out.print(i + " ");
                count++;
            }
        }
        if (count == 0) System.out.println("Element not found.");
        else System.out.println("\nTotal occurrences: " + count);
        sc.close();
    }
}