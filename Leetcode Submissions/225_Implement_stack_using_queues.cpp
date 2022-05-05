class MyStack {
public:
    queue<int> q;
    int peek = - 1;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        peek = x;
    }
    
    int pop() {
        int n = q.size() - 1;
        while(n--)
        {
            peek = q.front();
            q.push(peek);
            q.pop();
        }
        int ans = q.front();
        q.pop();
        return ans;
    }
    int top() {
        return peek;
    }
    
    bool empty() {
        return q.size() == 0;
        
    }
};