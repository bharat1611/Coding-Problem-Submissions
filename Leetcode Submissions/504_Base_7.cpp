class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0)
            return "0";
        string ans = "";
        bool flag = false;
        if(num < 0){
            flag = true;
            num *= -1;
        }
        int carry = 0;
        while(num)
        {
            carry = num%7;
            ans += to_string(carry);
            num/= 7;
        }
        reverse(ans.begin(), ans.end());
        return flag == true ? "-" + ans : ans;
    }
};