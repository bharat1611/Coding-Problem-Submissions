#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[] = {1,2,8,9};
    int n = 4;
    int m = 14;
    vector<int> dp(n);
    int sum = 0, min_e = INT_MAX;
    for(int i = 0 ; i < n; i++)
    {
        int div = nums[i];
        for(int j = 0; j < n; j++)
        {
            if(nums[j] % div == 0)
                sum += (nums[j]/div);
            else
                sum += (nums[j]/div) + 1;
        }
        if(sum <= m and div < min_e)
        {
            min_e = div;
        }
        sum = 0;
    }
    cout << min_e << " ";
}