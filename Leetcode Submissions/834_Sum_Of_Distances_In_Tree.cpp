class Solution {
public:
    vector<vector<int>> v;
    vector<int> res, counter;
    void dfs(int i, int p){
        for(auto u: v[i]){
            if(u==p){
                continue;
            }
            dfs(u, i);
            counter[i]=counter[i]+counter[u];
            res[i]=res[i]+res[u]+counter[u];
        }
        counter[i]++;
    }
    void dfs2(int i, int n, int p){
        for(auto u: v[i]){
            if(u==p){
                continue;
            }
            res[u]=res[i]-counter[u]+n-counter[u];
            dfs2(u, n, i);
        }
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        v.resize(n);
        for(int i=0; i<n-1; i++){
            int a=edges[i][0];
            int b=edges[i][1];
            v[a].push_back(b);
            v[b].push_back(a);
        }
        res.resize(n);
        counter.resize(n);
        dfs(0, -1);
        dfs2(0, n, -1);
        return res;
    }
};