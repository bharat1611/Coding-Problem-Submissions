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

class Solution {
public:
    void backtrack(string tiles, int level, int &count)
    {
        count++;
        for(int i = level; i < tiles.size(); i++)
        {
            // to avoid repeating characters
            if(i != level and tiles[i] == tiles[level])
                continue;
            swap(tiles[i], tiles[level]);
            backtrack(tiles, level + 1, count);
        }
    }
    int numTilePossibilities(string tiles) {
        int count = -1;
        sort(tiles.begin(), tiles.end());
        backtrack(tiles, 0, count);
        return count;
    }
};