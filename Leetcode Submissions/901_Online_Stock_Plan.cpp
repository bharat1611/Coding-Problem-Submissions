class StockSpanner {
public:
    stack<pair<int, int>> st;
    int index = -1;
    StockSpanner() {
    }
    
    int next(int price) {
        index += 1 ;
        while(!st.empty() and st.top().second <= price)
            st.pop();
        
        if(st.empty())
        {
            st.push({index, price});
            return index + 1;
        }
        int curr = st.top().first;
        st.push({index, price});
        return index - curr;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */