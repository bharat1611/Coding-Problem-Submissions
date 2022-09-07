class SeatManager {
public:
    set<int> s;
    SeatManager(int n) {
        for(int i = 1; i <= n; i++)
            s.insert(i);
    }
    
    int reserve() {
        int a = *s.begin();
        s.erase(a);
        return a;
    }
    
    void unreserve(int seatNumber) {
        s.insert(seatNumber);        
    }
};

class SeatManager {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    SeatManager(int n) {
        for(int i = 1; i <= n; i++)
            pq.push(i);
    }
    
    int reserve() {
        int a = pq.top();
        pq.pop();
        return a;
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber);        
    }
};
