#include <iostream>
using namespace std;

class Count
{
public:
    void display(int sum,int c)
    {
        cout<<"The value of sum is : "<<sum<<endl;
        cout<<"The number of digits are : "<<c<<endl;
    }
    friend void calc(Count);
};

void calc(Count D)
{
    int sum=0,c=1;
    for(int i=100;i<200;i++)
    {
        if(i%9==0)
        {
            sum=sum+i;
            c++;
        }
    }
    D.display(sum,c);
}

int main()
{
    Count c;
    calc(c);
}
