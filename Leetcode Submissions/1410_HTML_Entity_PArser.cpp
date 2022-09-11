class Solution
{
public:
    string ans = "";
    string entityParser(string text)
    {

        for (int i = 0; i < text.size(); ++i)
        {
            if ((i + 1 < text.size() and text[i] == '&' and text[i + 1] == '&') || (text[i] != '&'))
            {
                ans.push_back(text[i]);
                continue;
            }
            int j = i;
            while (j < text.size() and text[j] != ';')
                ++j;
            int len = j - i - 1;
            string s = text.substr(i + 1, len);
            if (s == "quot")
            {
                char ch = '\"';
                ans.push_back(ch);
                i += 5;
            }
            else if (s == "apos")
            {
                char ch = '\'';
                ans.push_back(ch);
                i += 5;
            }
            else if (s == "amp")
            {
                ans.push_back('&');
                i += 4;
            }
            else if (s == "gt")
            {
                ans.push_back('>');
                i += 3;
            }
            else if (s == "lt")
            {
                ans.push_back('<');
                i += 3;
            }
            else if (s == "frasl")
            {
                ans.push_back('/');
                i += 6;
            }
            else
            {
                ans.push_back('&');
                ans += s;
                if (j != text.size())
                    ans.push_back(';');
                i += s.size() + 1;
            }
        }
        return ans;
    }
};