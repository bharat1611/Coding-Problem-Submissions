// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int MinRemove(int n, string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << MinRemove(n, s) << endl;
    }
return 0;
}// } Driver Code Ends


bool isPalindrome(string s)
{
    int i = 0, j = s.length() - 1;
    while(i < j)
    {
        if(s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
int MinRemove(int n, string s){
    if(s.length() == 1) return 1;
    else if(isPalindrome(s))
        return 1;
        
    return 2;
    
}