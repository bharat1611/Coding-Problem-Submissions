#include <iostream>
#include <list>
#include <vector>
#include <queue>

using namespace std;

class G
{
    int V;
    list<pair<int, int>> *adj;

public:
    G(int x)
    {
        V = x;
        adj = new list<pair<int, int>>[V];
    }

    void addEdge(int s, int d, int w)
    {
        adj[s].push_back({d, w});
        adj[d].push_back({s, w});
    }
    void dijkstra(int src);
};

void G ::dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> dist(V, INT_MAX);
    pq.push({0, src});
    dist[src] = 0;

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        for (auto i : adj[u])
        {
            int v = i.first;
            int wt = i.second;

            if (dist[v] > dist[u] + wt)
            {
                dist[v] = dist[u] + wt;
                pq.push({dist[v], v});
            }
        }
    }
    cout << "SOURCE" << "     " << "DESTINATION" << "     " << "DISTANCE" << endl;
    for (int i = 0; i < V; i++)
    {
        cout << "   " << src << "          " << i << "               " << dist[i] << endl;
    }

    // cout << endl << src;
}

int main()
{
    G g(6);
    g.addEdge(0, 1, 6);
    g.addEdge(0, 5, 4);
    g.addEdge(1, 5, 5);
    g.addEdge(1, 4, 1);
    g.addEdge(1, 2, 7);
    g.addEdge(2, 4, 9);
    g.addEdge(2, 3, 8);
    g.addEdge(4, 3, 3);
    g.addEdge(4, 5, 2);
    g.dijkstra(0);
}