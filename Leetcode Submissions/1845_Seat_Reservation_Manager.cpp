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