class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        for(int i = 0 ; i < n; i++)
        {
            char e = s[n - 1];
            s.erase(s.begin() + (n - 1));
            s.insert(s.begin(), e);
            cout << s << endl;
            if(s == goal)
                return true;
        }
        return false;
    }
};