
#include<bits/stdc++.h>
#include <iostream>
#include <list>
#include <queue>
using namespace std;
 
class Graph
{
    int V;    
    list<int> *l;
public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[V];
    }
    void addEdge(int i, int j)   // to add an edge to graph
    {
        l[i].push_back(j);
    }
    bool isCyclicUtil(int v, bool visited[], bool *recStack)
    {
        if(visited[v] == false)
        {
            // Mark the current node as visited and part of recursion stack
            visited[v] = true;
            recStack[v] = true;
    
            // Recur for all the vertices adjacent to this vertex
            list<int>::iterator i;
            for(i = l[v].begin(); i != l[v].end(); ++i)
            {
                if ( !visited[*i] && isCyclicUtil(*i, visited, recStack) )
                    return true;
                else if (recStack[*i])
                    return true;
            }
        }
        recStack[v] = false;  // remove the vertex from recursion stack
        return false;
    }
    bool isCyclic()    // returns true if there is a cycle in this graph
    {
        // Mark all the vertices as not visited and not part of recursion
        // stack
        bool *visited = new bool[V];
        bool *recStack = new bool[V];
        for(int i = 0; i < V; i++)
        {
            visited[i] = false;
            recStack[i] = false;
        }
    
        // Call the recursive helper function to detect cycle in different
        // DFS trees
        for(int i = 0; i < V; i++)
            if ( !visited[i] && isCyclicUtil(i, visited, recStack))
                return true;
    
        return false;
    }
};
 
int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    if(g.isCyclic())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";
    return 0;
}