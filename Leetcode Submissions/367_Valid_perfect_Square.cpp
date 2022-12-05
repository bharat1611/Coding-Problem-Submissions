class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num >= INT_MAX)
            return false;
        for(int i = 1; i * i <= num; i++)
        {
            if(num % i == 0 and (num /i) == i)
                return true;
        }
        return false;
    }
};