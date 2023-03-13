class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int ans = 0;
        for(int i = 0 ; i < sequence.length(); i++)
        {
            int count = 0, k = 0;
            for(int j = i ; j < sequence.length(); j++)
            {
                if(word[k] == sequence[j])
                    k++;
                else
                    break;
                if(k == word.length())
                {
                    k = 0;
                    count++;
                }
            }
            ans = max(ans, count);
        }
        return ans;
    }
};