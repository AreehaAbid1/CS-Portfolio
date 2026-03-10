import java.util.*;

public class RecursiveBinarySearchCount {
    static int countOccurrences(int[] arr, int low, int high, int target) {
        if (low > high) return 0;
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return 1 + countOccurrences(arr, low, mid - 1, target) + countOccurrences(arr, mid + 1, high, target);
        if (arr[mid] > target)
            return countOccurrences(arr, low, mid - 1, target);
        return countOccurrences(arr, mid + 1, high, target);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter sorted array elements:");
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        System.out.print("Enter target element: ");
        int target = sc.nextInt();
        int count = countOccurrences(arr, 0, n - 1, target);
        if (count == 0) System.out.println("Element not found.");
        else System.out.println("Total occurrences: " + count);
        sc.close();
    }
}
