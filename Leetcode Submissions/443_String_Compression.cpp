class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int count = 1;
        string str = "";
        for(int i = 0 ; i < n - 1; i++)
        {
            if(chars[i] == chars[i + 1])
                count++;
            else
            {
                str += chars[i];
                if(count != 1)
                    str += to_string(count);
                count = 1;
            }
        }
        str += chars[n - 1];
        if(count != 1)
            str += to_string(count);
        chars.clear();
        for(int i = 0 ; i < str.length();i++)
        {
            chars.push_back(str[i]);
        }
        return str.length();
    }
};