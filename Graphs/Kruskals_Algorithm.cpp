#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<pair<int, pair<int, int>>> Graph;
//1st int = weight of the edge
// 2nd int pair = source
// 3rd int pair = destination

int find(int u,int parent[])
{ 
    if(parent[u]<0)return u;
    return find(parent[u],parent);
}

void unionByWeight(int u, int v, int parent[])
{
    int pu = find(u,parent),pv=find(v,parent);
    if(pu != pv)
   {
        if(parent[pu]<parent[pv])
        {
             parent[pu] += parent[pv];
             parent[pv] = pu;
        }
        else{
             parent[pv] += parent[pu];
             parent[pu]=pv;
        }
   }
}

Graph kruskals(Graph g, int V)
{
    Graph res;
    int s, d, w;
    int parent[V];
    for(int i = 0 ; i < V; i++)
        parent[i] = -1;

    sort(g.begin(), g.end());

    int E = g.size();
    for(int i = 0 ; i < E; i++)
    {
        s = g[i].second.first;
        d = g[i].second.second;
        w = g[i].first;
        if(find(s, parent) != find(d, parent))
        {
            res.push_back(g[i]);
            unionByWeight(s, d, parent);
        }
    }
    return res;

}


int main()
{
    Graph g, res;
    int V, E, s, d, w;
    // V = no. of edges and E = no. of edges
    // s = source, d = destination and w = weight
    cout << "Enter the no of nodes and no of edges" << endl;
    cin >> V >> E;
    for(int i = 0 ; i < E; i++)
    {
        cin >> s >> d >> w;
        g.push_back(make_pair(w, make_pair(s,d)));
    }
    res = kruskals(g, V);
    cout << "Weight" << "   " << "Source" << "    "<< "Destination"<<endl;
    for(int i = 0 ; i < res.size(); i++)
    {
        cout << res[i].first << "         " << res[i].second.first << "        " << res[i].second.second << endl;
    }
}
