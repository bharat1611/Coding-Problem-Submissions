class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int> pq;
        
        for(int i = 0; i < amount.size(); i++)
            pq.push(amount[i]);
        int count = 0;
        while(!pq.empty())
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            if(a <= 0 and b <= 0)
            {
                break;
            }
            a--;
            b--;
            pq.push(a);
            pq.push(b);
            count++;
        }
        return count;
    }
};
class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int> pq;
        
        for(int i = 0; i < amount.size(); i++)
            pq.push(amount[i]);
        int count = 0;
        while(!pq.empty())
        {
            
            if(pq.size() > 2 and pq.top() != 0){
                int a = pq.top();
                pq.pop();
                int b = pq.top();
                pq.pop();
                a--;b--;
                pq.push(a);
                pq.push(b);
                count++;
            }
            else{
                count = count + pq.top();
                break;
            }
            
            
        }
        return count;
    }
};