class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if(n == 2)  return min(cost[0], cost[1]);
        if(n == 3)
            return min(cost[0] + cost[2], cost[1]);
        vector<int>v(n);
        v[0] = cost[0];
        v[1] = cost[1];
        v[2] = min(cost[1], cost[0]) + cost[2];
        for(int i = 3 ; i < n; i++)
        {
            v[i] = min(v[i - 1], v[i - 2]) + cost[i];
        }
        return min(v[n - 1], v[n - 2]);
    }
};