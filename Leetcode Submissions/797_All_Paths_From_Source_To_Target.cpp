class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<int> &path, vector<vector<int>> &graph, int node, int &end)
    {
        // If end has been reached
        if(node == end - 1)
        {
            ans.push_back(path);
            return;
        }
        for(auto i : graph[node])
        {
            path.push_back(i);
            // traverse for rest of the values at ith index
            dfs(path, graph, i, end);
            path.pop_back();        // backtrack
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();       // target 
        vector<int> path = {0};     // to store all the paths
        dfs(path, graph, 0, n);
        return ans;
    }
};