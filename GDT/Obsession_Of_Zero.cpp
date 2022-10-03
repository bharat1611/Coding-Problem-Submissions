#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		long long a, b;
		cin >> a >> b;
		long long ans = 0;
		if(a < b)
		{
			while(2 * a <= b)
			{
				a *= 2;
				ans++;
			}
			while(b != a)
			{
				b--;
				ans++;
			}
			cout << ans + a << endl;
		}
		
		else
		{
			while(2 * b <= a)
			{
				b *= 2;
				ans++;
			}
			while(b != a)
			{
				a--;
				ans++;
			}
			cout << ans + a << endl;
		}
	}
}