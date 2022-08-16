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
    void addEdge(int i, int j, bool undir = false)   // undir == false for directed graph
    {
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }
    
    // void trying()
    // {
    //     for(auto nbr : l[1])
    //         cout << nbr << " , ";
    // }

    bool isReachable(int source, int destination)
    {
         if(source == destination)
            return true;
        queue<int> q;
        bool *visited = new bool[V]{0};
        q.push(source);
        visited[source] = true;
        while(!q.empty()){
            // Do some work for every node
            int f = q.front();
            cout << f << endl;
            q.pop();
            for(auto nbr : l[f])
                cout << nbr << ",";
            //Push the nbrs of current node inside q if they are not already visited and check if any neighbour is equal to destination
            for(auto nbr : l[f])
            {
                if(nbr == destination)
                    return true;
                if(!visited[nbr])
                {
                    q.push(nbr);
                    visited[nbr] = true;
                    cout <<" ____ " << nbr << " ____" << endl;
                }
            }
        }
        delete []visited;
        return false;
    }

};
int main()
{
    Graph g(7);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(5,6);
    g.addEdge(4,5);
    g.addEdge(0,4);
    g.addEdge(3,4);
    // g.trying();
    if(g.isReachable(1, 5))
        cout << endl << "1 is reachable from 5 is true " << endl;
    else
        cout << endl << "1 is reachable from 5 is false" << endl;
    return 0;
}