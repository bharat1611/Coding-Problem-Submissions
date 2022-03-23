#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string name;
	int i,j,l,c=0,s;
	cout<<"Enter the string : ";
	getline(cin,name);
	l=name.length();
	for(i=0;i<l;i++)
	{
		if(name[i]!=' ')
		{
			for(j=i+1;j<l;j++)
			{
				if(name[i]==name[j])
				{
					c++;
					name[j]=' ';
				}
			}
		cout<<"Frequency of "<<name[i]<<" is : "<<c<<endl;
		c=1;
		}
	}
}
