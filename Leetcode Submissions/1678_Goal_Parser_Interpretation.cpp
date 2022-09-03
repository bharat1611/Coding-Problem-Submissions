class Solution {
public:
    string interpret(string command) {

        string ans = "";
        for(int i = 0 ; i < command.length(); i++)
        {
            if(command[i] == 'G')
            {
                ans += 'G';
            }
            else if(command[i] == '(' and command[i + 1] == ')')
            {
                ans += 'o';
                i++;
            }
            else if(command[i] == '(' and command[i + 1] == 'a')
            {
                ans += "al";
                i++;
                i++;
            }
        }
        return ans;
    }
};