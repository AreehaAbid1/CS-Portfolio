import java.util.ArrayList;

public class GraphAdjacencyList {

    static class Graph {
        int vertices;
        ArrayList<ArrayList<Integer>> adj;

        Graph(int vertices) {
            this.vertices = vertices;
            adj = new ArrayList<>();

            for (int i = 0; i < vertices; i++)
                adj.add(new ArrayList<>());
        }

        void addEdge(int u, int v) {
            adj.get(u).add(v);
            adj.get(v).add(u);
        }

        void printGraph() {
            for (int i = 0; i < vertices; i++) {
                System.out.print(i + " -> ");
                for (int j : adj.get(i))
                    System.out.print(j + " ");
                System.out.println();
            }
        }
    }

    public static void main(String[] args) {
        Graph g = new Graph(5);

        g.addEdge(0, 1);
        g.addEdge(0, 4);
        g.addEdge(1, 2);
        g.addEdge(1, 3);
        g.addEdge(1, 4);
        g.addEdge(2, 3);
        g.addEdge(3, 4);

        g.printGraph();
    }
}
