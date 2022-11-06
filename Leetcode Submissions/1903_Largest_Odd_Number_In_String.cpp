class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        int num_check = num[n - 1] - '0';
        if(num_check % 2 != 0)
            return num;
        
        
        for(int i = n - 1; i >= 0; i--)
        {
            int n_ch = num[i] - '0';
            if(n_ch % 2 != 0)
            {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};