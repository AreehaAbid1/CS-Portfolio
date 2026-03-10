import java.util.*;

public class BubbleSort {
    static void bubbleSort(int[] arr) {
        int n = arr.length;
        boolean swapped;
        for (int i = 0; i < n - 1; i++) {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }
            if (!swapped) break;
        }
    }

    public static void main(String[] args) {
        int[] a = {5, 1, 12, -5, 16, 2, 8, 3, 9, 7};
        int[] b = {1,2,3,4,5,6,7,8,9,10};

        bubbleSort(a);
        bubbleSort(b);

        System.out.println(Arrays.toString(a));
        System.out.println(Arrays.toString(b));
    }
}

