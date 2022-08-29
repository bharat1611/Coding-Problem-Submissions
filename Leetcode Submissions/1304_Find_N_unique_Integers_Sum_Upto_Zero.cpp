
class Solution {
public:
    vector<int> sumZero(int n) {
        
        if(n % 2 == 0)
        {
            vector<int> even;
            int i = 0;
            
            for(i = -1*(n / 2); i <= n/2; i++)
            {
                if(i != 0)
                    even.push_back(i);
            }
            return even;
        }
        
        vector<int> odd;
        int i = 0;
        for(i = -1*(n/2); i < n/2 + 1; i++)
         {
              odd.push_back(i);
         }
        return odd;
    }
};