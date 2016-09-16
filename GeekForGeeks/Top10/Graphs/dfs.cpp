#include <iostream>
#include <list>


using namespace std;

class Graph{
	private:
		int V;
		list<int> *adj;
		bool *visited;
	public:
		Graph(int V);
		void addEdge(int v,int w);
		void DFS(int start);
};

Graph::Graph(int V){
	this->V = V;
	adj = new list<int>[V];
	visited = new bool[V];

	for(int i=0;i<V;i++)
		visited[i] = false;
}

void Graph::addEdge(int v,int w){
	adj[v].push_back(w);
}

void Graph::DFS(int start){

	//even for DFS we have a boolean array to check visited 
	
	visited[start] = true;

	cout << start << " - " ;


	for(list<int>::iterator it = adj[start].begin(); it != adj[start].end();++it)
	{
		if(!visited[*it])
			DFS(*it);
	}
	
}

/* DFS driver program*/

int main(){

	Graph g(4);

	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);

	g.DFS(2);

	cout << endl;

	return 0;
}