#include <iostream>
using namespace std;
void arraySort(int [],int,int[],int);
int main()
{
    int i,p,q;
    cout<<"Enter number of elements in array 1 and 2 : ";
    cin>>p>>q;
    int a[p],b[q];
    cout<<"Enter elements of array 1 : ";
    for(i=0;i<p;i++)
        cin>>a[i];
    cout<<"Enter elements of array 2 : ";
    for(i=0;i<q;i++)
        cin>>b[i];
    arraySort(a,p,b,q);
    return 0;
}
void arraySort(int a[],int p,int b[],int q)
{
    int index=0,r=p+q,i,j,temp;
    int c[r];
    for(i=0;i<p;i++)
    {
        c[index]=a[i];
        index++;
    }
    for(i=0;i<q;i++)
    {
        c[index]=b[i];
        index++;
    }
    for(i=0;i<r;i++)
    {
        for(j=i+1;j<r;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    index=0;
    cout<<"Sorted array is : ";
    for(i=0;i<p;i++)
    {
        a[i]=c[index];
        index++;
        cout<<a[i]<<" ";
    }
    for(i=0;i<q;i++)
    {
        b[i]=c[index];
        index++;
        cout<<b[i]<<" ";
    }

}
