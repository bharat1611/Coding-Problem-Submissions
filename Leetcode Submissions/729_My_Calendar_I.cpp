#include <bits/stdc++.h>
using namespace std;

class MyCalendar {
public:
    vector<pair<int,int>>cal;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) 
    {
        for(auto i : cal)
        {
            if((start < i.first && end > i.first))
                return false;
            else if(start > i.first && end <= i.second)
               return false;
            else if(start >= i.first && start <= i.second)
                return false;
        }
        
        cal.push_back({start, end -1});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */