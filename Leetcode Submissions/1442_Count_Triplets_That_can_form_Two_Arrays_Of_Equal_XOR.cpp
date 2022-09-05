class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int xo = 0;
        int result = 0;
        for(int i = 0 ; i < arr.size(); i++)
        {
            xo = arr[i];
            for(int j = i + 1; j < arr.size(); j++)
            {
                xo = xo ^ arr[j];
                if(xo == 0)
                    result = result + (j - i);
            }
        }
        return result;
    }
};