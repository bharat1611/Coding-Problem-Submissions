class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int curr = 0;
        int highest = 0;
        for(int i = 0 ; i < gain.size(); i++)
        {
            curr += gain[i];
            highest = max(highest, curr);
        }
        return highest;
    }
};