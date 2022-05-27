class Solution {
public:
    int countOperations(int num1, int num2) {
        int count = 0;
        if(num1 == 0 || num2 == 0)
            return 0;
        while(1)
        {
            if(num1 >= num2)
                num1 = num1 - num2;
            else
                num2 = num2 - num1;
            count++;
            if(num1 <= 0 || num2 <= 0)
                break;
        }
        return count;
    }
};