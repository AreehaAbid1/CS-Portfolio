public class ReverseSinglyLinkedList {
    static class Node {
        int val;
        Node next;
        Node(int v){ val = v; }
    }
    public static Node reverse(Node head){
        Node prev = null;
        Node curr = head;
        while(curr != null){
            Node nxt = curr.next;
            curr.next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    public static void printList(Node head){
        Node cur = head;
        while(cur != null){
            System.out.print(cur.val + (cur.next != null ? " -> " : " -> null"));
            cur = cur.next;
            if(cur != null) System.out.print("");
        }
        System.out.println();
    }
    public static void main(String[] args){
        Node n1 = new Node(1);
        Node n2 = new Node(2);
        Node n3 = new Node(3);
        Node n4 = new Node(4);
        Node n5 = new Node(5);
        n1.next = n2; n2.next = n3; n3.next = n4; n4.next = n5;
        System.out.print("Input: ");
        printList(n1);
        Node r = reverse(n1);
        System.out.print("Output: ");
        printList(r);
    }
}
