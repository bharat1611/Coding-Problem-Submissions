class Solution {
public:
    static bool compare(string a, string b)
    {
        return a + b > b + a;
    }
    
    string largestNumber(vector<int>& nums) 
    {
        vector<string> s(nums.size(), " ");
        for(int i = 0; i < nums.size(); i++)
        {
            s[i] = to_string(nums[i]);
        }
        
        sort(s.begin(), s.end(), compare);
        string str = "";
        for(auto i: s){
            str = str + i;
        }
        if(str.size() > 1 && str[0] == '0')
            return "0";
        
        return str;
    }
};