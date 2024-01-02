vector<vector<int>> pascalTriangle(int n) {

    vector<vector<int>> ans;

    ans.push_back({1});

    for (int i = 1; i < n; i++) {
      vector<int> level;
      level.push_back(1);
      for(int j = 1; j < i; j++){
          level.push_back(ans[i - 1][j] + ans[i - 1][j - 1]);
        }
        level.push_back(1);
        ans.push_back(level);
    }
    return ans;
}