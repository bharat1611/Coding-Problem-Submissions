#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i,index,l=0;
	string s,s1;
    char ch,ch1;
	cout<<"Enter the string : ";
	getline(cin,s);
	l=s.length();
	for(i=0;i<l-1;i++)
    {
        ch=s.at(i);
        ch1=s.at(i+1);
        if(ch!=ch1)
            s1=s1+ch;
    }
    s1.push_back(s[l-1]);
    cout<<s1;
    return 0;
}
