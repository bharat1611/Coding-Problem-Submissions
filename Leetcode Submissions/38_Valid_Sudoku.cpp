class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        vector<set<int>> row(9);
        vector<set<int>> col(9);
        vector<set<int>> box(9);
        for(int i = 0 ; i < 9; i++)
        {
            for(int j = 0 ; j < 9 ; j++)
            {
                if(board[i][j] == '.')
                    continue;
                
                int curr = board[i][j];
                int index = 3*(i/3) + (j/3);
                if(row[i].count(curr) || col[j].count(curr) || box[index].count(curr))
                    return false;
                
                row[i].insert(curr);
                col[j].insert(curr);
                box[index].insert(curr);
                    
            }
        }
        return true;
    }
};