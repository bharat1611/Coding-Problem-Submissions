class Solution {
public:
    bool isPossible(vector<int>& nums) {
        vector<int> count (2001, 0);
        
        for(int i : nums)
            count[i + 1000]++;
        
        for(int i = 0; i < 1999; i++)
        {
            if(count[i] == 0) 
                continue;
            while(count[i])
            {
                int c = 0;
                while(count[i + c] <= count[i + c + 1])
                {
                    count[i + c]--;
                    c++;
                }

                count[i + c]--;
                c++;
                if(c < 3)
                    return false;
            }
        }
        if(count[1999] || count[2000])
            return false;
    
    return true;
    }
    
};
