class Solution {
public:
    int numTilePossibilities(string tiles) {
        vector<int> freq(26, 0);
        for(char c : tiles)
        {
            freq[c - 'A']++;
        }
        int ans = dfs(freq);
        return ans;
    }
    
    int dfs(vector<int> &freq)
    {
        int sum = 0;
        for(int i = 0 ; i < 26; i++)
        {
            if(freq[i] == 0)
                continue;
            freq[i]--;
            sum++;
            sum += dfs(freq);
            freq[i]++;
        }
        return sum;
    }
};