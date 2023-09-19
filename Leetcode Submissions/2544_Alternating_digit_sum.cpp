class Solution {
public:
    int alternateDigitSum(int n) {
        
        string s = to_string(n);
        reverse(s.begin(), s.end());
        n = stoi(s);
        int sum = 0;
        bool flag = true;
        while(n > 0)
        {
            int d = n%10;
            if(flag == true)
                sum += d;
            else
                sum = sum - d;
            n /= 10;
            flag = !flag;
        }
        return sum;
        
    }
};