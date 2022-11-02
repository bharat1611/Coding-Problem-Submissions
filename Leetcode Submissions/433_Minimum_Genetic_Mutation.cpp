class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        if(start == end)
            return 0;
        else if(bank.size() == 0)
            return -1;
        unordered_set<string> st(bank.begin(), bank.end());
        // if end is not present in bank then return -1;
        if(st.count(end) == 0)
            return -1;
        // initial count = 1;
        int count = 1;
        // vector of all the possible mutations
        vector<char> mut_opt = {'A', 'C', 'G', 'T'};
        // Actual Iterative BFS
        queue<string> q;
        q.push(start);
        
        while(!q.empty())
        {
            int n = q.size();
            for(int j = 0 ; j < n; j++)
            {
                // extracting front of queue
                string s = q.front();
                q.pop();
                // exploring the current string
                for(int i = 0 ; i < s.size(); i++)
                {
                    // storing the original character 
                    char org = s[i];
                    // trying to mutate the current string with possibilities
                    for(int k = 0 ; k < mut_opt.size(); k++)
                    {
                        // if current character is not equal to thhe mutation
                        if(org != mut_opt[k])
                            s[i] = mut_opt[k];
                        // if after mutation the string is equal to end result
                        if(s == end)
                            return count;
                        // if not, then check if the string is present in the bank
                        if(st.count(s) > 0)
                        {
                            // push the current string and erase it, coz 1 string can be used only once
                            q.push(s);
                            st.erase(s);
                        }
                    }
                    // replacing the changed character by org character
                    s[i] = org;
                }
            }
            // increment count by each iteration
            count++;
        }
        // if not possible, return -1
        return -1;
        
    }
};