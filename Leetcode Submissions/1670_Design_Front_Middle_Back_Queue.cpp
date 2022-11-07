class FrontMiddleBackQueue {
public:
    vector<int> ans;
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
        ans.insert(ans.begin(), val);
    }
    
    void pushMiddle(int val) {
        int mid = ans.size()/2;
        ans.insert(ans.begin() + mid, val);
    }
    
    void pushBack(int val) {
        ans.push_back(val);
    }
    
    int popFront() {
        if(ans.size() == 0)
            return -1;
        int b = ans[0];
        ans.erase(ans.begin());
        return b;
    }
    int popMiddle() {
        if(ans.size() == 0)
            return -1;
        
        int mid = ans.size() % 2 == 0 ? (ans.size()/2) - 1 : ans.size()/2;
        mid = max(0, mid);
        int c = ans[mid];
        ans.erase(ans.begin() + mid);
        return c;
    }
    
    int popBack() {
        if(ans.size() == 0)
            return -1;
        int n = ans.size() - 1;
        int b = ans[n];
        ans.pop_back();
        return b;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */