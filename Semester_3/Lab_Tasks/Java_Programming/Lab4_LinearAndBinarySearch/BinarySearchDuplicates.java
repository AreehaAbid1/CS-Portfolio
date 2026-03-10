import java.util.*;

public class BinarySearchDuplicates {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of sorted array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter sorted array elements:");
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        System.out.print("Enter element to search: ");
        int target = sc.nextInt();

        int first = -1, last = -1;
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == target) {
                first = mid;
                high = mid - 1;
            } else if (arr[mid] < target) low = mid + 1;
            else high = mid - 1;
        }

        low = 0;
        high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == target) {
                last = mid;
                low = mid + 1;
            } else if (arr[mid] < target) low = mid + 1;
            else high = mid - 1;
        }

        if (first == -1) System.out.println("Element not found.");
        else {
            System.out.println("First occurrence: " + first);
            System.out.println("Last occurrence: " + last);
            System.out.println("Total duplicates: " + (last - first + 1));
        }
        sc.close();
    }
}
