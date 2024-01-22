class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        int n = special.size();
        int k = 0;
        sort(special.begin(), special.end());
        int ans = special[0] - bottom;
        for(int i = 1; i < special.size(); i++)
        {
            ans = max(ans, special[i] - special[i - 1] - 1);
        }
        ans = max(ans, top - special[n - 1]);
        return ans;
    }
};