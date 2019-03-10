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
    int height(TreeNode* root){
        if(!root) return 0;
        return 1 + max(height(root->left), height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        // the height of subtree.
        int left_height = height(root->left);
        int right_height = height(root->right);
        // the depth of two subtrees of this node should not differ by more than 1
        if(abs(left_height-right_height) > 1){
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
