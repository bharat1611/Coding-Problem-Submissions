#include <iostream>
using namespace std;
int main()
{
    int n,x;

    cout<<"Enter the number of strings : ";
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        x=s[i].compare(s[i+1]);
        if(x==0)
        {
            cout<<"Yes"<<endl;
        }
    }
}
