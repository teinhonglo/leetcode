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
    vector<vector<int>> tot_path;
    void pathSum_recur(TreeNode* root, int sum, vector<int> cur_path){
        // if root equals to nullptr, then return
        if(root == nullptr) return;
        sum -= root->val;
        cur_path.push_back(root->val);
        // if cur_node is leaf, then check if sum equals zero or not
        if(root->left == nullptr && root->right == nullptr && sum == 0){
            tot_path.push_back(cur_path);
            return;
        }
        // recursive left and right subtree
        pathSum_recur(root->left, sum, cur_path);
        pathSum_recur(root->right, sum, cur_path);
        return;
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int>cur_path;
        pathSum_recur(root, sum, cur_path);
        return tot_path;
        
    }
};
