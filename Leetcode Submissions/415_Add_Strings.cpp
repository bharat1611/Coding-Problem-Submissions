class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        int len1 = num1.size() - 1, len2 = num2.size() - 1;
        int x = 0, carry = 0;
        string ans;

        while (len1 >= 0 or len2 >= 0)
        {
            int sum = 0;
            if (len1 >= 0)
                sum += num1[len1] - '0';

            if (len2 >= 0)
                sum += num2[len2] - '0';

            sum += carry;
            x = sum % 10;
            carry = sum / 10;
            ans += x + '0';
            len1--;
            len2--;
        }
        if (carry)
            ans += carry + '0';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};