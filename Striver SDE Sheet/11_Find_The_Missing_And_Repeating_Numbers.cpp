// #include <bits/stdc++.h>

// pair<int,int> missingAndRepeating(vector<int> &arr, int n)
// {
// 	sort(arr.begin(), arr.end());
// 	int a = 0, b = 0;
// 	int sum = 0;
// 	for(int i = 0 ; i <n; i++)
// 	{
// 		if(arr[i] == arr[i + 1])
// 			a = arr[i];
// 		sum += arr[i];
// 	}
// 	sum -= a;

// 	b = (n*(n+1)/2) - sum;
// 	return { b, a };
// }

#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	vector<int>v(n + 1, 0);
	int a = 0, b = 0;
	for(int i = 0 ; i <= n; i++)
	{
		v[arr[i]]++;
	}	
	for(int i = 0 ; i < v.size(); i++)
	{
		if(v[i] == 0)
			a = i;
		if(v[arr[i]] == 2)
			b = arr[i];
	}
        return { a,b };
}
