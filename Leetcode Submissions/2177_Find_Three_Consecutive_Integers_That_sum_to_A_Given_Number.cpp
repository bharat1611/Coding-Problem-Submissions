class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        if((long long)num%3 != 0)
            return {};
        
        return {((long long)num/3) - 1, ((long long)num/3) , ((long long)num/3) + 1};
        
    }
};