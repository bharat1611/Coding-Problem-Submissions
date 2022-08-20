class Solution {
public:
    int largestInteger(int num) {
        int n = num;
        priority_queue<int, vector<int>, greater<int>> even;
        priority_queue<int, vector<int>, greater<int>> odd;
        while(num != 0)
        {
            int d = num % 10;
            if(d % 2 == 0)
                even.push(d);
            else
                odd.push(d);
            
            num /= 10;
        }
        string s = "";
        while(n > 0)
        {
            int d = n % 10;
            if(d % 2 == 0)
            {
                s = to_string(even.top()) + s;
                even.pop();
            }
            else
            {
                s = to_string(odd.top()) + s;
                odd.pop();
            }
            n /= 10;
        }
        cout << s << endl;
        int ans = stoi(s);
        return ans;
        
    }
};