class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<double, pair<int, int>>> pq;
        
        for(int i = 0 ; i < points.size(); i++)
        {
            double dist = pow(points[i][0], 2) + pow(points[i][1], 2);
            dist = sqrt(dist);
            pq.push({dist, {points[i][0], points[i][1]}});   
            
            if(pq.size() > k)
                pq.pop();
        }
        vector<vector<int>> v;
        while(!pq.empty())
        {
            v.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
        }
        return v;
        
    }
};