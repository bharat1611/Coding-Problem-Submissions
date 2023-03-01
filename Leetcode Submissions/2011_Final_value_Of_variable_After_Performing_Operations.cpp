class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(int i = 0; i < operations.size(); i++)
        {
            for(int j = 0 ; j < 3; j++)
            {
                if(operations[i][j] == '-')
                {
                    x = x - 1;
                    break;
                }
                else if(operations[i][j] == '+')
                {
                    x = x + 1;
                    break;
                }
            }
        }
        return x;
    }
};

// class Solution {
// public:
//     int finalValueAfterOperations(vector<string>& operations) {
//         int count = 0;
//         for(int i = 0 ; i < operations.size(); i++)
//         {
//             if(operations[i] == "--X" or operations[i] == "X--")
//                 count--;
//             if(operations[i] == "++X" or operations[i] == "X++")
//                 count++;
//         }
//         return count;
//     }
// };
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int p = 0, n = 0, total = 0;
        for(int i = 0 ; i < operations.size(); i++)
        {
            p += count(operations[i].begin(), operations[i].end(), '+');
            n += count(operations[i].begin(), operations[i].end(), '-');
        }
        total = p - n;
        int num = total/2;
        return num;
        
    }
};