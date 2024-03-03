class Solution {
public:
    vector<int> ans;
    int diff = INT_MAX;
    void divisor(int num){
        for(int i = 2; i <= sqrt(num); i++){
            if(num%i == 0){
                int num1 = i;
                int num2 = num/i;
                if(num2 - num1 < diff){
                    ans.clear();
                    ans.push_back(num1);
                    ans.push_back(num2);
                    diff = num2 - num1;
                }
            }
        }
    }
    vector<int> closestDivisors(int num) {
        if(num == 1)
            return {1,2};
        divisor(num + 1);
        divisor(num + 2);
        return ans;
    }
};