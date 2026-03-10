import java.util.*;

public class QueueLinkedList {
    static void bucketSort(float[] arr) {
        int n = arr.length;
        List<Float>[] buckets = new ArrayList[n];

        for (int i = 0; i < n; i++) {
            buckets[i] = new ArrayList<>();
        }

        for (float num : arr) {
            int index = (int)(num * n);
            buckets[index].add(num);
        }

        for (List<Float> bucket : buckets) {
            Collections.sort(bucket);
        }

        int k = 0;
        for (List<Float> bucket : buckets) {
            for (float num : bucket) {
                arr[k++] = num;
            }
        }
    }

    public static void main(String[] args) {
        float[] arr = {0.42f, 0.32f, 0.23f, 0.52f, 0.25f, 0.47f};
        bucketSort(arr);
        System.out.println(Arrays.toString(arr));
    }
}