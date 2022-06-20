#include <iostream>
#include <list>
using namespace std;

int main()
{
    int V;
    int *v = new int[V];
    cin >> V;
    for (int i = 0; i < V + 5; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < V + 2; i++)
    {
        cout << v[i] << " ";
    }
}