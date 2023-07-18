class LRUCache {
    int a[10001], last_idx[100001], tail , head, sz;
    queue<int>q;
    int Capacity;
public:
    LRUCache(int capacity) {
        for(int i=0; i<10001; ++i) a[i]=last_idx[i]=-1;
        Capacity=capacity;
        tail = head = sz =0;
    }
    
    int get(int key) {
        if(a[key]==-1)
            return a[key];
      

        q.push(key);
        last_idx[key] = head;
        ++head;             
        return a[key];
    }
    
    void put(int key, int value) {
             if(a[key] == -1){

                 if(sz == Capacity){
                   
                     int p = q.front();

                     while(last_idx[p] != tail){
                         q.pop();
                         ++tail;
                         p = q.front();
                     }

                     a[p]=-1;
                     q.pop();
                     --sz; 
                     ++tail;

                 }
                    
                    a[key]=value;
                    q.push(key);
                    sz++;
                    last_idx[key] = head;
                    head++;        
             }
             
             else{
                 a[key]=value;
                 q.push(key);
                 last_idx[key]=head;
                 head++;   
             }
    }
};
