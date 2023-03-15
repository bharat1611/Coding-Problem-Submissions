class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
        if(s.length() != goal.length())
            return false;
        
        if(s == goal)
        {
            unordered_map<char, int> mp;
            for(int i = 0 ; i < s.size(); i++){
                mp[s[i]]++;
                if(mp[s[i]] > 1)
                    return true;
            }
            return false;
        }
        
        int first_diff_idx = -1, second_diff_idx = -1;
        
        for (int i = 0; i < s.size(); i++) 
        {
            if (s[i] != goal[i]) {
                
                if (first_diff_idx == -1)
                    first_diff_idx = i;
                else if (second_diff_idx == -1)
                    second_diff_idx = i;
                else 
                    return false;
                
            }
        }

        if(second_diff_idx != -1 and s[first_diff_idx] == goal[second_diff_idx] and s[second_diff_idx] == goal[first_diff_idx])
            return true;
        return false;
        
    }
};