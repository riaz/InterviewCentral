import java.lang.*;
import java.util.Vector;

class Graph{
	
	private int V;
	private Vector<Integer> adj[];
	
	Graph(int V){
		this.V = V;
		adj = new Vector[V];

		for(int i=0;i<V;++i)
			adj[i] = new Vector();
	}

	public void addEdge(int v,int w){
		adj[v].add(w);	
	}
	
	public int  getVertices(){
		return this.V;
	}

	public void BFS(int start){
		//we will create a boolean array for all the vertices , and marked then unvisited initially
		int V = this.getVertices();

		boolean[] visited = new boolean[V];

		for(int i=0;i<V;i++) visited[i] = false;

		//also we will need a queue
		Vector<Integer> queue = new Vector<Integer>();

		queue.add(start);
		visited[start] =  true;

		while(queue.size() != 0){
			int s = queue.remove(0);

			System.out.print(s+ "-");

			for(int i : adj[s]){
				if(!visited[i])
				{
					queue.add(i);
					visited[i] = !visited[i];
				}
			}
		}

		System.out.println();
	}
	
}	


/* This is the driver class */
public class BFS{

	public static void main(String[] args){

			Graph g = new Graph(4);
			
			g.addEdge(0,1);
			g.addEdge(0,2);
			g.addEdge(1,2);
			g.addEdge(2,0);
			g.addEdge(2,3);
			g.addEdge(3,3);

			g.BFS(2);
	}
}