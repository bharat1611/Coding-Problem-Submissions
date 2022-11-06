class Solution {
public:
    string largestGoodInteger(string num) {
        
        int n = num.length();
        string ans = "";
        for(int i = 0 ; i <= n - 3; i++)
        {
            string curr = "";
            if(num[i] == num[i + 1] and num[i + 1] == num[i + 2])
                curr = curr + num[i] + num[i + 1] + num[i + 2];
            ans = max(ans, curr);
        }
        return ans;
    }
};