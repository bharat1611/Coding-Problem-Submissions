#include <iostream>
using namespace std;


int find(int u,int *parent)
{ 
    if(parent[u]<0)return u;
    return find(parent[u],parent);
}

void unionByWeight(int u, int v, int *parent)
{
    int pu = find(u,parent),pv=find(v,parent);
    if(pu!=pv)
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

int main()
{
    int *parent = new int(4);
    parent[0] = -3;
    parent[1] = 0;
    parent[2] = -2;
    parent[3] = 2;
    unionByWeight(0, 2, parent);
     cout << find(3, parent) << endl;
    for(int i = 0; i < 4; i++)
          cout << parent[i] << " ,  ";
}