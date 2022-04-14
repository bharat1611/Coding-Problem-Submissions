
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		long k;
		cin>>n;
		cin>>k;
		long long a[n],sum=0;

		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		while(k>0)
		{
			if(a[n]==a[n-1])
			{
				sum=sum+a[n];
			}
			else
			{
				sum=sum+a[n];
				k--;
			}
			n--;
		}
		cout<<sum;
	}
}
