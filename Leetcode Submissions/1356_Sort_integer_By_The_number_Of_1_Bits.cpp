class Solution {
public:
    int count(int x)
    {
        int c = 0;
        while(x > 0)
        {
            if(x&1 == 1)
                c++;
            x >>= 1;
        }
        return c;
    }
    
    static bool cmp(pair<int, int> &a, pair<int, int>&b)
    {
        if(a.first == b.first)
            return a.second < b.second;
        return a.first < b.first;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        vector<int>ans;
        vector<pair<int, int>> mp;
        for(int i = 0 ; i < arr.size(); i++)
        {
            int c = count(arr[i]);
            cout << c << endl;
            mp.push_back({c, arr[i]});
        }
        sort(mp.begin(), mp.end(), cmp);
        for(auto i : mp)
        {
            ans.push_back(i.second);
        }
        return ans;
        
    }
};