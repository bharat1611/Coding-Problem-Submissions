#include <iostream>
using namespace std;
void arrayFunc(int [],int,int);
int main()
{
	int sum=0,i,s,n;
	cout<<"Enter the number of elements in the array : ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of the array : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the value of sum : ";
	cin>>s;
	arrayFunc(a,n,s);
	return 0;
}
void arrayFunc(int a[],int n,int s)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]+a[j]==s)
				cout<<a[i]<<" + "<<a[j]<<" = "<<s<<endl;
		}
	}
}
