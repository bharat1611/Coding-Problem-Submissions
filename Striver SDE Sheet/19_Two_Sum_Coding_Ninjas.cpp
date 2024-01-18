#include <unordered_map>
string read(int n, vector<int> book, int target)
{
    unordered_map<int, int> mp;
    for(int i = 0 ; i < book.size(); i++){
        if(mp.find(target - book[i]) != mp.end()){
            return "YES";
        }
        mp[book[i]] = i;
    }
    return "NO";
}
