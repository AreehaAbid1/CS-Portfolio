public class BinarySearchTreeFull {

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

    static boolean search(Node root, int key) {
        if (root == null)
            return false;

        if (root.data == key)
            return true;

        if (key < root.data)
            return search(root.left, key);

        return search(root.right, key);
    }

    static int findMin(Node root) {
        while (root.left != null)
            root = root.left;

        return root.data;
    }

    static int findMax(Node root) {
        while (root.right != null)
            root = root.right;

        return root.data;
    }

    static Node delete(Node root, int key) {
        if (root == null)
            return null;

        if (key < root.data)
            root.left = delete(root.left, key);
        else if (key > root.data)
            root.right = delete(root.right, key);
        else {
            if (root.left == null)
                return root.right;
            else if (root.right == null)
                return root.left;

            root.data = findMin(root.right);
            root.right = delete(root.right, root.data);
        }

        return root;
    }

    static void inorder(Node root) {
        if (root != null) {
            inorder(root.left);
            System.out.print(root.data + " ");
            inorder(root.right);
        }
    }

    public static void main(String[] args) {
        int[] values = {52, 25, 60, 35, 20, 59, 65};
        Node root = null;

        for (int i = 0; i < values.length; i++)
            root = insert(root, values[i]);

        System.out.println(search(root, 35));
        System.out.println(findMin(root));
        System.out.println(findMax(root));

        root = delete(root, 25);
        inorder(root);
    }
}
