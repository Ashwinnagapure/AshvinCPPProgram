#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Graph
{
int V;
list<int> *adj;
public:
Graph(int V)
{
this->V = V;
adj = new list<int>[V];
}
void addEdge(int u, int v);
int countEdges();
};
void Graph ::addEdge(int u, int v)
{
adj[u].push_back(v);
adj[v].push_back(u);
}
int Graph ::countEdges()
{
int sum = 0;
for (int i = 0; i < V; i++)
sum += adj[i].size();
return sum / 2;
}
int main()
{
int V = 9;
Graph g(V);
g.addEdge(0, 1); g.addEdge(0, 7); g.addEdge(1, 2);
g.addEdge(1, 7); g.addEdge(2, 3); g.addEdge(2, 8);
g.addEdge(2, 5); g.addEdge(3, 4); g.addEdge(3, 5);
g.addEdge(4, 5); g.addEdge(5, 6); g.addEdge(6, 7); 
g.addEdge(6, 8); 
cout << "The No of edges in graph are "<<g.countEdges() << endl;
return 0;
}