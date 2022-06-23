class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        string temp = s;
        sort(temp.rbegin(), temp.rend());
        
        for(int i = 0 ; i < s.length(); i++)
        {
            int res = -1, index = 0;
            if(s[i] != temp[i])
            {
                for(int j = i + 1; j < s.length();j++)
                {
                    if(res <= s[j] - '0')
                    {
                        res = s[j] - '0';
                        index = j;
                    }
                }
                swap(s[i], s[index]);
                break;
            }
        }
        int n = stoi(s);
        return n;
    }
};