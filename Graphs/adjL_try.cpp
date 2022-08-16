#include <iostream>
#include <vector>
using namespace std;

class Graph{
    int V;
    vector<int> *v;
    public:
    Graph(int x)
    {
        V = x;
        v = new vector<int>[V];
    }
    void addEdge(int s, int d)
    {
        v[s].push_back(d);
        v[d].push_back(s);
    }

    void printlist()
    {
        for(int i = 0 ; i < V; i++)
        {
            cout << i << " -- > ";
            for(auto item : v[i])
                cout << item << " --- ";
            cout << endl;
        }
    }

    
};

int main()
{
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(2,1);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.printlist();

}