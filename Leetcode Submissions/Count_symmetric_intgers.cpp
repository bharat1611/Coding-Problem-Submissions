class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        
        int count = 0;
        for(int i = low; i <= high; i++)
        {
            string s = to_string(i);
            if(s.length() % 2 != 0)
                continue;
 
            int l = 0, p = s.length() - 1;
            int num1 = 0, num2 = 0;
            while(l < p)
            {
                num1 += s[l] - '0';
                num2 += s[p] - '0';
                l++, p--;
            }
            if(num1 == num2)
                count++;
        }
        return count;
        
    }
};