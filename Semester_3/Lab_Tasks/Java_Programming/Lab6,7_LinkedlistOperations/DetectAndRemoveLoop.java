public class DetectAndRemoveLoop {
    static class Node {
        int val;
        Node next;
        Node(int v){ val = v; }
    }
    public static boolean removeLoop(Node head){
        if(head == null || head.next == null) return false;
        Node slow = head, fast = head;
        while(fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
            if(slow == fast) break;
        }
        if(fast == null || fast.next == null) return false;
        slow = head;
        if(slow == fast){
            while(fast.next != slow) fast = fast.next;
            fast.next = null;
            return true;
        }
        while(slow.next != fast.next){
            slow = slow.next;
            fast = fast.next;
        }
        fast.next = null;
        return true;
    }
    public static void printList(Node head){
        Node cur = head;
        int safety = 0;
        while(cur != null && safety < 100){
            System.out.print(cur.val + (cur.next != null ? " -> " : " -> null"));
            cur = cur.next;
            safety++;
        }
        System.out.println();
    }
    public static void main(String[] args){
        Node n1 = new Node(1);
        Node n2 = new Node(2);
        Node n3 = new Node(3);
        Node n4 = new Node(4);
        Node n5 = new Node(5);
        n1.next = n2; n2.next = n3; n3.next = n4; n4.next = n5; n5.next = n3;
        System.out.print("Input: ");
        System.out.println("1 -> 2 -> 3 -> 4 -> 5 -> 3 (loop)");
        boolean removed = removeLoop(n1);
        System.out.print("Output: ");
        printList(n1);
    }
}
