class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int count = 0;
        while(pq.size() > 1)
        {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if(x - 1 > 0)
                pq.push(x - 1);
            if(y - 1 > 0)
                pq.push(y - 1);
            count++;
        }
        return count;
    }
};