import java.util.*;

public class RecursiveLinearSearchLastAndCount {
    static int count = 0;
    static int lastIndex = -1;

    static void searchElement(int[] arr, int index, int target) {
        if (index == arr.length) return;
        if (arr[index] == target) {
            count++;
            lastIndex = index;
        }
        searchElement(arr, index + 1, target);
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
        searchElement(arr, 0, target);
        if (count == 0) System.out.println("Element not found.");
        else {
            System.out.println("Last occurrence index: " + lastIndex);
            System.out.println("Total occurrences: " + count);
        }
        sc.close();
    }
}
