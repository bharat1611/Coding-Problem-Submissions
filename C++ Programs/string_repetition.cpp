#include <iostream>
using namespace std;

int main()
{
    int i=0,f;
    string name,cut;
    cin>>name;
    int l=name.length();
    f=l;
    while(l--)
    {
        if(name.at(i)!=name.at(i+1))
            cut=cut+name[i];
        i++;
        if(l==1)
            break;
        
    }
    cout<<f;
    cut=cut+name[f-1];
    cout<<cut;

}