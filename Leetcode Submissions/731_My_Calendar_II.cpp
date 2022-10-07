class MyCalendarTwo {
public:
    map<int, int> mp;
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int count = 0;
        // counting occurences. if count > 2 , then triple booking
        for(auto i : mp)
        {
            count += i.second;
            if(count > 2)
                break;
        }
        // removing entries from the map
        if(count > 2)
        {
            mp[start]--;
            mp[end]++;
            return false;
        }
        return true;
    }
};