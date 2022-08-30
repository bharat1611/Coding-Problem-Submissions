class Solution {
public:
    static bool comp(char a, char b){
        return a < b;
    }
    
    int minimumSum(int num) {
        string s = to_string(num);
        
        sort(s.begin(), s.end(), comp);
        string num1 = "", num2 = "";
        num1 = num1 + s[0] + s[2];
        num2 = num2 + s[1] + s[3];
        
        cout << s ;
        return stoi(num1)+stoi(num2);
    }
};