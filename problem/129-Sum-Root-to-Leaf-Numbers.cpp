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
    void travTree(TreeNode* root, int& sum, int num){
        if(!root){
            return;
        }
        num = num * 10 + root->val;
        if(!root->left && !root->right){
            sum += num;
        }
        travTree(root->left, sum, num);
        travTree(root->right, sum, num);
        return;
    }
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        travTree(root, sum, 0);
        return sum;
    }
};
