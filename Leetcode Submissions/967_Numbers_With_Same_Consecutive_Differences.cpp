class Solution {
public:
    vector<int> ans;
    void calcNumbers(int curr_num, int no_of_digits, int k)
    {
        string s = to_string(curr_num);
        if(s.length() == no_of_digits)
        {
            ans.push_back(curr_num);
            return;
        }
        for(int i = 0 ; i < 10;i++)
        {
            int last = curr_num % 10;   
            if(abs(last - i) == k)  
                calcNumbers((curr_num*10) + i, no_of_digits, k);
        }
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i = 1; i < 10; i++)
        {
            calcNumbers(i, n,k);
        }
        return ans; 
    }
};