class Solution {
public:
    vector<vector<int>> ans;
    // set<vector<int>> st;
    void helper(vector<int> &candidates, vector<int> curr, int target, int sum, int index, int n)
    {
        if(index >= n or sum > target)
            return;
        if(sum == target){
            ans.push_back(curr);
            return;
        }
        curr.push_back(candidates[index]);
        helper(candidates, curr,target, sum + candidates[index], index, n);
        curr.pop_back();
        helper(candidates, curr, target, sum, index + 1, n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sum = 0;
        helper(candidates, {}, target, sum, 0, candidates.size());
        // for(auto i : st){
        //     ans.push_back(i);
        // }
        return ans;
    }
};