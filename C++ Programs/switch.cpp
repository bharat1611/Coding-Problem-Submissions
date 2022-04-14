#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"Enter 1 to check whether a number is composite number\n";
    cout<<"Enter 2 to find the smallest digit of an integer\n";
    cout<<"Enter choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        {
            int n=0,c=0;
            cout<<"\nEnter the number : ";
            cin>>n;
            for(int i=1;i<=n;i++)
            {
                if(n%i==0)
                    c++;
            }
            if(c==2)
                cout<<"Number is not composite";
            else
                cout<<"Number is composite";
                break;
        }
    case 2:
        {
            int n,d,s;
            cout<<"Enter a number :";
            cin>>n;
            s=n%10;
            n=n/10;
            while(n>0)
            {
                d=n%10;
                n=n/10;
                if(d<s)
                    s=d;
            }
            cout<<"Smallest digit is : "<<s;
            break;
        }
    default:
        {
            cout<<"Inappropriate Choice :";
            break;
        }
    }
}

