class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.insert(intervals.begin(), {newInterval[0], newInterval[1]});
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        int j = 0;
        vector<vector<int>> result;
        result.push_back(intervals[0]);
        for(int i = 1; i < n; i++)
        {
            if(result[j][1] >= intervals[i][0])
                result[j][1] = max(result[j][1], intervals[i][1]);
            else
            {
                j++;
                result.push_back(intervals[i]);   
            }
        }
        return result;
    }
};