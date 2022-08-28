
class Solution {
public:
    bool checkZeroOnes(string s) {
        
        int zero_max = 0, one_max = 0;
        int zero = 0, one = 0;
        
        for(int i = 0 ;i < s.length(); i++)
        {
            if(s[i] == '0'){
                zero++;
                one = 0;
            }
            if(s[i] == '1'){
                one++;
                zero = 0;
            }
            zero_max = max(zero_max, zero);
            one_max = max(one_max, one);
        }
        if(one_max > zero_max)
            return true;
        return false;
        
    }
};