#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define V 7  // # of vertices in Graph
#define E 9  // # of edges in Graph

void PrintMCST(int T[][V-1], int A[][E])
{
    printf("\nMinimum Cost Spanning Tree Edges\n" );
for (int i =0; i<V-1; i++)
{printf("[%d]-----[%d]\n",T[0][i],T[1][i]);
}    printf("\n");
}


void Union(int u, int v, int s[])
{
if (s[u] < s[v])
{
        s[u] += s[v];
        s[v] = u;
}
else
{
        s[v] += s[u];
        s[u] = v;
 }
}

int Find(int u, int s[])
{
    int x = u;
    int v = 0;

    while (s[x] > 0)
{
        x = s[x];
    }

    while (u != x)
{
        v = s[u];
        s[u] = x;
        u = v;
    }
    return x;
}

void KruskalsMCST(int A[3][9])
{

    int T[2][V-1];  // Solution array
    int track[E]={0};  // Track edges that are included in solution
    int set[V+1] = {-1, -1, -1, -1, -1, -1, -1, -1};  // Array for finding cycle

    int i={0};
    while (i < V-1)
{
        int min = 32767;
        int u={0};
        int v={0};
        int k={0};

        // Find a minimum cost edge
        for (int j=0; j<E; j++){
            if (track[j] == 0 && A[2][j] < min){
                min = A[2][j];
                u = A[0][j];
                v = A[1][j];
                k = j;
            }
        }

        // Check if the selected min cost edge (u, v) forming a cycle or not
        if (Find(u, set) != Find(v, set)){
            T[0][i] = u;
            T[1][i] = v;

            // Perform union
            Union(Find(u, set), Find(v, set), set);
            i++;
        }
        track[k] = 1;
    }

    PrintMCST(T, A);
}

int main()
{
 int a,b;
    a=0,b=0;
printf("Enter the rows  for the graph in matrix form: ");
    scanf("%d",&a);
    printf("\n");
    printf("Enter the columns  for the graph in matrix form: ");
    scanf("%d",&b);
    int edges[a][b];
    printf("Now enter the details of the matrix in %dX%d form: ",a,b);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&edges[i][j]);
        }
    }

    KruskalsMCST(edges);

    return 0;
}

