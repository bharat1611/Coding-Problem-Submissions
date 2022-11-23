// Given lenghts of a plank, shorter and longer, (s and l). You have to make a dining board using using exactly k planks. Tell all the lengths that can be achieved by this.

#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
//     public:
//     set<int> calculate_length(int s, int l, int k)
//     {
//         set<int> st;
//         for(int i = 0 ; i <= k; i++)
//         {
//             int sum = s * (k - i) + l * (i);
//             st.insert(sum);
//         }
//         return st;
//     }
// };

// int main()
// {
//     Solution obj;
//     int s = 0, l = 0, k = 0;
//     cout << "Enter the plank length, smaller and larger : ";
//     cin >> s >> l;
//     cout << "Enter the value of k : ";
//     cin >> k;
//     set<int> st;
//     st = obj.calculate_length(s, l, k);
//     for(auto i : st)
//     {
//         cout << i << " " ;
//     }

// }

void findLength_Util(unordered_set<int> &st, int s, int l, int k, int total)
{
    if(k == 0)
    {
        st.insert(total);
        return;
    }
    findLength_Util(st,s, l, k - 1, total + s);
    findLength_Util(st, s, l, k - 1, total + l);
}
int main()
{
    int s = 0, l = 0, k = 0;
    cout << "Enter the plank length, smaller and larger : ";
    cin >> s >> l;
    cout << "Enter the value of k : ";
    cin >> k;
    unordered_set<int> st;
    findLength_Util(st, s, l, k, 0);
    for(auto i : st)
    {
        cout << i << " " ;
    }
}
