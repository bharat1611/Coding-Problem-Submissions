#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> v;
        int n;
        cin >> n;
        if(n == 0)
            return 0;
        if(n == 1)
            return 0;
        
        int temp;
        for(int i = 0 ; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        int ans = 0;
        for(int i = v.size() - 1; i >= 0; i--)
        {
            if(v[i] != 0)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
        
    }
	return 0;
}
