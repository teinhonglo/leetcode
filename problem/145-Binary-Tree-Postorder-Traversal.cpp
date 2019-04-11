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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ret;
        if(root == nullptr) return ret;
        stack<TreeNode*> trav;
        TreeNode* cur_root;
        
        trav.push(root);
        
        while(!trav.empty()){
            cur_root = trav.top();
            ret.push_back(cur_root->val);
            trav.pop();
            if(cur_root->left) trav.push(cur_root->left);
            if(cur_root->right) trav.push(cur_root->right);
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};
