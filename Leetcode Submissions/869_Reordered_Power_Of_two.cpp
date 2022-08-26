class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        string s = to_string(n);
        sort(s.begin(), s.end());
        
        vector<string> powers;
        
        for(int i = 0; i <= 30; i++){
            int x = pow(2, i);
            powers.push_back(to_string(x));
        }
        
        // for(auto i : powers)
        //     cout << i << " ";
        // cout << endl;
        
        for(int i = 0;i <= 30; i++)
        {
            sort(powers[i].begin(),powers[i].end());
        }
        // for(auto i : powers)
        //     cout << i << " ";
        
        for(int i = 0 ; i <= 30; i++){
            if(powers[i] == s)
                return true;
        }
        
        cout << s << endl;
        return false;
        
    }
};