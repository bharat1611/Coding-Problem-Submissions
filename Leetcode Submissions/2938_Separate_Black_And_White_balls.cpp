class Solution {
public:
    long long minimumSteps(string s) {
        long long count = 0;
        long long ans = 0;
        
        for(int i = s.length() - 1; i >= 0; i--)
        {
            if(s[i] == '0')
                count++;
            if(s[i] == '1'){
                ans += count;
                // count = 0;
            }
        }
        return ans;
    }
};