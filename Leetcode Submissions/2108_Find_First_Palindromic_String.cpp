class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(int i = 0 ; i < words.size(); i++)
        {
            string rev = words[i];
            reverse(rev.begin(), rev.end());
            if(rev == words[i])
                return words[i];
        }
        return "";
    }
};