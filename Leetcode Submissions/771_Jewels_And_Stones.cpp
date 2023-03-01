class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        map<char, int> mp;
        for(int i = 0 ; i < jewels.size();i++)
            mp[jewels[i]]++;
        int total = 0;
        for(int i = 0 ; i < stones.size(); i++)
        {
            if(mp.find(stones[i]) != mp.end())
                total += mp[stones[i]];
        }
        return total;
    }
};

// class Solution {
// public:
//     int numJewelsInStones(string jewels, string stones) {
//         int count = 0 ;
//         unordered_map<char, int> mp;
//         for(int i = 0 ; i < stones.size(); i++)
//         {
//             mp[stones[i]]++;
//         }
//         for(int i = 0 ; i < jewels.size(); i++)
//         {
//             if(mp.find(jewels[i]) != mp.end())
//             {
//                 count += mp[jewels[i]];
//             }
//         }
//         return count;
//     }
// };

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int c = 0 ;
        for(int i = 0 ; i < jewels.size(); i++)
        {
            c += count(stones.begin(), stones.end(), jewels[i]);    
        }
        return c;
    }
};



