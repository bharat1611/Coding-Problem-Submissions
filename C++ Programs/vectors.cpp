#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> a;
    // int input=0;
    // for(int i=0;i<5;i++)
    // {
    //     cin>>input;
    //     a.push_back(input);

    // }
    // a.pop_back();
    // for(int c : a)
    // {
    //     cout<<c<<" " ;
    // }


    vector<vector<int>> test{{1,2,3,4,5}, {2,3,4}, {12,23,2,2,1,1}};
    cout<<" Columns : " <<test[1].size()<<endl;
    cout<<"Rows : "<<test.size();
}