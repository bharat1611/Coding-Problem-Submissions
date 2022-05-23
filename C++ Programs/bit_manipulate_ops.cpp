#include <iostream>
#include <bits.h>

using namespace std;
void getithBit(int num, int i)
{
    int mask = (1 << i);
    int n = (num & mask);
    n <= 0 ? cout<<"0"<<endl : cout<<"1"<<endl;
}

void removeithbit(int num, int i)
{
    int mask = ~(1 << i);
    // mask = (~mask);
    num = (num&mask);
    cout << num << endl;
}

void setithbit(int num, int i)
{
    int mask = (1 << i);
    num = (num|mask);
    cout<< num<< endl;
}

int main()
{
    int n = 10;
    int i = 0;
    cin>>i;
    getithBit(n , i);
    removeithbit(n, i);
    setithbit(n, i);
}