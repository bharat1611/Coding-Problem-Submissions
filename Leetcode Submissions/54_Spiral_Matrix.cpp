class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans;
        int top = 0, right = n - 1, left = 0, down = m - 1;
        int dir = 0;
        while(top <= down and left <= right)
        {
            if(dir == 0)
            {
                for(int i = left ; i <= right; i++)
                    ans.push_back(matrix[top][i]);
                top++;
                dir = 1;
            }
            else if(dir == 1)
            {
                for(int i = top ; i <= down; i++)
                    ans.push_back(matrix[i][right]);
                right--;
                dir = 2;
            }
            else if(dir == 2)
            {
                for(int i = right; i >= left; i--)
                    ans.push_back(matrix[down][i]);
                down--;
                dir = 3;
            }
            else if(dir == 3)
            {
                for(int i = down; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
                dir = 0;
            }
            // dir = (dir + 1)%4;
        }
        return ans;
    }
};