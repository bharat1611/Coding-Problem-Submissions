#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
#define INF INT_MAX

typedef vector<pair<int, pair<int, int>>>Graph;

Graph prims(Graph g, int V)
{
    priority_queue<pair<int, int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;
    Graph res;
    int source = 0;
    vector<int>key(V, INF);
    vector<int>parent(V, -1);
    vector<bool>inMST(V, false);

    pq.push(make_pair(0, source));
    key[source] = 0;

    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        if(inMST[u] == true)
            continue;
        
        inMST[u] = true;
        int i = 0;
        while(i < V)
        if(g[i].second.first == u)
        {
            {
                int w = g[i].first;
                int d = g[i].second.second;

                if(inMST[d] == false && key[d] > w)
                {
                    key[d] = w;
                    pq.push(make_pair(key[d], d));
                    parent[d] = u;
                }
            }
        }
        else
            continue;
        i++;
    }
    for (int i = 1; i < V; ++i)
        cout << parent[i] << " " << i <<endl;
    return res;

}

int main()
{
    Graph g, res;
    int V, E;
    int s, d, w;
    cout << "Enter the number of nodes and Edges"<<endl;
    cin >> V >> E;
    cout << "Enter the source, destination and weight"<<endl;
    for(int i = 0 ; i < E; i++)
    {
        cin >> s >> d >> w;
        g.push_back(make_pair(w, make_pair(s, d)));
    }
    res = prims(g, V);
    // cout << "Weight" << "   " << "Source" << "    "<< "Destination"<<endl;
    // for(int i = 0 ; i < res.size(); i++)
    // {
    //     cout << res[i].first << "         " << res[i].second.first << "        " << res[i].second.second << endl;
    // }
}