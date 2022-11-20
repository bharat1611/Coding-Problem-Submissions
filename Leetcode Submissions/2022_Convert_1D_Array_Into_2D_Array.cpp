class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int org = original.size();
        if(m*n != org)
            return {};
        vector<vector<int>> arr(m, vector<int> (n ,0));
        int row = 0, col = 0;
        for(int i = 0 ; i < org; i++)
        {
            arr[row][col] = original[i];
            col++;
            if(col == n)
            {
                row++;
                col = 0;
            }
        }
        return arr;
    }
};