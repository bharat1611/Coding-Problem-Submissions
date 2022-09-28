// class Solution {
// public:
//     bool helper(int N)
//     {
//         if(N == 1)
//             return 0;
//         for(int i = 1 ; i < N; i++)
//         {
//             if(N % i == 0)
//             {
//                 if(helper(N - i) == 0)
//                     return 1;
//             }
//         }
//         return 0;
//     }
//     bool divisorGame(int n) {
//         return helper(n);
//     }
// };

class Solution {
public:
    vector<int> dp;
    bool helper(int N)
    {
        if(N == 1)
            return 0;
        if(dp[N] != -1)
            return dp[N];
        
        for(int i = 1 ; i < N; i++)
        {
            if(N % i == 0)
            {
                if(helper(N - i) == 0)
                    return dp[N] = 1;
            }
        }
        return dp[N] = 0;
    }
    bool divisorGame(int n) {
        dp.resize(1001, -1);
        return helper(n);
    }
};