class Solution {
public:
    bool checkValidString(string s) {
        
        stack<int> openB;
        stack<int> ast;
        
        for(int i = 0 ; i < s.length(); i++){
            
            char ch = s[i];
            if(ch == '(')
                openB.push(i);
            else if(ch == '*')
                ast.push(i);
            else
            {
                if(!openB.empty())
                    openB.pop();
                else if(!ast.empty())
                    ast.pop();
                else
                    return false;
            }
        }
        while (!openB.empty() && !ast.empty()) {
            if (openB.top() > ast.top()) {
                return false; 
            }
            openB.pop();
            ast.pop();
        }
        return openB.empty();
    }
};