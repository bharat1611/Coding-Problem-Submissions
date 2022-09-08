// The API isBadVersion is defined for you.
// bool isBadVersion(int version);


class Solution {
public:
    int BinarySearch(int left, int right)
    {
        int ans = -1;
        
        
        while(left <= right)
        {
            int mid = ((unsigned)left + (unsigned)right) / 2;
            if(isBadVersion(mid) == true)
            {
                ans = mid;
                right = mid - 1;
            }   
            else
            {
                left = mid + 1;
            }
        }
        
        return ans;
    }
    
    int firstBadVersion(int n) {
        //Basically find the the left-most number which returns true
        int left = 0, right = n;
        
        return BinarySearch(left, right);
        
    }
};