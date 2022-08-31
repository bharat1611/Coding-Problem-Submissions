class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) { 
        map<string, int> mp;
        for(int i = 0 ; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        int count= 0;
        for(int i = 0 ; i < arr.size(); i++)
        {
            if(mp[arr[i]] == 1)
                count++;
            if(k == count)
                return arr[i];
        }
        return "";
    }
};