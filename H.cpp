#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long gcd(long long int a, long long int b)
{
if (b == 0)
	return a;
return gcd(b, a % b);
}


long long lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}


int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<vector<int>> dp(105 + 1, (vector<int> (105 + 1, -1)));

    for(int i = 0 ; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for(int i = 0 ; i < n; i++)
    {
        for(int j = i + 1 ; j < n; j++)
        {
            int ans = -1;
            if(dp[arr[i]][arr[j]] != -1){
                ans = dp[arr[i]][arr[j]];
            }
            else{
                int gcd_n = gcd(arr[i], arr[j]);
                int lcm_n = lcm(arr[i], arr[j]);
                ans = lcm_n - gcd_n;
            }
            if(ans == 0)
                count++;
        }
    }
    cout << count << endl;
}