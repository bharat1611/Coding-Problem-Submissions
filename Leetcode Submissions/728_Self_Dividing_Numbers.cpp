class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        bool flag = true;
        vector<int> ans;
        for(int i = left; i <= right; i++)
        {
            string s = to_string(i);
            flag = true;
            for(int j = 0 ; j < s.length(); j++)
            {
                int curr = s[j] - '0';
                cout << curr << " ";
                if(curr == 0 or i % curr != 0)
                {
                    flag = false;                    
                }
            }
            if(flag == true)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};