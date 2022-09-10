/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        // level sum to keep track of sum of consecutive levels
        int level_sum = 0, level = 0;
        // max_sum to keep track of max_sum so far, and ans for storing level of max_sum
        int max_sum = INT_MIN, ans = 0;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            // increasing level after every traversal
            level++;
            for(int i = 0; i < n; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                // Calculating the level_sum of the current level
                level_sum += node -> val;
                if(node -> left)
                    q.push(node -> left);
                if(node -> right)
                    q.push(node -> right);
            }
            // If level sum is greater than previously stored max sum
            if(level_sum > max_sum)
            {
                // then update the level to new level
                ans = level;
                // and update the max_sum to the current sum of the level
                max_sum = level_sum;
            }
            // set level sum to 0 after every level traversal
            level_sum = 0;
        }
        // returing level that had the maximum sum
        return ans;   
    }
};