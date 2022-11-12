class MedianFinder {
public:
    priority_queue<int> first;  // contains first half of the data stream
    priority_queue<int, vector<int>, greater<int>> second;     // contains second half of the stream
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        // initially, and adding values in sorted order
        if(first.empty() || first.top() > num)
            first.push(num);
        else
            second.push(num);
        
        // checking the size difference should not exceed 1
        if(first.size() > (second.size() + 1))
        {
            second.push(first.top());
            first.pop();
        }
        else if((first.size() + 1) < second.size())
        {
            first.push(second.top());
            second.pop();
        }        
    }
    
    double findMedian() {
        // if there are total even number of elements in the list
        if(first.size() == second.size())
        {
            if(first.empty())
                return 0;
            else
                return ((first.top()*1.0 + second.top())/2.0);
        }
        // in case of odd numbers on the list
        
        else if(first.size() == second.size() + 1)
            return (double)first.top();
        else
            return (double)second.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */