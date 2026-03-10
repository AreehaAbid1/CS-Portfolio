public class PlaylistManagerDoublyLinkedList {
    static class Node {
        String title;
        Node prev;
        Node next;
        Node(String t){ title = t; }
    }
    Node head;
    Node tail;
    public void InsertAtBeginning(String songTitle){
        Node n = new Node(songTitle);
        if(head == null){ head = tail = n; return; }
        n.next = head;
        head.prev = n;
        head = n;
    }
    public void InsertAtEnd(String songTitle){
        Node n = new Node(songTitle);
        if(tail == null){ head = tail = n; return; }
        tail.next = n;
        n.prev = tail;
        tail = n;
    }
    public void InsertAfterSong(String targetSong, String newSong){
        Node cur = head;
        while(cur != null && !cur.title.equals(targetSong)) cur = cur.next;
        if(cur == null) return;
        Node n = new Node(newSong);
        n.next = cur.next;
        n.prev = cur;
        cur.next = n;
        if(n.next != null) n.next.prev = n;
        else tail = n;
    }
    public void InsertBeforeSong(String targetSong, String newSong){
        Node cur = head;
        while(cur != null && !cur.title.equals(targetSong)) cur = cur.next;
        if(cur == null) return;
        Node n = new Node(newSong);
        n.prev = cur.prev;
        n.next = cur;
        cur.prev = n;
        if(n.prev != null) n.prev.next = n;
        else head = n;
    }
    public void RemoveFromBeginning(){
        if(head == null) return;
        if(head == tail){ head = tail = null; return; }
        head = head.next;
        head.prev = null;
    }
    public void RemoveFromEnd(){
        if(tail == null) return;
        if(head == tail){ head = tail = null; return; }
        tail = tail.prev;
        tail.next = null;
    }
    public void RemoveAfterSong(String songTitle){
        Node cur = head;
        while(cur != null && !cur.title.equals(songTitle)) cur = cur.next;
        if(cur == null || cur.next == null) return;
        Node toRemove = cur.next;
        cur.next = toRemove.next;
        if(toRemove.next != null) toRemove.next.prev = cur;
        else tail = cur;
    }
    public void RemoveBeforeSong(String songTitle){
        Node cur = head;
        while(cur != null && !cur.title.equals(songTitle)) cur = cur.next;
        if(cur == null || cur.prev == null) return;
        Node toRemove = cur.prev;
        cur.prev = toRemove.prev;
        if(toRemove.prev != null) toRemove.prev.next = cur;
        else head = cur;
    }
    public String forwardTraversal(){
        StringBuilder sb = new StringBuilder();
        Node cur = head;
        while(cur != null){
            sb.append(cur.title);
            if(cur.next != null) sb.append(" -> ");
            else sb.append(" -> null");
            cur = cur.next;
        }
        return sb.toString();
    }
    public String backwardTraversal(){
        StringBuilder sb = new StringBuilder();
        Node cur = tail;
        while(cur != null){
            sb.append(cur.title);
            if(cur.prev != null) sb.append(" -> ");
            else sb.append(" -> null");
            cur = cur.prev;
        }
        return sb.toString();
    }
    public int searchSong(String songTitle){
        Node cur = head;
        int pos = 1;
        while(cur != null){
            if(cur.title.equals(songTitle)) return pos;
            cur = cur.next;
            pos++;
        }
        return -1;
    }
    public static void main(String[] args){
        PlaylistManagerDoublyLinkedList pl = new PlaylistManagerDoublyLinkedList();
        pl.InsertAtEnd("Song A");
        pl.InsertAtEnd("Song C");
        pl.InsertAtEnd("Song D");
        pl.InsertAtBeginning("Song Start");
        pl.InsertAfterSong("Song A", "Song B");
        pl.InsertBeforeSong("Song D", "Song C2");
        System.out.println("Forward: " + pl.forwardTraversal());
        System.out.println("Backward: " + pl.backwardTraversal());
        System.out.println("Position of 'Song C2': " + pl.searchSong("Song C2"));
        pl.RemoveAfterSong("Song A");
        System.out.println("After RemoveAfterSong('Song A'): " + pl.forwardTraversal());
        pl.RemoveBeforeSong("Song D");
        System.out.println("After RemoveBeforeSong('Song D'): " + pl.forwardTraversal());
        pl.RemoveFromBeginning();
        System.out.println("After RemoveFromBeginning(): " + pl.forwardTraversal());
        pl.RemoveFromEnd();
        System.out.println("After RemoveFromEnd(): " + pl.forwardTraversal());
    }
}