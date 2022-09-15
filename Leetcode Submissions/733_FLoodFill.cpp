class Solution {
public:
    void helper(vector<vector<int>>&image, int i, int j, int oldC, int newC)
    {
        if(i < 0 || i >= image.size() || j < 0 || j >= image[0].size() || image[i][j] != oldC)
            return;
        
        image[i][j] = newC;
        helper(image, i + 1, j, oldC, newC);
        helper(image, i - 1, j, oldC, newC);
        helper(image, i, j + 1, oldC, newC);
        helper(image, i, j - 1, oldC, newC);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        if(image[sr][sc] != color)
            helper(image, sr, sc, image[sr][sc], color);
        
        return image;
    }
};