class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        for(int i = 1 ; i < words.size(); i++)
        {
            string curr = words[i];
            sort(curr.begin(), curr.end());
            string prev = words[i - 1];
            sort(prev.begin(), prev.end());
            if(prev == curr){
                words.erase(words.begin() + i);
                i--;
            }
        }
        return words;
    }
};