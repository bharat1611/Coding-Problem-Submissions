#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string name;
	int i,j,l=0,lower=0,u=0,v=0,d=0;

	cout<<"Enter the string :";
	getline(cin,name);
	l=name.length();
	for(i=0;i<l;i++)
	{

		if(	name[i]>='A' && name[i]<='Z')
			u++;
		if(name[i]>='a' && name[i]<='z')
			lower++;
		if(name[i]>='0' && name[i]<='9')
			d++;
		if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o'|| name[i]=='u'
            || name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O'|| name[i]=='U')
			v++;
	}
	cout<<"Number of uppercase are : "<<u<<endl;
	cout<<"Number of lowercase are : "<<lower<<endl;
	cout<<"Number of digits are : "<<d<<endl;
	cout<<"Number of vowels are : "<<v<<endl;
}
