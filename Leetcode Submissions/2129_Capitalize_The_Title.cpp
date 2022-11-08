class Solution {
public:
    string capitalizeTitle(string title) {
        
        stringstream s(title);
        string str = "";
        string ans = "";
        
        while(s >> str)
        {
            if(str.length() <= 2)
                std::transform(str.begin(), str.end(),str.begin(), ::tolower);
            else
            {
                std::transform(str.begin(), str.end(),str.begin(), ::tolower);
                str[0] = toupper(str[0]);
            }
            ans = ans + str + " ";
        }
        ans.pop_back();
        return ans;
    }
};