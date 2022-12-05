class Solution {
public:
    bool judgeSquareSum(int c) {
        unordered_map<int, int> mp;
        for(int i = 0; i <= sqrt(c); i++)
        {
            int d = i * i;
            mp[d]++;
        }
        for(auto i : mp)
        {
            if(mp.find(abs(c - i.first)) != mp.end())
                return true;
        }
        return false;
    }
};