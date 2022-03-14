#include <iostream>
using namespace std;
class Sum_prime
{
    int num;
public:
    void get()
    {
        cout<<"Enter the number : " ;
        cin>>num;
    }

    int check(int n)
    {
        int counter=1;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                counter=0;
                break;
            }
        }
        return counter;
    }
    friend void prime_sum(Sum_prime);
};

void prime_sum(Sum_prime D)
{
    int i,flag=1;
    for(i=2;i<(D.num)/2;i++)
    {
        if(D.check(i)==1)
        {
            if(D.check((D.num)-i)==1)
            {
                cout<<D.num<<" can be expressed as sum of "<<i<<" and "<<(D.num)-i<<endl;
                flag=0;
            }
        }
    }
    if(flag==1)
    {
        cout<<D.num<<" cannot be expressed as sum of two prime numbers"<<endl;
    }
}

int main()
{
    Sum_prime obj;
    obj.get();
    prime_sum(obj);
}
