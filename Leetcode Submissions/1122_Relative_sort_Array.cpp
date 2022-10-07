class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;
        
        for(int i = 0 ; i < arr1.size(); i++)
            mp1[arr1[i]]++;

        vector<int> ans, temp;
        for(int i = 0 ; i < arr2.size(); i++)
        {
            if(mp1.find(arr2[i]) != mp1.end())
            {
                while(mp1[arr2[i]])
                {
                    ans.push_back(arr2[i]);
                    mp1[arr2[i]]--;
                }
            }
        }
        for(auto i : mp1)
        {
            while(i.second != 0)
            {temp.push_back(i.first);
                i.second--;
            }
        }
        sort(temp.begin(), temp.end());
        ans.insert(ans.end(), temp.begin(), temp.end());
        return ans;
    }
};