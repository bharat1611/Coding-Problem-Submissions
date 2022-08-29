// class Solution
// {
// public:
//     bool static comp(const vector<int> &x, const vector<int> &y)
//     {
//         return (x[0] + x[1]) < (y[0] + y[1]);
//     }

//     vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k)
//     {

//         int m = nums1.size();
//         int n = nums2.size();

//         vector<vector<int>> ans;

//         for (int i = 0; i < m; ++i)
//         {
//             for (int j = 0; j < n; ++j)
//             {
//                 ans.push_back({nums1[i], nums2[j]});
//             }
//         }
//         sort(ans.begin(), ans.end(), comp);
//         int sz = ans.size();
//         k = min(k, sz);
//         ans.resize(k);

//         return ans;
//     }
// };

class comp
{
public:
    bool operator()(pair<int, int> p1, pair<int, int> p2)
    {
        return p1.first + p1.second < p2.first + p2.second;
    }
};
class Solution
{
public:
    vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, comp> pq;
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                int sum = nums1[i] + nums2[j];
                if (pq.size() < k)
                    pq.push({nums1[i], nums2[j]});
                else if (pq.top().first + pq.top().second > sum)
                {
                    pq.push({nums1[i], nums2[j]});
                    pq.pop();
                }
                else
                    break;
            }
        }
        vector<vector<int>> ans;
        vector<int> tmp;
        while (pq.size())
        {
            tmp.push_back(pq.top().first);
            tmp.push_back(pq.top().second);
            ans.push_back(tmp);
            pq.pop();
            tmp.clear();
        }
        return ans;
    }
};