class Solution {
public:
    set<int> st;
    void primeFactors(int n)
    {
        while(n%2 == 0){
            st.insert(2);
            n/=2;
        }
        for(int i = 3; i <= sqrt(n); i = i + 2){
            
            while(n%i == 0)
            {
                n /= i;
                st.insert(i);
            }
        }
        if(n > 2)
            st.insert(n);   
    }
    int distinctPrimeFactors(vector<int>& nums) {
        
        for(int i = 0 ; i < nums.size(); i++){
            primeFactors(nums[i]);
        }
        return st.size();
    }
};