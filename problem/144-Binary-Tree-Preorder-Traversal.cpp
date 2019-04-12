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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> pre_ret;
        stack<TreeNode*>s;
        if(root == nullptr) return pre_ret;
        s.push(root);
        TreeNode* cur_node;
        
        while(!s.empty()){
            cur_node = s.top();
            pre_ret.push_back(cur_node->val);
            s.pop();
            if(cur_node->right) s.push(cur_node->right);
            if(cur_node->left) s.push(cur_node->left);
            
        }
        return pre_ret;
    }
};
