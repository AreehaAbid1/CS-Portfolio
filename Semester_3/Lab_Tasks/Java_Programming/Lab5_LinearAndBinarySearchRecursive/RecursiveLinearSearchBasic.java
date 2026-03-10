import java.util.*;

public class RecursiveLinearSearchBasic {
    static int recursiveLinearSearch(int[] arr, int index, int target) {
        if (index == arr.length) return -1;
        if (arr[index] == target) return index;
        return recursiveLinearSearch(arr, index + 1, target);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter array elements:");
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        System.out.print("Enter target element: ");
        int target = sc.nextInt();
        int result = recursiveLinearSearch(arr, 0, target);
        if (result == -1) System.out.println("Element not found.");
        else System.out.println("Element found at index: " + result);
        sc.close();
    }
}
