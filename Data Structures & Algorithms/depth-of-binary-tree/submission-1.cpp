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
    void dfs(TreeNode* root, int currDepth, int& maxDepth) {
        if(root == nullptr) return;
        

        if(maxDepth < currDepth) maxDepth = currDepth;

        dfs(root->left, currDepth + 1, maxDepth);
        dfs(root->right, currDepth + 1, maxDepth);

    }

    int maxDepth(TreeNode* root) {
        int max = 0;
        if(root == nullptr) return 0;
        
        dfs(root, 1, max);

        return max;
    }
};
