#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

typedef vector<pair<int, pair<int, int>>> Graph;
class G
{
    int V;
    vector<pair<int, int>> *adj;

public:
    G(int v)
    {
        V = v;
        adj = new vector<pair<int, int>>[V];
    }
    void addEdge(int i, int j, int w)
    {
        adj[i].push_back(make_pair(j, w));
        adj[j].push_back(make_pair(i, w));
    }
    Graph primMST();
};

Graph G::primMST()
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    Graph res;
    int source = 0;
    vector<int> key(V, INT_MAX);
    vector<int> parent(V, -1);
    vector<bool> inMST(V, false);
    pq.push({0, source});
    key[source] = 0;

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        if (inMST[u] == true)
            continue;
        inMST[u] = true;
        for (auto i : adj[u])
        {
            int v = i.first;  // destination
            int w = i.second; // weight

            if (inMST[v] == false && key[v] > w)
            {
                key[v] = w;
                pq.push({key[v], v});
                parent[v] = u;
            }

            // graph.addEdge(u, v, key[v]);
           
        }
    }
    vector<pair<int,int>>weights;
    for(int i = 0 ; i < V; i++)
        weights.push_back(make_pair(i, key[i]));
    for(int i = 0; i < V; i++)
    {
        res.push_back(make_pair(weights[i].second, make_pair(i, parent[i])));
    }
    // for(int i = 1; i < V; i++)
    // {
    //     cout << parent[i] << " ," << i << endl;
    // }
    // cout << endl;
    // for(int i = 0 ; i < V; i++)
    //     cout << key[i] << " , " << i<<endl;
    return res;

}

int main()
{
    int V = 6;
    G g(V);
    g.addEdge(0, 1, 6);
    g.addEdge(0, 5, 4);
    g.addEdge(1, 5, 5);
    g.addEdge(1, 4, 1);
    g.addEdge(1, 2, 7);
    g.addEdge(2, 4, 9);
    g.addEdge(2, 3, 8);
    g.addEdge(4, 3, 3);
    g.addEdge(4, 5, 2);
    Graph res = g.primMST();
    cout << "Weight" << "   " << "Source" << "    " << "Destination" << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i].first << "         " << res[i].second.first << "        " << res[i].second.second << endl;
    }
}