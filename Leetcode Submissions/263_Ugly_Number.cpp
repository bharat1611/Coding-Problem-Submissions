class Solution {
public:

    bool isUgly(int n) {
        if(n < 1)
            return false;
        while(n > 1)
        {
            int org = n;
            if(n % 2 == 0)
                n = n/2;
            else if(n % 3 == 0)
                n = n/3;
            else if(n % 5 == 0)
                n = n/5;
            
            if(org == n)
                return false;
        }
        return true;
        
    }
};