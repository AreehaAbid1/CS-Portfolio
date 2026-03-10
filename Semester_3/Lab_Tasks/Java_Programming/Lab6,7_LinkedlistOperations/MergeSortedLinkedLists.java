public class MergeSortedLinkedLists {
    static class Node {
        int val;
        Node next;
        Node(int v){ val = v; }
    }
    public static Node mergeSorted(Node a, Node b){
        Node dummy = new Node(0);
        Node tail = dummy;
        while(a != null && b != null){
            if(a.val <= b.val){
                tail.next = a;
                a = a.next;
            } else {
                tail.next = b;
                b = b.next;
            }
            tail = tail.next;
        }
        tail.next = (a != null) ? a : b;
        return dummy.next;
    }
    public static void printList(Node head){
        Node cur = head;
        while(cur != null){
            System.out.print(cur.val + (cur.next != null ? " -> " : " -> null"));
            cur = cur.next;
        }
        System.out.println();
    }
    public static void main(String[] args){
        Node a1 = new Node(1);
        Node a2 = new Node(3);
        Node a3 = new Node(5);
        a1.next = a2; a2.next = a3;
        Node b1 = new Node(2);
        Node b2 = new Node(4);
        Node b3 = new Node(6);
        b1.next = b2; b2.next = b3;
        System.out.println("List 1: ");
        printList(a1);
        System.out.println("List 2: ");
        printList(b1);
        Node m = mergeSorted(a1, b1);
        System.out.print("Output: ");
        printList(m);
    }
}
