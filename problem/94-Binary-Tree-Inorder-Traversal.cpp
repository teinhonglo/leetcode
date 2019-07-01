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
    // vector<int> inorder;
    vector<int> inorderTraversal(TreeNode* root) {
        // recursive
        // if(root == nullptr) return inorder;
        // inorderTraversal(root->left);
        // inorder.push_back(root->val);
        // inorderTraversal(root->right);
        // return inorder;
        // iterative
        stack<TreeNode*> in_stk;
        vector<int> inorder;
        // push all left node
        while(root){
            in_stk.push(root);
            root = root->left;
        }
        // inorder traversal
        while(!in_stk.empty()){
            TreeNode* cur_node = in_stk.top();
            in_stk.pop();
            inorder.push_back(cur_node->val);
            // switch to right node
            cur_node = cur_node->right;
            // push all left node
            while(cur_node){
                in_stk.push(cur_node);
                cur_node = cur_node->left;
            }
        }
        return inorder;
    }
};
