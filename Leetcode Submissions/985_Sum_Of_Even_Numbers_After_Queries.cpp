class Solution{
public:
    vector<int> sumEvenAfterQueries(vector<int> &nums, vector<vector<int>> &queries){
        int initial_sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
                initial_sum += nums[i];
        }
        vector<int> res;
        for (int i = 0; i < queries.size(); i++)
        {
            int value = queries[i][0];
            int index = queries[i][1];
            if (nums[index] % 2 == 0)
                initial_sum -= nums[index];
            
            nums[index] += value;
            
            if (nums[index] % 2 == 0)
                initial_sum += nums[index];
            
            res.push_back(initial_sum);
        }
        return res;
    }
};