class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        stringstream ss(s);
        string word;
        while(ss >> word)
        {
            count++;
        }
        return count;
    }
};