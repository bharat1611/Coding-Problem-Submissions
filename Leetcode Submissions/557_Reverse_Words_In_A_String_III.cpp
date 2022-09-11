class Solution
{
    public:
        string reverseWords(string s)
        {
            int tmp = 0; 
            int n = s.length();   
            for (int i = 0; i <= n; i++)
            {
                if (s[i] == ' ' || i == n)
                {
                    int start = tmp;
                    int end = i - 1; 
                    while (start < end)
                    {
                        swap(s[start], s[end]);
                        start++;
                        end--;
                    }

                    tmp = i + 1;
                }
            }
            return s;
        }
};