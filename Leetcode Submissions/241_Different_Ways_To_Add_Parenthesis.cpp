class Solution {
public:
    int operate(int x, int y, char c)
    {
        if(c == '+')
            return x + y;
        if(c == '-')
            return x - y;
        return x*y;
    }
    vector<int> diffWaysToCompute(string exp) {
        
        vector<int> res;
        bool isNum = true;
        for(int i = 0 ; i < exp.size(); i++)
        {
            char c = exp[i];
            if(isdigit(c) == false)
            {
                isNum = false;
                vector<int> left = diffWaysToCompute(exp.substr(0, i));
                vector<int> right = diffWaysToCompute(exp.substr(i + 1, exp.length()));
                
                for(int x : left){
                    for(int y : right)
                    {
                        int ans = operate(x, y, exp[i]);
                        res.push_back(ans);
                    }
                }           
            }
        }
        if(isNum == true)
            res.push_back(stoi(exp));
        return res;
    }
};