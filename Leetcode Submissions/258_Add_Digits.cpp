class Solution {
public:
    int calc(int x)
    {
        int r = 0, sum = 0;
        while(x > 0)
        {
            r = x % 10;
            sum = sum + r;
            x = x/10;
        }
        if(sum > 9)
            return calc(sum);
        return sum;
    }
    int addDigits(int num) {
        return calc(num);
    }
};