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
    TreeNode* construct(vector<int>& preorder, int c_idx, int sub_size){
        if(c_idx >= sub_size) return NULL;
        TreeNode* root = new TreeNode(preorder[c_idx]);
        int p_idx = c_idx;
        // determine where is the parent of the subtree
        while(p_idx < sub_size && preorder[p_idx] <= root->val){
            ++p_idx;
        }
        // construct left and right subtree
        root->left = construct(preorder, c_idx + 1, p_idx);
        root->right = construct(preorder, p_idx, sub_size);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        // Idea: Pre-order value of vector is left substree.
        //       I should determine where is the root 
        //       (distance to right subtree).
        return construct(preorder, 0, preorder.size());
    }
};
