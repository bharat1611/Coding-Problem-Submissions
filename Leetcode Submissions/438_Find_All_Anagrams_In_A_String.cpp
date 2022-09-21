// class Solution {
// public:
//     vector<int> findAnagrams(string s, string p) {
//         if(p.length() > s.length())
//             return {};
//         vector<int> ans;
//         sort(p.begin(), p.end());
//         int gap = p.length();
//         for(int i = 0 ; i < s.length() - gap + 1; i++)
//         {
//             string str = "";
//             for(int j = i ; j < i + gap; j++)
//                 str += s[j];

//             cout << str << " " << endl;
//             sort(str.begin(), str.end());

//             if(str == p)
//                 ans.push_back(i);
//         }
//         return ans;
//     }
// };
class Solution{
public:
    vector<int> findAnagrams(string s, string p){
        vector<int> ans;
        int start = 0, end = 0;
        vector<int> freq1(26, 0),freq2(26, 0);

        for (auto it : p)
            freq1[it - 'a']++;
        
        while (end < s.size())
        {
            freq2[s[end] - 'a']++;

            if (end - start + 1 == p.size())
            {
                if (freq1 == freq2)
                    ans.push_back(start);
            }
            if (end - start + 1 < p.size())
                end++;
            
            else
            {
                freq2[s[start] - 'a']--;
                start++;
                end++;
            }
        }
        return ans;
    }
};