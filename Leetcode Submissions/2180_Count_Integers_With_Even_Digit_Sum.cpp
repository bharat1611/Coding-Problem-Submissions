class Solution {
public:
    int countEven(int num) {
        int count = 0;
        int sum = 0;
        
        for(int i = 1; i <= num; i++){
            int n = i;
            while(n > 0)
            {
                int d = n%10;
                sum += d;
                n /= 10;
            }
            if((sum % 2) == 0)
                count++;
            sum = 0;
        }
        return count;
    }
};