import java.util.*;

public class RecursiveBinarySearchBasic {
    static int binarySearch(int[] arr, int low, int high, int target) {
        if (low > high) return -1;
        int mid = (low + high) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] > target) return binarySearch(arr, low, mid - 1, target);
        else return binarySearch(arr, mid + 1, high, target);
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
        int result = binarySearch(arr, 0, n - 1, target);
        if (result == -1) System.out.println("Element not found.");
        else System.out.println("Element found at index: " + result);
        sc.close();
    }
}
