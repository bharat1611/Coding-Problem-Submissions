class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        vector<int> ans;
        
        int i = nums.size() - 1;
        int carry = 0, sum = 0;
        while(k || i >= 0 || carry)
        {
            sum = carry;
            if(k)
            {
                sum += k % 10;
                k /= 10;
            }
            if(i >= 0)
            {
                sum += nums[i];
                i--;
            }
            carry = sum / 10;
            sum = sum % 10;
            ans.push_back(sum);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};