class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size() % 2 == 1)      // if array size is odd, cant be possible
            return {};
        
        sort(changed.begin(), changed.end());       //sort array in ascending order
        unordered_map<int, int> mp;         // using hashmap to store the values
        for(auto i : changed)
            mp[i]++;
        vector<int> ans;
        for(int i = 0 ; i < changed.size(); i++)
        {
            if(mp[changed[i]])          // if mp[changed] exists
            {
                mp[changed[i]]--;       // remove it from map
                ans.push_back(changed[i]);  // push it to the ans vector
                
                if(mp[changed[i] * 2])        // if changed[i] has a double value
                    mp[changed[i] * 2]--;       // remove it from the map
                else
                    return {};              // other wise return false
            }
        }
        return ans;         // return final ans 
    }
};