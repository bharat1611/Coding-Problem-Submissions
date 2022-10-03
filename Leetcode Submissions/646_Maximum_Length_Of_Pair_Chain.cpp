class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b)
    {
        return a[1] < b[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), comp);
        int n = pairs.size();
        int len = 1;
        int j = 0;
        for(int i = 1 ; i < n;  i++)
        {
            if(pairs[i][0] > pairs[j][1]){
                j = i;
                len++;
            }
        }
        return len;
    }
};