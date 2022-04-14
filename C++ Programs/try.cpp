#include <iostream>
using namespace std;

class S
{
    int x,y;
public:
    S(int n,int m)
    {
        x=n;
        y=n;
    }
    void disp()
    {
        cout<<x<<"\t"<<y;
    }
};

main()
{
    int a,b;
    int j;
    S obj(4,5);
    for(j=0;j<5;j++)
    {
        cin>>a>>b;
        obj[j].disp();
    }

}
