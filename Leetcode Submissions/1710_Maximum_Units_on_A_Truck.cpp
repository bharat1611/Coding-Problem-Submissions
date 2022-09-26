class Solution {
public:
    static bool cmp(vector<int> &a, vector<int>&b)
    {
        return a[1] < b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.rbegin(), boxTypes.rend(), cmp);
        int i = 0, sum = 0, boxes = 0;
        while(i < boxTypes.size())
        {
            if(boxes + boxTypes[i][0] >= truckSize)
            {
                sum += (truckSize - boxes) * boxTypes[i][1];
                return sum;
            }
            boxes += boxTypes[i][0];
            sum += (boxTypes[i][0] * boxTypes[i][1]);
            i++;
        }
        return sum;
    }
};