// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//         if(root == NULL)
//             return 0;
        
//         int left = maxDepth(root -> left) + 1;
//         int right = maxDepth(root -> right) + 1;
//         return max(left, right);
//     }
// };
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        int left = maxDepth(root -> left) ;
        int right = maxDepth(root -> right) ;
        return max(left, right) + 1;
    }
};