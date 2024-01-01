#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

	vector<int> row(n, 1);
	vector<int> col(m, 1);

	for(int i = 0; i < n; i++){
		for(int j = 0 ; j < m; j++){
			if(matrix[i][j] == 0){
				row[i] = 0;
				col[j] = 0;
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if((row[i] == 0) or (col[j] == 0))
				matrix[i][j] = 0;
		}
	}
	return matrix;
}