#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    int input=0;
    for(int i=0;i<5;i++)
    {
        cin>>input;
        a.push_back(input);

    }
    a.pop_back();
    for(int c : a)
    {
        cout<<c<<" " ;
    }
}