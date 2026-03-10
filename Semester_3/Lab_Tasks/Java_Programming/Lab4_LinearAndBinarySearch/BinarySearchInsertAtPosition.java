import java.util.*;

public class BinarySearchInsertAtPosition {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of sorted array (with one number missing): ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter sorted array elements starting from 1:");
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();

        int missingLinear = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] != i + 1) {
                missingLinear = i + 1;
                break;
            }
        }
        if (missingLinear == -1) missingLinear = n + 1;
        System.out.println("Missing number (Linear Search): " + missingLinear);

        int low = 0, high = n - 1, missingBinary = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == mid + 1) low = mid + 1;
            else {
                missingBinary = mid + 1;
                high = mid - 1;
            }
        }
        if (missingBinary == -1) missingBinary = n + 1;
        System.out.println("Missing number (Binary Search): " + missingBinary);
        sc.close();
    }
}
