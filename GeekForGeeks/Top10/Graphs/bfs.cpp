#include <iostream>
#include <list>

using namespace std;


class Graph{
	int V; //No of vertices
	list<int> *adj; //pointer to an array containing adjacency list

public: 
	Graph(int V);
	void addEdge(int v,int w); //used for the graph formation , driver code
	void BFS(int s);
};

Graph::Graph(int V){
	this->V = V;
	//initializing the array containing V vertices
	adj = new list<int>[V];
}

void Graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
}

void Graph::BFS(int s){
	//we start from a source s

	//Initially we mark all the vertices as not visited
	bool* visited = new bool[V];

	for(int i=0;i<V;i++)
		visited[i] = false;

	//BFS needs a queue
	list<int> queue;


	visited[s] = true; //since the starting node is always visited
	
	//whatever is visited , must be push backed to the queue
	queue.push_back(s);

	while(!queue.empty()){

			s = queue.front();

			cout << s << " - ";

			queue.pop_front();

			//we then append that the nodes that are not visited to the queue, thats it

			for(list<int>::const_iterator it = adj[s].begin(); it != adj[s].end(); ++it){
				if(!visited[*it])
				{
					queue.push_back(*it);
					visited[*it] = !visited[*it];
				}
			}

	}

	cout << endl;

}


/* Driver program*/
int main(){

	Graph g(4);
	
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);

	g.BFS(2);
}