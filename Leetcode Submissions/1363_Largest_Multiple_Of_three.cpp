class Solution {
public:
    string make_string(vector<int> &digits){
        string ans = "";
        for(int i = 0 ; i < digits.size(); i++){
            ans += (digits[i] + '0');
        }
        return ans;
    }
    string largestMultipleOfThree(vector<int>& digits) {
//         if(digits.size() == 1){
//             if(digits[0]%3 == 0)
//                 return to_string(digits[0]);
//             else
//                 return "";
//         }
        
        int sum = 0;
        sort(digits.rbegin(), digits.rend());
        for(int i = 0; i < digits.size(); i++) sum += digits[i];
        
        if(sum == 0) return "0";
        if(sum % 3 == 0)
            return make_string(digits);
        
        unordered_map<int, vector<int>> mp;
        for(auto i: digits)
        {
            if(i%3 == 1) 
                mp[1].push_back(i);
            else if(i%3 == 2)
                mp[2].push_back(i);
            else  
                mp[0].push_back(i);
        }
        
        if(sum % 3 == 1){
            if(!mp[1].empty())
                mp[1].pop_back();
            else
            {
                mp[2].pop_back();
                mp[2].pop_back();
            }
        }
        else if(sum % 3 == 2){
            if(!mp[2].empty())
                mp[2].pop_back();
            else{
                mp[1].pop_back();
                mp[1].pop_back();
            }
        }
        
        string ans = "";
        for(int i = 0 ; i < 3; i++){
            for(auto i: mp[i]){
                ans += (i + '0');
            }
        }
        sort(ans.rbegin(), ans.rend());
        if(ans[0] == '0')
            return "0";
        // cout << sum;
        return ans;
    }
};