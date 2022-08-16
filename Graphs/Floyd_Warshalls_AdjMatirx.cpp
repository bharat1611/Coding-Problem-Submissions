#include <iostream>
using namespace std;
#define INF 99999
#define V 4

void floyd(int graph[V][V])
{
    int dist[V][V];
    for(int i = 0 ; i < V; i++)
        for(int j = 0 ; j < V; j++)
            dist[i][j] = graph[i][j];

    for(int i = 0 ; i < V; i++)
    {
        for(int j = 0 ; j < V;j++)
        {
            for(int k = 0 ; k < V; k++)
            {
                if(dist[i][j] > dist[i][k] + dist[k][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    for(int i = 0 ; i < V; i++){
        for(int j = 0 ; j < V; j++)
        {
            if(dist[i][j] == INF)
                cout << "INF" << "   ";
            else
                cout << dist[i][j] << "     ";
        }
        cout << endl;
    }
}


int main()
{
    int g[V][V] = { { 0, 5, INF, 10 },
                        { INF, 0, 3, INF },
                        { INF, INF, 0, 1 },
                        { INF, INF, INF, 0 } };
    
    floyd(g);
    int b = sizeof(g)/sizeof(g[0]);
    cout << b << endl;
}

