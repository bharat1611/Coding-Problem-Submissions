class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<int, int> mp;
        for(int i= 0 ; i < s.length(); i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        int count = 0;
        for(auto i : mp){
            count += max(0, i.second);
            }
        return count;
    }
};