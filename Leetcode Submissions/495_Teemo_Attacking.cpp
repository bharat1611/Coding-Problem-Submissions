class Solution
{
public:
    int findPoisonedDuration(vector<int> &timeSeries, int duration)
    {
        int ans = 0;
        int n = timeSeries.size();
        for (int i = 0; i < n;)
        {
            int start = timeSeries[i];
            int end = start + duration - 1;
            int j = i + 1;
            while (j < n && timeSeries[j] <= end)
            {
                end = timeSeries[j] + duration - 1;
                j++;
            }
            i = j;
            ans += (end - start + 1);
        }

        return ans;
    }
};