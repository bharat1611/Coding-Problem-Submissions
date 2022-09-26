class Solution {
public:
    vector<char>parent;
    char rootfind(char x)
    {
        return parent[x] == x ? x : rootfind(parent[x]);
    }
    bool equationsPossible(vector<string>& equations) 
    {    
        parent.resize(26, 0);
        for (int i = 0; i < 26; i++)
            parent[i] = i;
        for (int i = 0 ; i < equations.size(); i++)
        {
            if (equations[i][1] == '=') 
            {
                char x = rootfind(equations[i][0] -'a');
                char y = rootfind(equations[i][3] -'a');
                if (x != y)
                    parent[y] = x;
            }
        }
        for (int i = 0 ; i < equations.size(); i++)
        {
            if (equations[i][1] == '!') 
            {
                int x = rootfind(equations[i][0] - 'a');
                int y = rootfind(equations[i][3] - 'a');
                if (x == y)
                    return false;
            }
        }
        return true;
    }
};