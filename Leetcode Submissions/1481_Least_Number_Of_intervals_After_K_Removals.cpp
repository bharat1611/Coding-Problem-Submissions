class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        
        for(int i = 0 ; i < arr.size(); i++){
            mp[arr[i]]++;
        }
        
        vector<int> freq;
        for(auto i : mp){
            freq.push_back(i.second);
        }
        sort(freq.begin(), freq.end());
        int elementsRemoved = 0;
        for(int i = 0 ; i < freq.size(); i++){
            elementsRemoved += freq[i];
            if(elementsRemoved > k){
                return freq.size() - i;
            }
        }
        return 0;
    }
};