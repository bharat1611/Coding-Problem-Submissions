class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowers, int n) {
        
        int len = flowers.size();
        
        for(int i = 0 ; i < len; i++)
        {
            if(flowers[i] == 1 or ((i - 1) >= 0 and flowers[i - 1] == 1) or ((i + 1) < len and flowers[i + 1] == 1))
                continue;
            flowers[i] = 1;
            n--;
            
        }
        return n <= 0;
    }
};