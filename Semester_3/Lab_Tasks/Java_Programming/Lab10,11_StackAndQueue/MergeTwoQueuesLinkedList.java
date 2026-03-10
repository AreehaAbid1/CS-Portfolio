import java.util.*;

class MergeTwoQueuesLinkedList {
    public static Queue<Integer> mergeQueues(Queue<Integer> q1, Queue<Integer> q2) {
        Queue<Integer> merged = new LinkedList<>();

        while (!q1.isEmpty())
            merged.add(q1.remove());

        while (!q2.isEmpty())
            merged.add(q2.remove());

        return merged;
    }

    public static void main(String[] args) {
        Queue<Integer> q1 = new LinkedList<>();
        Queue<Integer> q2 = new LinkedList<>();

        q1.add(1);
        q1.add(2);
        q1.add(3);

        q2.add(4);
        q2.add(5);

        Queue<Integer> result = mergeQueues(q1, q2);
        System.out.println(result);
    }
}
