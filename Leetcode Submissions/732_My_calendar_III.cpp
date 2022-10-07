class MyCalendarThree {
public:
    map<int, int> mp;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int count = 0;
        int ans = 0;
        for(auto i : mp)
        {
            count += i.second;
            ans = max(ans, count);
        }
        return ans;
    }
};