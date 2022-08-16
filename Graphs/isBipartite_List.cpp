#include <list>
#include <queue>
#include <iostream>
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
    void addEdge(int i, int j) // undir = true for undirected graph
    {
        l[i].push_back(j);
        l[j].push_back(i);
    }
    bool isBipartite(int src)
    {

        vector<int> color(V, -1);
        // color -1 means unvisited, 0 means group A and 1 means group B

        color[src] = 1;
        queue<int> q;
        q.push(src);

        while (!q.empty())
        {
            // Dequeue first element from queue and store in f
            int f = q.front();
            q.pop();
            
            for (auto i : l[f])
            {
                if (i == f)
                {
                    return false;
                }
            }

            for (auto nbr : l[f])
            {
                if (nbr && color[nbr] == -1)
                {
                    color[nbr] = 1 - color[f];
                    q.push(nbr);
                }
                else if (nbr && color[nbr] == color[f])
                    return false;
            }
        }
        return true;
    }
};

int main()
{
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 0);
    g.addEdge(1, 2);
    // g.addEdge(2, 2);
    g.addEdge(2, 1);
    g.addEdge(3, 0);
    g.addEdge(3, 3);
    if (g.isBipartite(0))
        cout << "Is Bipartite " << endl;
    else
        cout << "Not Bipartite" << endl;
}
