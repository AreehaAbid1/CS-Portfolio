import java.util.*;

public class LoopToRecursion {
    // task 1a
    int countEven(int[] arr, int i) {
        if (i == arr.length) return 0;
        if (arr[i] % 2 == 0) return 1 + countEven(arr, i + 1);
        return countEven(arr, i + 1);
    }

    // task 1b
    int findMax(int[] arr, int i) {
        if (i == arr.length - 1) return arr[i];
        int max = findMax(arr, i + 1);
        return arr[i] > max ? arr[i] : max;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter array elements:");
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        LoopToRecursion q = new LoopToRecursion();
        System.out.println("Total even numbers: " + q.countEven(arr, 0));
        System.out.println("Maximum value: " + q.findMax(arr, 0));
        sc.close();
    }
}
