class MyHashMap {
public:
    int map[1000001] = {false};
    int val[1000001];
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        if(map[key] == true)
        {
            val[key] = value;
            return;
        }
        map[key] = true;
        val[key] = value;
    }
    
    int get(int key) {
        if(map[key] == true)
        {
            return val[key];
        }
        return -1;
    }
    
    void remove(int key) {
        map[key] = false;
    }
};
