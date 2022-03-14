#include <iostream>
using namespace std;
#define MAX 15
class Convert
{
    int num,a[MAX];
public:
    Convert()
    {
        num=0;
    }
    void getdata()
    {
        cout<<"Enter the number : ";
        cin>>num;
    }
    void binary()
    {
        int i=0;
        while(num>0)
        {
            a[i]=num%2;
            num=num/2;
            i++;
        }
        cout<<"The binary equivalent of the number is : ";
        for(i=i-1;i>=0;i--)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
    ~Convert()
    {

    }
};
int main()
{
    Convert obj;
    int i=4;
    while(i--)
    {
        obj.getdata();
        obj.binary();
    }

}
