class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        if (colors.empty()) 
            return 0;
        int n = neededTime.size();
        char prev = colors[0];
        int result = 0;
        for (int i = 1; i < n; i++) {
            if (colors[i] == prev) 
            {
                int curr = min(neededTime[i], neededTime[i - 1]);
                result += curr;
                neededTime[i] = max(neededTime[i], neededTime[i - 1]);
            }
            else 
                prev = colors[i];
        }
        return result;
    }
};