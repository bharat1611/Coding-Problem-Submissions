class Solution {
public:
    bool isRectangleOverlap(vector<int>& r1, vector<int>& r2) {
        
        int xOverlap = min(r1[2], r2[2]) - max(r1[0], r2[0]);
        int yOverlap = min(r1[3], r2[3]) - max(r1[1], r2[1]);
        
        if(xOverlap > 0 and yOverlap > 0)
            return true;
        return false;
    }
};