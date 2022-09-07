class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        auto vec = arr;
        sort(vec.begin(), vec.end());
        unordered_map<int, int>mp;
        int rank = 1;
        for(int num : vec)
        {
            if(mp[num])
                continue;
            mp[num] = rank;      
            rank++;
        }
        for(int i = 0; i < arr.size(); i++){
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};