// class Solution {
// public:
//     int countSegments(string s) {
//         int count = 0;
//         stringstream ss(s);
//         string word;
//         while(ss >> word)
//         {
//             count++;
//         }
//         return count;
//     }
// };

class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] != ' ')
            {
                cout << i << " " ;
                while(i < s.length() and s[i] != ' ')
                    i++;
                count++;
            }
            
        }
        return count;
    }
};