import java.util.Vector;


class Graph{
	private int V;
	private Vector<Integer>[] adj;
	private boolean[] visited;

	Graph(int V){
		adj = new Vector[V];
		visited = new boolean[V];
		
		for(int i=0;i<V;i++){
			adj[i] = new Vector();
			visited[i] = false;
		}
	}

	void addEdge(int u,int w){
		adj[u].add(w);
	}

	void DFS(int v){
		visited[v] = true;

		System.out.print(v + "-");

		for(Integer i : adj[v]){
			if(!visited[i])
				DFS(i);
		}
	}

}

public class  DFS{

	public static void main(String[] args){
			Graph g = new Graph(4);

			g.addEdge(0,1);
			g.addEdge(0,2);
			g.addEdge(1,2);
			g.addEdge(2,0);
			g.addEdge(2,3);
			g.addEdge(3,3);

			g.DFS(2);

			System.out.println();

	}
}