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
    int sumtree(TreeNode* root, int b){
        if(root == NULL) return 0;

        int total_sum = (b << 1) + root->val;
        // leaf of current subtree
        if(root->left == NULL && root->right == NULL) return total_sum;
        // recursive of the subtree
        return (sumtree(root->left, total_sum) + sumtree(root->right, total_sum));
        
    }
    int sumRootToLeaf(TreeNode* root) {
        return sumtree(root, 0);
    }
};
