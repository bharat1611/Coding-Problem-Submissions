// #include <bits/stdc++.h>

// int findDuplicate(vector<int> &arr, int n){
// 	sort(arr.begin(), arr.end());

// 	for(int i = 0 ; i < n - 1; i++){
// 		if(arr[i] == arr[i + 1])
// 			return arr[i];
// 	}
// 	return arr[0];
// }

#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	vector<int> freq(n + 1, 0);

	for(int i = 0 ; i < n; i++)
	{
		if(freq[arr[i]] == 0){
			freq[arr[i]]++;
		}
		else
			return arr[i];
	}
	return arr[0];
}

