class Solution {
public:
    int findComplement(int num) {
        int ans = 0;
        int i = 0;
        int bit = 0;
        while(num)
        {
            bit = num&1;
            if(bit == 0)
                ans += 1 << i;
            if(bit == 1)
                ans += 0 << i;
            i++;
            num >>= 1;
        }
        return ans;
    }
};