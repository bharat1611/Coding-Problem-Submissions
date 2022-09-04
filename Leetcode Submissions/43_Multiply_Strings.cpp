class Solution {
public:
    string multiply(string num1, string num2) {
        
        int len1 = num1.length(), len2 = num2.length();
        vector<int> v(len1 + len2 + 1, 0);
        int i_a = 0, i_b = 0;
        int sum = 0, carry = 0;
        
        for(int i = len1 - 1; i >= 0; i--)
        {
            int carry = 0;
            int n1 = num1[i] - '0';
            i_b = 0;                // index of the second number after every iteration
            for(int j = len2 - 1; j >= 0; j--)
            {
                int n2 = num2[j] - '0';
                int sum = n1*n2 + v[i_a + i_b] + carry;
                carry = sum / 10;
                v[i_a + i_b] = sum%10;
                i_b++;
            }
            if(carry > 0)           // if carry != 0 then add it to the final answer
                v[i_a + i_b] += carry;
            i_a++;                  // index of the second number
        }
        int i = v.size() - 1;
        // Ignoring zeroes from the right
        while(i >= 0 and v[i] == 0)
            i--;
        string ans = "";
        // if i = -1, that means answer is 0
        if(i == -1)
            return "0";
        while(i >= 0)
            ans += to_string(v[i--]);
        return ans;
    }
};