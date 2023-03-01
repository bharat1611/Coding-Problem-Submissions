class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        vector<int> freq(sentences.size(), 1);
        for(int i = 0 ; i < sentences.size(); i++)
        {
            int count = 0;
            int j = 0;
            int s = sentences[i].size();
            while(j < s)
            {
                if(sentences[i][j] == ' ')
                    count++;
                j++;
            }
            freq[i] += count;
        }
        return *max_element(freq.begin(), freq.end());
    }
};

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int spaces = 0, ans = 0;
        for(int i = 0 ; i < sentences.size(); i++)
        {
            spaces = count(sentences[i].begin(), sentences[i].end(), ' ');
            ans = max(ans, spaces);
        }
        return ans + 1;
    }
};