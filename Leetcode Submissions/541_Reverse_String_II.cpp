class Solution {
public:
    string reverseStr(string s, int k) {
        int N = s.length();
        int left{0}, right{k};
        
        if(right >=  N)
            reverse(s.begin(), s.end());
        
        while(right < N){
            reverse(s.begin() + left, s.begin() + right);
            right += 2 * k;
            left = right - k;
            
            if(right >= N)
                reverse(s.begin() + left, s.end());
        }     
        
        return s;
    }
};