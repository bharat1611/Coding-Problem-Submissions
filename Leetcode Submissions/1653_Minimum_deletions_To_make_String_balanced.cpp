class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        vector<int> countA(n, 0);
        if(s[n - 1] == 'a')
            countA[n - 1] = 1;
        else
            countA[n - 1] = 0;
        int c = countA[n - 1];
        for(int i = n - 2; i >= 0 ; i--)
        {
            if(s[i] == 'a')
            {
                c++;
                countA[i] = c;
            }
            else 
                countA[i] = c;
        }
        int bCount = 0, res =INT_MAX;
        for(int i = 0 ;i < n ; i++)
        {
            if(s[i] == 'b')
            {
                res = min(res, countA[i] + bCount);
                bCount++;
            }
        }
        res = min(res, bCount);
        return res == INT_MAX ? 0 : res;
    }
};