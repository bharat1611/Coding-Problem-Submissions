#include<vector>
// Approach 1 - O(n + m) space and time

// void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
// 	int n = a.size();
// 	int m = b.size();
// 	vector<long long> c(n + m, 0);
// 	int i = 0, j = 0, index = 0;
// 	while(i < n and j < m)
// 	{
// 		if(a[i] <= b[j])
// 		{
// 			c[index] = a[i];
// 			index++, i++;
// 		}
// 		else{
// 			c[index] = b[j];
// 			index++, j++;
// 		}
// 	}
// 	while(i < n){
// 		c[index++] = a[i++];
// 	}
// 	while(j < m){
// 		c[index++] = b[j++];
// 	}
// 	for(int i = 0 ; i < c.size(); i++)
// 	{
// 		if(i < n) a[i] = c[i];
// 		else
// 			b[i - n] = c[i];
// 	}
// }

// Approach 2
// O(nlogn + mlogm) time with O(1) space
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int n = a.size();
	int m = b.size();
	int left = n - 1, right = 0;

	while(a[left] >= b[right]){
		swap(a[left], b[right]);
		left--;
		right++;
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
}
