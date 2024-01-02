class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
//         int m = matrix.size();
//         int n = matrix[0].size();
        
//         vector<int> row(m,1);
//         vector<int> col(n, 1);
        
//         for(int i = 0 ; i < m; i++){
//             for(int j = 0 ; j < n; j++){
//                 if(matrix[i][j] == 0){
//                     row[i] = 0;
//                     col[j] = 0;
//                 }
//             }
//         }
//         for(int i = 0; i < m; i++){
//             for(int j = 0; j < n; j++){
//                 if(row[i] == 0 or col[j] == 0)
//                     matrix[i][j] = 0;
//             }
//         }
        
        int n = matrix.size();
        int m = matrix[0].size();
        int col0 = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) 
                {
                    matrix[i][0] = 0;

                    if (j != 0)
                        matrix[0][j] = 0;
                    else
                        col0 = 0;
                }
            }
        }


        for(int i = n - 1; i >= 1; i--){
            for(int j = m - 1; j >= 1; j--){
                if(!matrix[i][0] || !matrix[0][j])
                    matrix[i][j] = 0;
            }
        }
        if(matrix[0][0] == 0){
            for(int i = 0 ; i < m; i++){
                matrix[0][i] = 0;
            }
        }	

        if(col0 == 0){
            for(int i = 0; i < n; i++)
                matrix[i][0] = 0;
        }
    }
};

