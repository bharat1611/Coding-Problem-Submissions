class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        for(int i = 0; i < 32; i++)
        {
            if((x & 0x01) ^ (y & 0x01) == 1)
                count++;
            x >>= 1;
            y >>= 1;
        }
        return count;
    }
};