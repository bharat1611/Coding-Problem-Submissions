class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_map<int, unordered_set<int>> rows;
        unordered_map<int, unordered_set<int>> col;
        map<pair<int, int>, unordered_set<int>> box;
        
        for(int i = 0 ; i < 9; i++)
        {
            for(int j = 0 ; j < 9; j++)
            {
                if(board[i][j] == '.')
                    continue;
                
                if(rows[i].find(board[i][j]) != rows[i].end() || col[i].find(board[i][j]) != col[i].end() || box[{i/3,j/3}].find(board[i][j]) != box[{i/3,j/3}].end())
                   return false;
                else
                   {
                        rows[i].insert(board[i][j]);
                        col[j].insert(board[i][j]);
                        box[{i/3,j/3}].insert(board[i][j]);
                   }      
            }
        }
        return true;
    }
};