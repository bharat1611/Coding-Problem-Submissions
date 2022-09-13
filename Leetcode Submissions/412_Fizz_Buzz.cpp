class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> str(n + 1);
        
        for(int i = 1; i <= n; i++)
        {
            if(i % 3 == 0 and i % 5 == 0)
                str[i] = "FizzBuzz";
            else if(i % 3 == 0)
                str[i] = "Fizz";
            else if(i % 5 == 0)
                str[i] = "Buzz";
            else
                str[i] = to_string(i);
        }
        str.erase(str.begin() + 0);
        return str;
    }
};