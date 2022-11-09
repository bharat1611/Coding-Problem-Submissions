// TLE
// class Solution {
// public:
//     int numPairsDivisibleBy60(vector<int>& time) {
//         int count = 0;
//         int n = time.size();
//         for(int i = 0 ; i < n; i++)
//         {
//             int curr = time[i];
//             for(int j = i  + 1; j < n; j++)
//             {
//                 if((curr + time[j]) % 60 == 0)
//                     count++;
//             }
//         }
//         return count;
//     }
// };

class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> v(60, 0);
        int count = 0;
        for(int i = 0 ; i < time.size(); i++)
        {
            int curr = time[i] % 60;
            if(curr == 0)
                count += v[0];
            else
                count += v[60 - curr];
            v[curr]++ ;
        }
        return count; 
    }
};