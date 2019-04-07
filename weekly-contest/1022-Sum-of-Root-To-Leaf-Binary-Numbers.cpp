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
    int sumTree(TreeNode * node, int bin_sum){
        // if NULL return 0
        if(node == NULL) return 0;
        // accumulate current value
        int total_sum = (bin_sum << 1) + node->val;
        // neither left or right children (i.e., is left)
        if(node->left == NULL && node->right == NULL) return total_sum;
        // recursive left and right subtree
        return sumTree(node->left, total_sum) + sumTree(node->right, total_sum);
        
    }
    int sumRootToLeaf(TreeNode* root) {
        return sumTree(root, 0);
    }
};
