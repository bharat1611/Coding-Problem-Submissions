#include <iostream>
using namespace std;

int main()
{
    string str = "abcdeafghi";
    int n = str.length();
    int count = 1, ans = 0;

    for(int i = 0 ; i < n - 1; i++)
    {
        if(s[i] < s[i + 1])
            count++;
        else
        {
            ans = max(ans, count);
            count = 1;
        }
    }
    return max(count, ans);

}