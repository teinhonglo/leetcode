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
    int sumOfLeftLeavesRec(TreeNode* root, int sum,bool is_left){
        if(!root->left && !root->right){
            if(is_left){
                return sum + root->val;
            }else{
                return sum;
            }
        }
        sum = (root->left)?sumOfLeftLeavesRec(root->left, sum, true):sum;
        sum = (root->right)?sumOfLeftLeavesRec(root->right, sum, false):sum;
        return sum;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        return sumOfLeftLeavesRec(root, 0, false);
    }
};
