#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int n = a.size();
	int m = b.size();
	vector<long long> c(n + m, 0);
	int i = 0, j = 0, index = 0;
	while(i < n and j < m)
	{
		if(a[i] <= b[j])
		{
			c[index] = a[i];
			index++, i++;
		}
		else{
			c[index] = b[j];
			index++, j++;
		}
	}
	while(i < n){
		c[index++] = a[i++];
	}
	while(j < m){
		c[index++] = b[j++];
	}
	for(int i = 0 ; i < c.size(); i++)
	{
		if(i < n) a[i] = c[i];
		else
			b[i - n] = c[i];
	}
}