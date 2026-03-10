import java.util.Arrays;

public class ShellSort {
    static void shellSort(int[] arr) {
        int n = arr.length;
        for (int gap = n / 2; gap > 0; gap /= 2) {
            for (int i = gap; i < n; i++) {
                int temp = arr[i];
                int j = i;
                while (j >= gap && arr[j - gap] > temp) {
                    arr[j] = arr[j - gap];
                    j -= gap;
                }
                arr[j] = temp;
            }
        }
    }

    public static void main(String[] args) {
        int[] a = {10, 23, 51, 18, 4, 31, 13, 5, 6};
        int[] b = {100, -10, 500, 20, -5, 15, 0, 40};

        shellSort(a);
        shellSort(b);

        System.out.println(Arrays.toString(a));
        System.out.println(Arrays.toString(b));
    }
}