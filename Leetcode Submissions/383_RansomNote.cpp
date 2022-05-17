class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int i = 0, j = 0, count = 0;
        unordered_map<char, int> m;
        for(int i = 0 ; i < magazine.length(); i++)
            m[magazine[i]]++;
        
        while(j < ransomNote.length())
        {
            if(m.find(ransomNote[j]) != m.end() && m[ransomNote[j]] != 0)
            {
                count++;
                m[ransomNote[j]]--;
            }  
            j++;
        }
        if(count == ransomNote.length())
            return true;
        return false;
    }
};