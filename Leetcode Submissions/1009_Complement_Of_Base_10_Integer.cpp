
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0)
            return 1;
        int bit = 0, ans = 0;
        int i = 0;
        while(n)
        {
            bit = n&1;
            if(bit == 0)
                ans += 1 << i;
            if(bit == 1)
                ans += 0 << i;
            i++;
            n >>= 1;
        }
        return ans;
    }
};