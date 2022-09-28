class Solution {
public:
    string reversePrefix(string word, char ch) {
        string temp = "";
        int n = word.size();
        int i = 0;
        for(i = 0 ; i < n; i++)
        {
            temp += word[i];
            if(word[i] == ch)
            {
                word.erase(0, i + 1);
                break;
            }
        }
        if(i == n)
            return word;
        reverse(temp.begin(), temp.end());
        return temp + word;
        
    }
};