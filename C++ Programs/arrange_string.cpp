#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i,l=0;
	string s,upper=" ",lower=" ",digit=" ",special=" ",f=" ";
    char ch;
	cout<<"Enter the string : ";
	getline(cin,s);
	l=s.length();
	for(i=0;i<l;i++)
	{
	    ch=s.at(i);
		if(ch>='A' && ch<='Z')
            upper=upper+ch;
		else if(ch>='a' && ch<='z')
			lower=lower+ch;
		else if(ch>='0' && ch<='9')
			digit=digit+ch;
        else
        special=special+ch;
    }
    f=digit+upper+lower+special;
    cout<<f;
}
