public class QuickSortTwoPivots {

    public static void quickSortFirstPivot(int[] arr, int low, int high) {
        if (low < high) {
            int p = partitionFirst(arr, low, high);
            quickSortFirstPivot(arr, low, p - 1);
            quickSortFirstPivot(arr, p + 1, high);
        }
    }

    public static int partitionFirst(int[] arr, int low, int high) {
        int pivot = arr[low];
        int i = low + 1;

        for (int j = low + 1; j <= high; j++) {
            if (arr[j] < pivot) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
            }
        }

        int temp = arr[low];
        arr[low] = arr[i - 1];
        arr[i - 1] = temp;

        return i - 1;
    }

    public static void quickSortLastPivot(int[] arr, int low, int high) {
        if (low < high) {
            int p = partitionLast(arr, low, high);
            quickSortLastPivot(arr, low, p - 1);
            quickSortLastPivot(arr, p + 1, high);
        }
    }

    public static int partitionLast(int[] arr, int low, int high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        return i + 1;
    }

    public static void main(String[] args) {
        int[] arr1 = {56, 32, 78, 12, 89, 43, 21, 67};
        int[] arr2 = {56, 32, 78, 12, 89, 43, 21, 67};

        quickSortFirstPivot(arr1, 0, arr1.length - 1);
        quickSortLastPivot(arr2, 0, arr2.length - 1);

        for (int i = 0; i < arr1.length; i++)
            System.out.print(arr1[i] + " ");

        System.out.println();

        for (int i = 0; i < arr2.length; i++)
            System.out.print(arr2[i] + " ");
    }
}
