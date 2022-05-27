class Solution {
public:
    int minMoves(int target, int maxDoubles) 
    {
        if(maxDoubles == 0)    // if maxDoubles is 0 then we cannot multiply by 2
            return target - 1;
        if(target == 1)        // if target is already given 1
            return 0;
        int n = target;         // starting from target 
        int count = 0;
        while(maxDoubles > 0 && n >= 1)
        {
            if(n % 2 == 0)       // if n is divisible b 2, then divide 
            {
                n = n / 2;
                maxDoubles--;      // decrement maxDoubles as we have used one 2 to divide
            }
            else
                n = n - 1;          // if not divisible then decrement n 
            count++;                // increment count by 1 each time to count number of steps
            if(n == 1)              // if n is 1 then return
                return count;
        }
        if(n > 1)      // if n != 1 and maxDoubles is 0, then no choice but to decrement 1 (n-1) times
            count+= n - 1;
        return count;
    }
};