import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class GraphDFS_BFS {

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

        void dfs(int start) {
            boolean[] visited = new boolean[vertices];
            dfsHelper(start, visited);
        }

        void dfsHelper(int v, boolean[] visited) {
            visited[v] = true;
            System.out.print(v + " ");

            for (int i : adj.get(v)) {
                if (!visited[i])
                    dfsHelper(i, visited);
            }
        }

        void bfs(int start) {
            boolean[] visited = new boolean[vertices];
            Queue<Integer> queue = new LinkedList<>();

            visited[start] = true;
            queue.add(start);

            while (!queue.isEmpty()) {
                int v = queue.poll();
                System.out.print(v + " ");

                for (int i : adj.get(v)) {
                    if (!visited[i]) {
                        visited[i] = true;
                        queue.add(i);
                    }
                }
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

        g.dfs(0);
        System.out.println();
        g.bfs(0);
    }
}
