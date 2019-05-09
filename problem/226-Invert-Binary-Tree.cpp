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
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return root;
        
        // swap
        TreeNode *tmp_left = root->left;
        root->left = root->right;
        root->right = tmp_left;
        
        // recursive
        invertTree(root->left);
        invertTree(root->right);
        
        return root;
    }
};
