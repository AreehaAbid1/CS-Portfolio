import java.util.Arrays;

public class QueueArray {
    static void countingSort(int[] arr) {
        int max = arr[0];
        for (int i : arr) {
            if (i > max) max = i;
        }

        int[] count = new int[max + 1];
        for (int i : arr) {
            count[i]++;
        }

        int index = 0;
        for (int i = 0; i < count.length; i++) {
            while (count[i]-- > 0) {
                arr[index++] = i;
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = {4, 2, 2, 8, 3, 3, 1};
        countingSort(arr);
        System.out.println(Arrays.toString(arr));
    }
}