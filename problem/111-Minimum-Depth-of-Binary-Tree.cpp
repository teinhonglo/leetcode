/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int min = INT_MAX;
    void dfs(TreeNode* root, int depth){
        if(!root->left && !root->right){
            if(depth < min)
                min = depth;
        }else{
            if(root->left)
                dfs(root->left, depth + 1);
            if(root->right)
                dfs(root->right, depth + 1);
        }
    }
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        dfs(root, 1);
        return min;
    }
};
