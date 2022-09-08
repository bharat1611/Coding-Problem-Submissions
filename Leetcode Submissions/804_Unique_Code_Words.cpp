class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[27] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        map<string, int> mp;
        for(int i = 0; i < words.size(); i++)
        {
            string s = "";
            for(int j = 0 ; j < words[i].size(); j++)
            {
                s += arr[words[i][j] - 'a'];
            }
            mp[s]++;
        }
        return mp.size();
    }
};