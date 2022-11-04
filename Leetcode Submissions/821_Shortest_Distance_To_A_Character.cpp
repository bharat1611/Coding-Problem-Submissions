class Solution{
public:
    vector<int> shortestToChar(string s, char c)
    {
        int n = s.length();
        vector<int> v(n, INT_MAX);
        for(int i = 0 ; i < n; i++)
        {
            if(s[i] == c)
                v[i] = 0;
        }
        int count = 100000;
        for(int i = 0 ; i < n; i++)
        {
            if(s[i] != c)
            {
                count++;
                v[i] = min(v[i], count);
            }
            else
                count = 0;
        }
        count = 1000000;
        for(int i = n - 1; i >= 0; i--)
        {
            if(s[i] != c){
                count++;
                v[i] = min(v[i], count);
            }
            else
                count = 0;
        }
        return v;
    }
};