class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> check;
        for(auto i : nums)
            check.insert(i);
        for(int i = 1; i < nums.size() + 1; i++)
        {
            if(check.count(i) == 0)
                return i;
        }
        return nums.size() + 1;
    }
};