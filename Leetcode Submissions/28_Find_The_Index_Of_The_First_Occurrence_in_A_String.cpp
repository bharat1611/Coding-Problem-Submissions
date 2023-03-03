class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = -1;
        bool flag = false;
        for(int i = 0 ; i < haystack.size(); i++)
        {
            if(haystack[i] == needle[0])
            {
                int org = i, j = 0, k = i;
                while(k < haystack.size() and j < needle.size() and haystack[k] == needle[j])
                {
                    k++;
                    j++;
                }
                if(j == needle.size() and flag == false)
                {
                    ans = org;
                    flag = true;
                }
            }
        }
        return ans;
    }
};