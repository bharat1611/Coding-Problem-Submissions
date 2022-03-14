#include <iostream>
using namespace std;

main()
{
    string str;
    cout<<"Enter : ";
    getline(cin,str);
    int i=0,count=0;
    while(str[i]!= '\0')
    {
        count++;
        i++;
    }
    cout<<count;
}
