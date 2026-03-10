public class BinarySearchTree {

    static class Node {
        int data;
        Node left, right;

        Node(int data) {
            this.data = data;
            left = right = null;
        }
    }

    static Node insert(Node root, int data) {
        if (root == null)
            return new Node(data);

        if (data < root.data)
            root.left = insert(root.left, data);
        else
            root.right = insert(root.right, data);

        return root;
    }

    public static void main(String[] args) {
        int[] values = {52, 25, 60, 35, 20, 59, 65};
        Node root = null;

        for (int i = 0; i < values.length; i++)
            root = insert(root, values[i]);
    }
}
