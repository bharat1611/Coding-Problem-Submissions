#include <iostream>
using namespace std;

int main()
{
    int ch;
    cout<<"Press 1 to check Composite Number\n";
    cout<<"Press 2 to check Smallest Digit in the number\n";
    cout<<"Enter your choice : ";
    cin>>ch;
    switch(ch)
    {
    case 1:
    {
        int i,n=0,c=0;
        cout<<"\nEnter the Number to be checked  : ";
        cin>>n;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
                c++;
        }
        if(c!=2)
            cout<<n<<" is a Composite Number"<<endl;
        else
            cout<<n<<" is not a Composite Number"<<endl;
        break;
    }
    case 2:
        {
        int n,min=0,r;
        cout<<"Enter the Number : ";
        cin>>n;
        min=n%10;
        for(int i=n;i>0;i=i/10)
        {
            r=n%10;
            if(min>r)
                min=r;
            n=n/10;
        }
        cout<<r;
        break;
        }
    default:
        cout<<"\nWrong Choice"<<endl;

    }
}
