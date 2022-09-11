class Solution {
public:
    #define ll long long
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        ll ans = 0;
        vector<pair<ll, ll>> v;
        
        for(int i = 0 ; i < speed.size(); i++)
        {
            v.push_back({efficiency[i], speed[i]});
        }
        // sorting and then reversing vector to sort it in descending order
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        ll curr_speed = 0;
        // making a min heap to store speeds in increasing order
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        
        for(ll i = 0 ; i < n ; i++)
        {
            // keeping track of minimm efficiency
            ll min_ef = v[i].first;
            // keeping track of curr speed
            curr_speed += v[i].second;
            ans = max(ans, curr_speed * min_ef);
            
            pq.push(v[i].second);
            if(pq.size() > k - 1)
            {
                // removing the smallest speed elements from the queue
                curr_speed -= pq.top();
                pq.pop();
            }
        }
        return (int)(ans % 1000000007);   
    }
};