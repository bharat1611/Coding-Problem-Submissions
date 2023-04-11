class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        
        long long low = 0, high = 1e15;
        long long ans = 0;
        while(low <= high)
        {
            long long mid = low + (high - low)/2;
            long long curr = 0;
            for(int i = 0 ; i < ranks.size(); i++)
            {
                curr += sqrt(mid/ranks[i]);
            }
            if(curr >= cars)
            {
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return ans;
    }
};