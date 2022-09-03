class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans(queries.size(), 0);
        int count = 0;
        for(int i = 0 ; i < queries.size();i++)
        {
            for(int j = 0 ; j < points.size(); j++)
            {
                double dist = sqrt(pow((queries[i][0] - points[j][0]), 2) + pow((queries[i][1] - points[j][1]), 2));
                if(dist <= queries[i][2])
                    count++;
            }
            ans[i] = count;
            count = 0;
        }
        return ans;
    }
};